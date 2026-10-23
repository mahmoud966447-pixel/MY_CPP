#include <iostream>

using namespace std;

struct car
{
    string brand;
    string modle;
    int year;
};   //case 2

car cars[10]; //case 3

enum level {low, medium, high}; //in no definded variables (low = 0) and (medium = low + 1 ,high = medium + 1) etc......
enum score {normal = 0, hard = 5, deficalt = 10}; //in definded noruls only this value what you give to this.
//case 4

int main ()
{
    while (true)
    {
        int part;
        cout << "Part: ";
        cin >> part;

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

            case 3 :
            {
                int car_num;

                cout << "Numper of cars: "; cin >> car_num; cout << endl;

                for (int car_info = 0; car_info < car_num; car_info++)
                {
                    cout << "Inter car" << car_info + 1 << " brand: "; cin >> cars[car_info].brand;
                    cout << "Inter car" << car_info + 1 << " modle: "; cin >> cars[car_info].modle;
                    cout << "Inter car" << car_info + 1 << " year: "; cin >> cars[car_info].year; cout << endl;
                }

                cout << "This is your car info: \n";

                for (int pr_info = 0; pr_info < car_num; pr_info++)
                {
                    cout << "Your car" << pr_info + 1 << " brand: " << cars[pr_info].brand << endl;
                    cout << "Your car" << pr_info + 1 << " modle: " << cars[pr_info].modle << endl;
                    cout << "Your car" << pr_info + 1 << "  year: " << cars[pr_info].year << endl << endl;
                }
                
                return false;
            }

            case 4:
            {
                enum level my_var = medium;

                cout << my_var << endl;

                return false;
            }
            default :
            {
                cout << "Part " << part << " not fouded.\n";
            }
        }
    }
}