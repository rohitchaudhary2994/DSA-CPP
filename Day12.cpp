#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
/* Bubble Sort via for-loop*/
    // for(int x=n-1;x>=0;x--){
    //     for(int y=0;y<=x-1;y++){
    //         if(arr[y]>arr[y+1]){
    //         int temp=arr[y];
    //         arr[y]=arr[y+1];
    //         arr[y+1]=temp;
    //         }
    //     }                    
    // }



    /*Bubble Sort via while-loop*/
    // int counter=1;
    // while(counter<n){
    //     for(int y=0;y<=n-1;y++){
    //         if(arr[y]>arr[y+1]){
    //         int temp=arr[y];
    //         arr[y]=arr[y+1];
    //         arr[y+1]=temp;
    //         }
    //     } 
    //     counter++;
    // }

    
/*Insertion Sort via for-n-while loop*/
// for(int p=1;p<n;p++){
//     int current=arr[p];
//     int j=p-1;
//     while(arr[j]>current && j>=0){
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[j+1]=current;
// }

/*Insertion Sort via for loops*/
// for(int p=1;p<n;p++){
//     int current=arr[p];
//     int j=p-1;

//     for (;arr[j]>current && j>=0;j--){
//         arr[j+1]=arr[j];
//     }
//     arr[j+1]=current;
// }



     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
   


 return 0;
}