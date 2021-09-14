//Polynomial Header File

#include <iostream>
using namespace std;

class Polynomial
{

    public:
        int a[50], x;

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

        void read()     //read constant to equation
        {

            for(int i = 0; i < x; i++)
            {

                cout << "Enter value at " << i << "th Position:";
                cin >> a[i];

            }

        }

        void display()      // display constants from equation corresponding to the degree of variable
        {

            cout << "\nPolynomial\n";
            for (int i = x - 1; i >= 0; i--)
            {

                cout << "\t" << i << "th Degree:";
                cout << a[i] << endl;

            }

        }

        int binarySearch(int l, int r, int x)       //searches constant at assigned degree
        {

            if (r >= l)
            {
                int mid = l + (r - l) / 2;
                
                // If the element is present at the middle
                // itself
                if (a[mid] == x)
                    return mid;

                // If element is smaller than mid, then
                // it can only be present in left subarray
                if (a[mid] > x)
                    return binarySearch(l, mid - 1, x);
                

            

                // Else the element can only be present
                // in right subarray
                
                return binarySearch(mid + 1, r, x);
                

            }


            // We reach here when element is not
            // present in array
            return -1;
        }

};