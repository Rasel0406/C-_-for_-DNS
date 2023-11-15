#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    // if (n%2==0)
    // {
    //    cout << "Even Number" << endl;
    // }
    // else{
    //     cout << "odd Number" << endl;
    // }

    (n%2==0)? cout << "Even Number" << endl : cout << "Odd Number" <<endl;
    return 0;
}