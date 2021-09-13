//Polynomial Header File

#include <iostream>
using namespace std;

class Polynomial
{

    int x;

    public:
        int a[50];

        int limit(int n)    //intialize limit for degree of equation using this
        {

            x = n;
            return x;
            
        }

        void readlimit() //Read limit for degree of equation using this
        {

            cout << "Enter Limit:";
            cin >> x;
            
        }

        void read()
        {

            for(int i = 0; i < x; i++)
            {

                cout << "Enter value at " << i << "th Position:";
                cin >> a[i];

            }

        }

        void display()
        {

            cout << "\nPolynomial\n";
            for (int i = x - 1; i >= 0; i--)
            {

                cout << "\t" << i << "th Degree:";
                cout << a[i] << endl;

            }

        }

};