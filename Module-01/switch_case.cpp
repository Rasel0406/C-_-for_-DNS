#include<iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   switch(n)
   {
    case 1:
    cout << "One" <<endl;
    case 2:
    cout << "Two" << endl;
    break;
    case 3:
    cout << "Three" << endl;
    break;
    case 4:
    cout << "Four" << endl;
    break; break;
    case 5:
    cout << "Five" <<endl;
    case 6:
    cout << "Six" << endl;
    break;
    case 7:
    cout << "Seven" << endl;
    break;
    case 8:
    cout << "Eight" << endl;
    break; break;
     case 9:
    cout << "nine" <<endl;
    break;
    case 10:
    cout << "Ten" << endl;
    break;
   }

    switch(n%2)
    {
        case 0:
        cout << "Even Number" << endl;
        break;
        case 1:
        cout << "Odd Number" << endl;
    }

   char x;
   cin >> x;
    switch(x)
    {
        case 'a':
        cout << "Vowel" << endl;
        break;
        case 'e':
        cout << "vowel" << endl;
        case 'i':
        cout << "Vowel" << endl;
        break;
        case 'o':
        cout << "vowel" << endl;
        case 'u':
        cout << "Vowel" << endl;
        break;
        default:
        cout << "Consonant";
      
    }

   
    return 0;

}