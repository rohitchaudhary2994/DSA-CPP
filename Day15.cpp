#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    /*Printing all subarrays of a given array*/
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<a[k]<<" ";
    //         }
    //         cout<<endl;
    //     }

    // }

    /* Maximum sum of a given array's subarray*/
    // int max_sum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += a[k];
    //         }
    //         max_sum = max(max_sum, sum);
    //     }
    // }
    // cout << max_sum << endl;

    /*Above problem using cumalative sum approach*/
    // int curr_sum[n + 1];
    // curr_sum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     curr_sum[i] = curr_sum[i - 1] + a[i-1];
    // }

    // int max_sum = INT_MIN;
    // for (int j = 1; j <= n; j++)
    // {
    //     int sum = 0;
    //     for (int i = 0; i < j; i++)
    //     {
    //         sum = curr_sum[j] - curr_sum[i];
    //         max_sum = max(max_sum, sum);
    //     }
    // }
    // cout << max_sum;

    /*Kadane's Algorithm, an even more efficient method to solve the above given problem*/
    // int curr_sum = 0, max_sum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     curr_sum += a[i];
    //     if (curr_sum < 0)
    //     {
    //         curr_sum = 0;
    //     }
    //     max_sum = max(max_sum, curr_sum);
    // }
    // cout << max_sum;

    return 0;
}