// Problem statement : Aryan and his friends are very fond of patterns. For a given integer ‘N’,
// they want to make the Increasing Number Triangle.
// Example:
// Input: ‘N’ = 3
// Output:
// 1
// 2 3
// 4 5 6

// Solution :

#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Increasing Triangle Pattern : " << endl;
    nNumberTriangle(n);
    return 0;
}