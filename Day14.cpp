// #include<iostream>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter.\n";
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    

    /**************** First Repeating Element******************/
    // const int N =1e5+2;
    // int idx[N];
    // for(int i=0;i<N;i++){
    //     idx[i]=-1;        
    // }

    // int num=INT_MAX;
    
    // for(int i=0;i<n;i++){
    //     if(idx[arr[i]]!=-1){
    //         num=min(INT_MAX,idx[arr[i]]);
    //     }
    //     else{
    //         idx[arr[i]]=i;
    //     }
    // }

    // if(num==INT_MAX){
    //     cout<<"-1"<<endl;
    // }
    // else{
    //     cout<<num<<endl;
    // }

    /***********************************/


    /********Subarray with given sum**********/
    // int n,S;
    // cout<<"Enter.\n";
    // cin>>n>>S;
    // int a[n];

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // int st=-1,en=-1,i=0,j=0,sum=0;

    // while(j<n && sum+a[j]<=S){
    //     sum+=a[j];
    //     j++;
    // }
    // if(sum==S){
    //     cout<<i+1<<" "<<j<<endl;
    //     return 0;
    // }

    // while(j<n){
    //     sum+=a[j];
    //     while(sum>S){
    //         sum-= a[i];
    //         i++;
    //     }
    //     if(sum==S){
    //         st=i+1;
    //         en=j+1;
    //         break;
    //     }
    //     j++;
    // }
    // cout<<st<<" "<<en;


/*********Smallest Possible Missing Number**********/
    int n;
    // cout<<"Enter.\n";
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    const int N=100;
    bool chk_arr[N];
    for(int i=0;i<N;i++){
        chk_arr[i]= false;
    }
    

    for(int i=0;i<n;i++){
        if(a[i]>=0){
            chk_arr[a[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(chk_arr[i]==false){
            ans=i;
            break;
        }
    }
    
    cout<<ans;




  


    
    return 0;
}