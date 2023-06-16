// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){


    /* Time Complexity is O(N2)*/
    int n=8;
    cout<<"Give me a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i==4 || i==5 || j%3==0){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

}