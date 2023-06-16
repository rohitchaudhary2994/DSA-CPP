#include<iostream>
#include<cmath>
using namespace std;


/*Creating our first function*/

void print_sample(int num){
    cout<<num<<endl;
    return;
}
int shaadi_add(int num1,int num2){
    print_sample(num1);
    print_sample(num2);
    int child= (num1+num2)*(num1-num2)/num1*num2;
    return child;
}
int main(){
    
   /* Use of Flags*/ 
    // int n,i;
    // bool isprime;
    // cout<<"Give me a number:";
    // cin>>n;

    // for(i=2;i<sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<"This number is not prime.\n";
    //         isprime=1;
    //         break;
    //     }
    // }
    // if(isprime==0){
    //     cout<<"Prime Number\n";
    // }


    /*Reverse a given number*/
    // int n,reversedno=0;
    // cout<<"give me a number:";
    // cin>>n;

    // while(n>0){
    //    int lastdigit = n%10;
    //    reversedno = reversedno*10 +lastdigit;
    //    n=n/10;
    // }
   
    // cout<<reversedno;

    /*Check whether a given number is armstrong or not.*/
    // int no_incheck=0,n;
    // cout<<"Give me a number:";
    // cin>>n;
    // int originaln=n;

    // while(n>0){
    //     int lastdigit= n%10;
    //     no_incheck=  no_incheck + round(pow(lastdigit,3)) ; 
    //     //Here we've used this round in order to avoid the error of getting 152.999 instead of straight 153
    //     n=n/10;
    // }
    // if(no_incheck==originaln){
    //     cout<<"This number is an Armstrong number.";
    // }
    // else{
    //     cout<<"This number isn't an Armstrong number."<<no_incheck;
    // }

    int a=46,b=24;
    cout<<shaadi_add(a,b);


    
    return 0 ;
}


// One main thing one needs to understand is that a chunk of memory
//  is assigned to each function(s), which is in known as stack frame, it's an element of the memory, which is in the form of a stack.abort
//  Every time a function is called, it's stack frame is pushed into the memory and is later popped, one by one, after usage.

//  One more thing to remember is that you can use any function to call any other function present in the code.

// The frame which wil be on the top of stack would be the first one to get executed and is known as the active frame.