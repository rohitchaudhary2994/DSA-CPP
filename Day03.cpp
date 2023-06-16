#include<iostream>
using namespace std;

int main(){

    /*Code to show implementation of continue and break in loops via pocket money example.*/
    // int pktmoney=3000;
    // for(int days=1;days<=30;days++){
    //     if (days%2==0){
    //         continue; /*continue statement helps to move to the next iteration of the loop.*/
    //     }
    //     if (pktmoney==0){
    //         break; /*break statement helps to break a loop.*/
    //     }
    //     cout<<"You can go out today "<<days<<endl;
    //     pktmoney-=300;
    // }

    /*Code to check whether a given number is prime or not.*/
    // cout<<"Enter number:";
    // int n;
    // cin>>n;
    // int i;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Non-prime"<<endl;
    //         break;
    //     }
    // }
    // if(i==n){
    // cout<<"Prime"<<endl;
    // }

    /*Program to find prime nummbers between two given numbers.*/
    cout<<"Enter the number range:";
    int pn,a,b,i,counter=0;
    cin>>a>>b;
    
    for(int pn=a;pn<=b;pn++){
        for(i=2;i<pn;i++){
            if(pn%i==0){
                break;
            }
        }
        if(pn==i){
            cout<<pn<<endl;
            counter+=1;
        }

    }
    cout<<"The total number of prime numbers between "<<a<<" and "<<b<<" are "<<counter<<".";

    return 0;
}