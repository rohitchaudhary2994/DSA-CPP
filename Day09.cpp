#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int findprime(int a, int b){
    int pn,i,counter=0;
    for(int pn=a;pn<=b;pn++){
        for(i=2;i<=pn;i++){
            if(pn%i==0){
                break;
            }
        }
        if(pn==i){
            cout<<pn<<endl;
            counter+=1;
        }
    }
    cout<<"The total number of prime numbers between "<<a<<" and "<<b<<" is "<<counter<<".\n";

    
    return 0;
}

void fibonacci(int a){
    int t1=0,t2=1;
    for(int i=0;i<=a;i++){
       cout<<t1<<endl;
       int nextTerm=t1+t2;
       t1=t2;
       t2=nextTerm; 
    }
    return;
}

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    // cout<<fact;
    return fact;
}

int combination(int N,int R){
    int combination=factorial(N)/((factorial(R))*factorial(N-R));
    return combination;
}

int main(){
    /* Finding Prime numbers between two given values*/
    // int num1,num2;
    // cout<<"Give me two numbers: ";
    // cin>>num1>>num2;

    // findprime(num1,num2);
    // first way

    // for(int i=num1;i<=num2;i++){
    //     if(isprime(i)){
    //         cout<<i<<endl;
    //     }
    // }
    // second way
    

    /*Fibonacci sequence implementation*/
    int num1;
    cout<<"Give number: ";
    cin>>num1;
    fibonacci(num1);

    /*Factorial of a given number*/
    // int num1;
    // cout<<"Give number: ";
    // cin>>num1;
    // factorial(num1);


    /*Using NcR combination using factorial function.*/
    // int n,r;
    // cout<<"Give values of N and R: ";
    // cin>>n>>r;
    // cout<<factorial(n)/(factorial(n-r)*factorial(r));


    /*Using NcR function to make a pascal triangle*/
    // int n;
    // cout<<"Give me a value: ";
    // cin>>n;

    // for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<combination(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }


    return 0;
}