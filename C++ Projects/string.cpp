#include <iostream>
#include <string.h> // this file is used for the "strcat" function here
using namespace std;

int main() 
{

    // 1 >>>>>  define a string in c++ way 

     // the size here is 5 not 4 because ==>> c++ added \0 to the end of the string ! 
    cout << "nada"<< endl; // ==>> nada

    // define a string in another way 

    char st[] = "nadoosh"; // same here the size is 8 not 7 !!
    cout << st << endl;    // ==>> nadoosh
    cout << st[0] << endl;  // return ==>> n   
    cout << st[6] << endl;  // return ==>> h
    cout << int(st[7]) << endl; // return ==>> 0 wich is the ASCII value of => \0 => NULL


    // 2 >>> the class way to write a string : 
    string s = "nada b";
    cout << s << endl;

    // ************************************************************
    // string methodes :
    
    // 1 >> connect 2 strings together :
    char firstName[] = "nada ";
    char lastName [] = "bzoor";

    // normal way >> cout
    cout << firstName << lastName << endl ;

    // using the function strcat :

    cout << strcat(firstName,lastName) << endl;


    // + way ===== >> string needed

    string fname = "lolo ";
    string lname = "mohammed";

    cout << fname + lname << endl;

    // append way 

    cout << fname.append(lname) << endl;



    // functions <<<<<<<<<<<<<<<<<<<<<<<<<<

    string str = "hello ";

    cout << tolower('A') << endl; // فقط للحروف  >> 97 (ASCII val)
    cout << char(tolower('A')) << endl; // << a
     cout << toupper('a') << endl; // فقط للحروف  >> 65 (ASCII val)
    cout << char(toupper('a')) << endl; // << A
    return 0;
}
