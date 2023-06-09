#include <iostream>
#include <stdlib.h>  
#include <ctime> 
#include <math.h>
#include<cctype>

using namespace std ; 

int main() {

    max (3,5) ;//     = 5                  برجع اكبر رقم بين رقمين
    min (3,6) ;//     = 3                  برجع اصغر رقم بين رقمين
    pow (2,2) ;//     = 4                  الاسس
    sqrt (4)  ;//     = 2                  الجذر التربيعي لرقم 
    ceil (3.2) ;//    = 4                  تقرب لاكبر عدد صحيح 
    floor (3.2) ;//   = 3                  تقرب لاصغر عدد صحيح 
    fabs (-5) ;//     = 5                  يرجع القيمة المطلقة   
    sin(60) ;
    cos (60);
    tan (60);
    fmod (3.5,9.76)//                      برجع قيمة % لارقام كسرية

    // المضروب 
    int factorial (int n) 
{
    if (n==1){
        return 1;
    
    }
    else {
        return n * factorial(n-1);
    }

}
// نهاية المضروووب 


    sizeof(arr)/sizeof(arr[0]) //           عشان اطلع    عدد عناصر المصفوفة


signed x; //                       متغير يقبل قيمة موجبه وسالبة وصفر
unsigned y;    //                  متغير يقبل قيمة موجبه 



    return 0 ;
}

فقط