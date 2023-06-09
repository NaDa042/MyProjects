#include<iostream>
#include<array>

using namespace std;

int main()
{

    // c++ array syntax :  
    // type array_name[size of array] = {elements};
    // this type might have some bugs !

    int arr_a[5] = {3,443,45,2,3};
    cout << arr_a[3]<<endl; // => 2
    cout << sizeof(arr_a)/sizeof(arr_a[0]) << endl; // size of the array =>> 5


//********************************************************************************************************

    // class array syntax :
    // array<type , size of array> arrray_name = {elements};
    // better to use 
    // must to => #include<array>

    array <int,4> arr_b = {5,4,3,2};
    cout << arr_b[2]<<endl;;                       // => 3
    cout << arr_b.size() << endl;                  // size of the array =>> 4
    cout << arr_b.front() << endl;                 // get the first element =>> cout needed =>> 5
    cout << arr_b.back()  << endl;                 // get the last element  =>> cout needed =>> 2
    cout << arr_b.at(3)   << endl;                 // get the element with index 3 =>> '2'
    cout << arr_b.empty() << endl;                 // to check if the array is empty or not =>> return bool value (0,1)  =>> 0
    arr_b.fill(3);                                 // fill all the array with number 3 
    cout << arr_b.
    return 0;
}