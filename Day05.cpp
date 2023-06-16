// Pattern Creation via loops

#include <iostream>
using namespace std;

int main()
{

    /* Rectangle Code*/
    // int rows, columns, i = 0, j = 0;
    // cout << "Provide Number of rows and columns please\n";
    // cin >> rows >> columns;

    // for (j = 0; j < rows; j++)
    // {
    //     for (i = 0; i < columns; i++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /* Hollow Rectangle Code*/
    // int rows, columns, i = 0, j = 0;
    // cout << "Provide Number of rows and columns please\n";
    // cin >> rows >> columns;

    // for (j = 1; j <= rows; j++)
    // {
    //     for (i = 1; i <= columns; i++)
    //     {
    //         if (j == 1 || j == rows || i == 1 || i == columns)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*Inverted Half Pyramid @6mins*/
    // int n, i, j;
    // cout << "Enter Value\n";
    // cin >> n;

    // for (i = n; i >= 0; i--)
    // {
    //     for (j = i; j >= 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /* Half Pyramid post 180 degrees rotation. */
    // int n, i, j;
    // cout << "Enter Value\n";
    // cin >> n;

    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         if(j<=n-i){
    //             cout<<"  ";
    //         }else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    /*Half Pyramid using numbers*/
    // int n;
    // cout << "Enter Value\n";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }


    /*Flyod's Triangle*/
    // int n,p=1;
    // cout << "Enter Value\n";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<p<<" ";
    //         p+=1;
    //     }
    //     cout<<endl;
    // }

    /*Butterfly Pattern, very interesting*/
    int n;
    cout << "Enter Value\n";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        int space=2*n-2*i;
        for(int p=1;p<=space;p++){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        int space=2*n-2*i;
        for(int p=1;p<=space;p++){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}