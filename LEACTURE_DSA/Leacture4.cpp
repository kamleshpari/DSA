#include<iostream>
using namespace std;    

int main(){
  /* int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
   
        int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
        
       int n;
       cout<<"enter the value of n: ";
       cin>>n;
         int i=1;

         while(i<=n){
            int j=1;
            while(j<=n){
                cout<<i;
                j++;
            }
            cout<<endl;
            i++;
         }

         

         int n;
            cout<<"enter the value of n: ";     
            cin>>n;
            int i=1;
            while(i<=n){
                int j=1;
                while(j<=n){
                    
                    cout<<j;
                    j++;
                }
                cout<<endl;
                i++;
            }

int n;
            cout<<"enter the value of n: ";     
            cin>>n;
            int i=1;
            while(i<=n){
                int j=1;
                while(j<=n){
                    
                    cout<<n-j+1;
                    j++;
                }
                cout<<endl;
                i++;
            }
                
            int n;
            cin>>n;
            int i=1;
            int count=1;
            while(i<=n){
                int j=1;
                while(j<=i){
                    cout<<count<<" ";
                    count++;
                    j++;
                }
                cout<<endl;
                i++;

                }
                
        int n;
            cin>>n;
            int i=1;
            int count=1;
            while(i<=n){
                int j=1;
                while(j<=n)
                {
                    cout<<count<<" ";
                    count++;
                    j++;
                }
                cout<<endl;
                i++;
            }
                

            int n;
            int row=1;
            cout<<"enter the value of n: ";
            cin>>n;
            while(row<=n){
                int col=1;
                while(col<=row){
                    cout<<"*";
                    col++;
                }
                cout<<endl;
                row++;
            }
                
            int n;
            cout<<"enter the value of n: ";
            cin>>n;
            int i=1;
            while(i<=n){
                int col=1;
                int value=i;
                while(col<=i){
                    cout<<value<<" ";
                    value++;
                    col++;
                }
                cout<<endl;
                i++;
            }
                
               //hw
            int n;
    cout << "enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int col = 1;
        while (col <= i) {
            cout << i + col - 1 << " ";  // directly calculate the value
            col++;
        }
        cout << endl;
        i++;
    }
    return 0;
    

    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int i=1;
    while(i<=n)
{
    int j=1;
    while(j<=n){
        char ch='A'+j-1;
        cout<<ch<<" ";
        j++;    
    }
    cout<<endl;
    i++;
}
int n;
    cout << "enter the value of n: ";
    cin >> n;
    int i=1;
    while(i<=n)
{
    int j=1;
    while(j<=n){
        char ch='A'+i-1;
        cout<<ch<<" ";
        j++;    
    }
    cout<<endl;
    i++;
}

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+i+j-2;
        cout<<ch<<" ";
        j++;        
    }
    cout<<endl;
    i++;
}
    
   //hw
   int n;
    cout << "enter the value of n: ";
    cin >> n;
   char ch = 'a';   // starting letter

    int i = 1; // row counter
    while (i <=n) {
        int j = 1; // column counter
        while (j <=n) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
    
    int n;
    cout<<"enter value";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+row-1;
        while(col<=row){
            cout<<ch<<" ";
           // ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
        


int n;
cout<<"enter value";
cin>>n;
int row=1;
while(row<=n){
int col=1;
char ch='A'+n -row;// to print in reverse order
while(col<=row){    
cout<<ch<<" ";
ch++;
col++;
}
cout<<endl;
row++;

}

int n;
cout<<"enter value";
cin>>n; 
int row=1;
while(row<=n){
   //space printing
    int space=n-row;
    while(space){
        cout<<" _ ";
        space--;
    }
    //star printing
    int col=1;
    while(col<=row){
        cout<<"*";
        col++;
    }   
    cout<<endl;
    row++;
}

int n;
cout<<"enter value";
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    while(col<=n-row+1){
        //int start=n-row+1;
        cout<<"*";
        //start--;
        col++;
    }
    cout<<endl;
    row++;
}*/

int  n;
cout<<"enter value";
cin>>n;
int row=1;
while(row<=n){
    //space printing
    int space=n-row;
    while(space){
        cout<<"_";
        space--;
    }
    //print 2nd  part
    int col=1;
    while(col<=row){
        cout<<col;
        col++;
    }
    //print 3rd part
    int start=row-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    row++;
}
}