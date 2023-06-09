#include <iostream>
#include <math.h>

using namespace std;

int main() 
{

    cout << "this is a simple calultor made by \'NADA\' " << endl;
    while (true) {
    cout << "please select your operation : " << endl;
    cout << "[A] +        [B] - \n[C] *        [D] / (divition)\n[E] %        [F] sqrt\n[G] power    [H] sin\n[I] cos      [J] tan"<<endl;
    char operation;
    cin >> operation;
    switch (operation){

        case 'A' :
            cout << "enter 2 numbers : " << endl;
            int aA, bA;
            cin >> aA >> bA;
            cout << aA << " + " << bA << " = " << aA + bA<<endl;
            break;
        case 'B' :
            cout << "enter 2 numbers : " << endl;
            int aB, bB;
            cin >> aB >> bB;
            cout << aB << " - " << bB << " = " << aB - bB<<endl;
            break;
        case 'C' :
            cout << "enter 2 numbers : " << endl;
            int aC, bC;
            cin >> aC >> bC;
            cout << aC << " * " << bC << " = " << aC * bC<<endl;
            break;
        case 'D' :
            cout << "enter 2 numbers : " << endl;
            int aD, bD;
            cin >> aD >> bD;
            cout << aD << " / " << bD << " = " << aD / bD<<endl;
            break;
        case 'E' :
            cout << "enter 2 numbers : " << endl;
            int aE, bE;
            cin >> aE >> bE;
            cout << aE << " % " << bE << " = " << aE % bE<<endl;
            break;
        case 'F' :
            cout << "enter a number " << endl;
            double sF;
            cin >> sF;
            cout << "sqrt for " << sF << " is  = " << sqrt(sF) <<endl;
            break;
        case 'G' :
            cout << "enter 2 numbers : " << endl;
            int aG, bG;
            cin >> aG >> bG;
            cout << aG << " power " << bG << " = " << pow(aG,bG) <<endl;
            break;
        case 'H' :
            cout << "enter a number " << endl;
            double sH;
            cin >> sH;
            cout << "sin " << sH << " is  = " << sin(sH)<<endl;
            break;
        case 'I' :
            cout << "enter a number " << endl;
            double sI;
            cin >> sI;
            cout << "cos " << sI << " is  = " << cos(sI)<<endl;
            break;
        case 'J' :
            cout << "enter a number " << endl;
            double sJ;
            cin >> sJ;
            cout << "tan " << sJ << " is  = " << tan(sJ)<<endl;
            break;

    }
    }

    return 0;
}
