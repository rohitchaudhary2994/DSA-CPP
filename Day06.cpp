/*Advanced Pattern creation via loops.*/
#include<iostream>
using namespace std;

int main(){

    /*Inverted Pattern*/
    // cout<<"Give me a value.\n";
    // int n;
    // cin>>n;
    // for(int i=n;i>=0;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //   }
    //     cout<<endl;
    // }



    /* 0-1 Pattern */
    cout<<"Give me a number.\n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }



    /*Rhombus Pattern*/
    // cout<<"Give me a number.\n";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int x=1;x<=n;x++){
    //       cout<<"* ";
    //     }
    //     cout<<endl;
    // }  



    /*Number Pattern*/
    // cout<<"Give me a number.\n";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }   
    //     for(int j=1;j<=i;j++){
    //       cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    /* Palindromic Pattern */
    // cout<<"Give me a number.\n";
    // int n;
    // cin>>n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     int x=i;
    //     for(;x>=2;x--){
    //         cout<<x<<" ";
    //     }
    //     for(int y=1;y<=i;y++){
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }


    /* Star Pattern */
    // cout<<"Give me a number.\n";
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int p=1;p<=2*i-1;p++){
    //         cout<<"* ";
    //         // p++;
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=n-i;j++){
    //     cout<<"  ";
    //        }
    //     for(int p=1;p<=2*i-1;p++){
    //         cout<<"* ";
    //         //  p++;
    //     }
    //     cout<<endl;
    // }


    /* Zig-Zag Pattern */
    // cout<<"Give me a number.\n";
    // int n;
    // cin>>n;

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=n;j++){
    //         if((i+j)%4==0 || i==2 && j%4==0){
    //             cout<<"* ";
    //         }
    //         else{
    //            cout<<"  ";
    //         }          
    //     }
    //     cout<<"\n";
    // }    


}