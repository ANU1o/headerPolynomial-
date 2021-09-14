//Sample program using polynomial.h

#include <iostream>
#include "polynomial.h"     //Calling the header file
using namespace std;

int main()
{

    Polynomial p;
    int s;

    
    p.readlimit();
    p.read();
    p.display();

    //Binary Search
    cout << "Search Value:";
    cin >> s;
    cout << endl;
    cout << "Position:" << p.binarySearch(0, p.x - 1, s);

    return 0;
}
