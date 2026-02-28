#include<iostream>
using namespace std;

int main(){

    int n;
    int m=n;
    cin>>n;
    int mask=0;

    if(n==0){
        cout<<"Result: 1"<<endl;
        return 1;
    }
    while(m !=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int result=(~n)&mask;
    
    cout<<"Result: "<<result<<endl;
    return result;
}