// #include <iostream>
// #include <climits>
// #include <cmath>
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int array[],int n, int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}


int BinarySearch(int array[],int n, int key){
    int s=0, e=n-1;
    while(s<=e){
        int mids=(s+e)/2;
        if(array[mids]==key){
            return mids;
        }
        else if(array[mids]>key){
            e=mids-1;
        }
        else{
            s= mids+1;
        }
    }
    return -1;
}


int main(){

/*Simple array initialization*/
    // int arr1[5]={10,23,34,56,32};
    // int arr2[2];
    // arr2[0]=10;
    // arr2[1]=23;
    // cout<<arr2[3]<<arr1[3];

/*Taking user input for size and elements*/
// int n;
// cout<<"Array size: ";
// cin>>n;
//  int arrfrus[n];

//  cin>>arrfrus[0];
//  cin>>arrfrus[1];
//  cin>>arrfrus[2];  Slow boring way

// for(int i=0;i<n;i++){
//     cin>>arrfrus[i];
// }

// for(int i=0;i<n;i++){
//     cout<<arrfrus[i]<<endl;
// }

/*Function to find minimum and maximum number from a user inputted array*/
// int n;
// cout<<"Array size: ";
// cin>>n;
// int array[n];

// for(int i=0;i<n;i++){
//     cin>>array[i];
// }
//  int min_no=INT_MAX, max_no=INT_MIN;
// for(int i=0;i<n;i++){
//     if(array[i]<min){
//         min=array[i];
//     }
//     if(array[i]>max){
//         max=array[i];
//     }
// }

// This above code to find min/max can be written more smartly via implementing the max/min built-in function
//  for(int i=0;i<n;i++){
//     max_no=max(max_no,array[i]);
//     min_no=min(min_no,array[i]);
// }


// cout<<"The minimum value in given array is:  "<<min_no<<" and the maximum value is: "<<max_no;



/*Implementing Linear Search algorithm in an array.*/
// int n;
// cout<<"Array size: ";
// cin>>n;
// int array[n];

// for(int i=0;i<n;i++){
//     cin>>array[i];
// }

// int key;
// cout<<"Provide key: ";
// cin>>key;

// cout<<LinearSearch(array,n,key);
// Time Complexity is O(N)

// cout<<BinarySearch(array,n,key);
// Time Complexity is O(Log N)



/* Sorting - Selection Sort*/
// The basic principle in selection sort is of swapping
// the smallest element with the element in the beginning,
// and repeating this process till we get an array sorted
// in ascending order.

int n;
cout<<"Array size: ";
cin>>n;
int array[n];

for(int i=0;i<n;i++){
    cin>>array[i];
}

// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(array[j]<array[i]){
//             int temp=array[j];
//             array[j]=array[i];
//             array[i]=temp;
//         }
//     }
// }

// for(int i=0;i<n;i++){
//     cout<<array[i]<<" ";
// }

// Or alternatively we can write a function for this as shown above, Soon I'll write this

    return 0;
}