#include<iostream>
using namespace std;

int main(){
    
    /*int n=2;

    switch(2){
        case 1:
            cout<<"Case 1"<<endl;
            break;
        case 2:
            cout<<"Case 2"<<endl;
            break;
        default:
            cout<<"Default Case"<<endl; 
    }

    //using switch case implementing the calculator
    int a,b;
    cout<<"Enter a numbers: "<<endl;
    cin>>a;
    cout<<"Enter b numbers: "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operator: "<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<"Result: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Result: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Result: "<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"Result: "<<a/b<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;

        case '%':
            if(b!=0){
                cout<<"Result: "<<a%b<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;    
        default:
            cout<<"Invalid operator!"<<endl; 
    }*/

    int amount;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;

    int notes100=0,notes50=0,notes20=0,notes1=0;
    //using switch case to find the number of notes required to pay the amount
    switch(1){
        case 1:
            notes100=amount/100;
            amount=amount%100;
        case 2:
            notes50=amount/50;
            amount=amount%50;
        case 3:
            notes20=amount/20;
            amount=amount%20;
        case 4:
            notes1=amount/1;
            amount=amount%1;
            break;
    }
    cout<<"Number of 100 notes: "<<notes100<<endl;
    cout<<"Number of 50 notes: "<<notes50<<endl;
    cout<<"Number of 20 notes: "<<notes20<<endl;
    cout<<"Number of 1 notes: "<<notes1<<endl;
}