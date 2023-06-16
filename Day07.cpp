#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Give me a number.\n";
    cin>>n;
    cout << "Give me another number, smaller than previous one\n";
    cin >>m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == n || j == 1 || i == n || i == m || j == n - m+1 || j == m || i == n - m +1 )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }

        }
        cout << endl;
    }
    return 0;
}