#include<iostream>
using namespace std;
/*
int functionPower(int a, int b)
{
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    return result;
}

int main(){
   
    int a,b;
    cout<<"Enter a numbers: "<<endl;    
    cin>>a;
    cout<<"Enter b numbers: "<<endl;
    cin>>b;
    int result=functionPower(a,b);
    cout<<"Result: "<<result<<endl;

     //power of a,b number using function
   
    int a,b;
    cout<<"Enter a numbers: "<<endl;
    cin>>a;
    cout<<"Enter b numbers: "<<endl;
    cin>>b;
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    cout<<"Result: "<<result<<endl;
    

    //using function to find the power of a number
    

    //Ncr using function
//int factorial(int n);

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return num/deno;
}

int main(){
    int n,r;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter r: "<<endl;
    cin>>r;
    int result=nCr(n,r);
    cout<<"Result: "<<result<<endl;

//countint
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
    
// isPrime using function
bool isPrime(int n){
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    
//total number of set bits (1-bits) in both  the numbers combined

int countSetBits(int n){
    int count =0;
    while(n>0){
        count+=(n&1);//check last bit is 1 or not
        n=n>>1;//right shift the bits by 1
    }
    return count;
}

    int main(){
int a,b;
cout<<"Enter a number: "<<endl;
cin>>a;
cout<<"Enter b number: "<<endl; 
cin>>b;
int totalSetBits=countSetBits(a)+countSetBits(b);
cout<<"Total set bits in both numbers combined: "<<totalSetBits<<endl;

    }


//find Nth Fibonacci number using function
int fibonacci(int n){
    
    if(n<=1)
        return n;
        int a=0,b=1,c;

        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
    }
    return b;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    cout<<"Nth Fibonacci numbers:"<<fibonacci(n)<<endl;

    return 0;
}

//output base quations

void update(int a){
    a =a/2;
}
int main(){
 int a=10;
  update(a);
  
  cout<<"a is :"<<a<<endl;
}
*/
void update(int a){
    a -=5;
}
int main(){
    int a=15;
    update(a);
    cout<<a<<endl;
}
