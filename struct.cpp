#include <iostream>

using namespace std;

struct car
{
    string brand;
    string modle;
    int year;
};

int main ()
{
    int part;

    cout << "Part: ";
    cin >> part;

    while (true)
    {
        switch (part)
        {
            case 1 :
            {
                struct
                {
                    string brand;
                    int year;
                }mycar1, mycar2;

                mycar1.brand = "BMW";
                mycar1.year = 1999;

                mycar2.brand = "Ford";
                mycar2.year = 1969;

                cout << mycar1.brand << " " << mycar1.year << endl;
                cout << mycar2.brand << " " << mycar2.year << endl;

                return false;
            }

            case 2 :
            {
                car car1;
                
                car1.brand = "BMW";
                car1.modle = "X5";
                car1.year = 1999;

                car car2;

                car2.brand = "BYD";
                car2.modle = "Mustang";
                car2.year = 2016;

                cout << car1.brand << " " << car1.modle << " " << car1.year << "\n";
                cout << car2.brand << " " << car2.modle << " " << car2.year << "\n";

                return false;
            }

            default :
            {
                cout << "Part " << part << " not fouded.";
            }
        }
    }
}