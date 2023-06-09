#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() 
{

    int arr[] = {4, -9, 95, 85, -47, -90, 5};

    int basemin = 0;
    for (int i = 0; i < size(arr);i++)
    {
        if (arr[i] < basemin)
        {
            basemin = arr[i];
        }   
    }
    int basemax = 0;
    for (int i = 0; i < size(arr);i++)
    {
        if (arr[i] > basemax)
        {
            basemax = arr[i];
        }   
    }
    cout << "the min number is : " << basemin << endl;
    cout << "the max number is : " << basemax << endl;

    return 0;
}

