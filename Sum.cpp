/*1. Write a program in C++ to find the sum of next 10 numbers
from the number entered by user. 9-->10--19 */
#include <iostream>
using namespace std;

int main()
{
    int num = 0, total = 0;

    cout << "Enter a num" << endl;
    cin >> num;//9

    //logic 1 - 10
    for (int i = 1; i <= 10; i++)
    {
        num++;
        total = total + num;
    }
    //print
    cout << "Sum of next 10 no. is " << total;

    return 0;
}