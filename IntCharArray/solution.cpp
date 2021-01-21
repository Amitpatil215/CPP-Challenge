#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // ! Swap two numbers
   /*  int a;
    int b;
    cin >> a >> b;
    // ? Using temp var
    //  int temp;
    // temp=a;
    // a=b;
    // b=temp;

    //?Using XOR operator
    a = a ^ b;
    b = a ^ b; // b= a^b^b = a
    a = a ^ b; // a= a^b^b = b

    cout << a << ' ' << b; */

    //! Reverse an int array
    /* int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<' ';
    } */

    //! Print all prefixes of the String
    char str[10];
    cin >> str;
    for (int i = 1; i < strlen(str); i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<str[j];
        }
        cout<<'\n';
    }

    return 0;
}