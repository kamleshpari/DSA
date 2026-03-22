#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Book {
private:
    int bookID;
    char title[50];
    char author[50];
    int issued; // 0 = available, 1 = issued

public:
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Title: ";
        cin.getline(title, 50);

        cout << "Enter Author Name: ";
        cin.getline(author, 50);

        issued = 0;
    }

    void displayBook() {
        cout << "\nBook ID: " << bookID;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        if (issued == 0)
            cout << "\nStatus: Available\n";
        else
            cout << "\nStatus: Issued\n";
    }

    int getID() {
        return bookID;
    }

    int isIssued() {
        return issued;
    }

    void issueBook() {
        issued = 1;
    }

    void returnBook() {
        issued = 0;
    }

    void updateBook() {
        cin.ignore();
        cout << "Enter New Title: ";
        cin.getline(title, 50);

        cout << "Enter New Author: ";
        cin.getline(author, 50);
    }
};

void addRecord() {
    Book b;
    ofstream file("library.dat", ios::binary | ios::app);

    b.addBook();
    file.write((char*)&b, sizeof(b));

    file.close();
    cout << "\nBook added successfully!\n";
}

void displayRecord() {
    Book b;
    ifstream file("library.dat", ios::binary);

    if (!file) {
        cout << "\nNo records found!\n";
        return;
    }

    cout << "\n--- Book List ---\n";

    while (file.read((char*)&b, sizeof(b))) {
        b.displayBook();
    }

    file.close();
}

void searchRecord() {
    Book b;
    int id, found = 0;

    cout << "\nEnter Book ID to search: ";
    cin >> id;

    ifstream file("library.dat", ios::binary);

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getID() == id) {
            cout << "\nBook Found:\n";
            b.displayBook();
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";

    file.close();
}

void deleteRecord() {
    Book b;
    int id, found = 0;

    cout << "\nEnter Book ID to delete: ";
    cin >> id;

    ifstream file("library.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getID() != id) {
            temp.write((char*)&b, sizeof(b));
        } else {
            found = 1;
        }
    }

    file.close();
    temp.close();

    remove("library.dat");
    rename("temp.dat", "library.dat");

    if (found)
        cout << "\nBook deleted successfully!\n";
    else
        cout << "\nBook not found!\n";
}

void updateRecord() {
    Book b;
    int id, found = 0;

    cout << "\nEnter Book ID to update: ";
    cin >> id;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getID() == id) {
            cout << "\nEnter new details:\n";
            b.updateBook();

            int pos = (-1) * sizeof(b);
            file.seekp(pos, ios::cur);
            file.write((char*)&b, sizeof(b));

            cout << "\nBook updated successfully!\n";
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";

    file.close();
}

void issueBook() {
    Book b;
    int id, found = 0;

    cout << "\nEnter Book ID to issue: ";
    cin >> id;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getID() == id) {
            if (b.isIssued() == 0) {
                b.issueBook();

                int pos = (-1) * sizeof(b);
                file.seekp(pos, ios::cur);
                file.write((char*)&b, sizeof(b));

                cout << "\nBook issued successfully!\n";
            } else {
                cout << "\nBook already issued!\n";
            }

            found = 1;
            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";

    file.close();
}

void returnBook() {
    Book b;
    int id, found = 0;

    cout << "\nEnter Book ID to return: ";
    cin >> id;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getID() == id) {
            if (b.isIssued() == 1) {
                b.returnBook();

                int pos = (-1) * sizeof(b);
                file.seekp(pos, ios::cur);
                file.write((char*)&b, sizeof(b));

                cout << "\nBook returned successfully!\n";
            } else {
                cout << "\nBook was not issued!\n";
            }

            found = 1;
            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";

    file.close();
}

bool login() {
    string username, password;

    cout << "===== Library Login =====\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << "\nLogin successful!\n";
        return true;
    } else {
        cout << "\nInvalid login!\n";
        return false;
    }
}

int main() {
    if (!login())
        return 0;

    int choice;

    do {
        cout << "\n====== Advanced Library Management System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Update Book\n";
        cout << "6. Issue Book\n";
        cout << "7. Return Book\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addRecord();
            break;
        case 2:
            displayRecord();
            break;
        case 3:
            searchRecord();
            break;
        case 4:
            deleteRecord();
            break;
        case 5:
            updateRecord();
            break;
        case 6:
            issueBook();
            break;
        case 7:
            returnBook();
            break;
        case 8:
            cout << "\nExiting program...\n";
            break;
        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}
