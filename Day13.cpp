#include<iostream>
#include<climits>
#include<cmath>
using namespace std;



// Video 8.4

int main(){
    int n;
    
    cout<<"Array size: ";
    cin>>n;
    int array1[n];

    for(int i=0;i<n;i++){
        cin>>array1[i];
    }
 
    // int chk;
    // cout<<"Give a an 'ith' value: ";
    // cin>>chk;
    // int max_no=INT_MIN;

    // for(int i=0;i<chk;i++){
    //     max_no=max(array1[i],max_no);
    // }
    // cout<<"The maximum of given array is: "<<max_no;



    /*Subarray and Subsequence*/
    // Subarray-continuos part of an array.
    // The number of subarrays of an array with n elements is nC2+n =n*(n+1)/2

    // A subsequence is a sequence which is derived by selection zero or more elements without changing the order,
    // ps: it is non-continuous, unlike the subarray.
    // Total number of possible subsequences for an array of size n is 2^n.


    /***************EVERY SUBARRAY IS A SUBSEQUENCE, BUT EVERY SUBSEQUENCE IS NOT A SUBARRAY*****************/

    // Sum of all Subarrays
    // Approach - first we'll iterate over all the subarrays
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=0; // Initialising with 0 for every new iteration.
    //     for(int j=i;j<n;j++){
    //         sum+=array1[j];
    //         cout<<sum<<endl;
    //     }
    // }

    /*Longest Arithematic subarray, Direct from Google kickstart*/
    // Arithematic arrays are those which have same difference between consecutive elements.
//   Very Wonderful. Intriguing question.

//   int ans=2; 
//   int pd=array1[1]-array1[0];
//   int curr=2;
//   int j=2;

//   while(j<n){
//     if(pd==array1[j]-array1[j-1]){
//         curr++;
//     }
//     else{
//         pd=array1[j]-array1[j-1];
//         curr=2;
//     }
//     ans=max(ans,curr);
//     j++;
//   }
//   cout<<ans<<endl;

// Record Breaker, Another question from Google kickstart.
if(n==1){
    cout<<"1\n";
    return 0;
}


int max_no=0;
array1[n]=-1;
// for(int i=0;i<n;i++){                       // This code will type the indexes of days which are record breakers.
//     max_no = max(array1[i],max_no);
//     if(array1[i]>=max_no  && array1[i]>array1[i+1]){
//         cout<<i<<endl;
//     }
// }


int counter=0;
for(int i=0;i<n;i++){                       
    max_no = max(array1[i],max_no);
    if(array1[i]>=max_no  && array1[i]>array1[i+1]){
        counter++;
    }
}
cout<<counter<<endl;


    return 0;
}