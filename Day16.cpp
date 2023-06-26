#include<iostream>
#include<climits>
using namespace std;


int kadane(int array[],int n){
    int cur_sum=0,max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        cur_sum+=array[i];
        if(cur_sum<0){
            cur_sum=0;
        }
        max_sum=max(cur_sum,max_sum);
    }

    return max_sum;
}

bool pair_sum(int array[], int n, int k){
    // int sum;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            // sum = array[i]+array[j];
            // if(sum==k){
            if(array[i]+array[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}


// What we have noticed is that in the above given function the time complexity is o(n^2),
//  which is somehwat larger, if we traverse only once throughout the arrays then time 
//  complexity becomes O(n), which is better.


bool bettertc_pair_sum(int array[], int n, int k){
 
    for(int i=0,j=n;i<j;){
        if(array[i]+array[j]<k){
            i++;
        }
        else if(array[i]+array[j]>k){
            j--;
        }
        else if(array[i]+array[j]==k){
            cout<<i<<" "<<j<<endl;
            return true;
        }
    }
    return false;
}
// One more thing to notice is that instead of for loop, while loop can also be used, that also looks pretty good.


int main(){
    

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    /*Maximum circular sub-array sum*/
    // If our sum(contributing elements) are wrapping, i.e forming a circle, then one approach is to
    // remove the non-contributing elements for a while, 
    // max subaray sum= total sum of array - sum of non-contributing elements.
//     int wrapsum,nonwrapsum;
    
//     nonwrapsum=kadane(a,n);
    
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         totalsum += a[i];
//         a[i]= -a[i];
//     }

//     wrapsum= totalsum + kadane(a,n);   //This is a VERY crucial step, listen carefully,
//     // here we subtract the kadane's sum of negativised elements


// cout<<max(nonwrapsum,wrapsum)<<endl;




/*Pair Sum Problem*/
// This will check whether the a sum of two elements is equal to the given number or not.

  int requirednum;
  cin>>requirednum;
  cout<<pair_sum(a,n,requirednum);
  cout<<bettertc_pair_sum(a,n,requirednum);


    return 0;
}