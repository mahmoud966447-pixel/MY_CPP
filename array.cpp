#include <iostream>

using namespace std;

int main ()
{
    int num;

    cout << "Inter the numper of cars: ";
    cin >> num;

    string cars[num];
    double car_price[num]; // [] might be empty if (i) will give it imputs in the same line.

    int i = 0;

    for (string car : cars) // It is a small for to only arrys you can see it and know what it doing.
    {
        i++;
        cout << "Car(" << i << "): ";
        cin >> car;

        if (car == "BMW")
        {
            car_price[i - 1] = 4e5;
        }

        else if (car == "Volvo")
        {
            car_price[i - 1] = 5e5;
        }

        else if (car == "BYD")
        {
            car_price[i - 1] = 7e5;
        }

        else if (car == "Toyota")
        {
            car_price[i - 1] = 8e5;
        }

        else if (car == "Mazda")
        {
            car_price[i - 1] = 6e5;
        }

        else if (car == "Ford")
        {
            car_price[i - 1] = 9e5;
        }

        else
        {
            cout << " car not founded.";

            return 1;
        }
    }

    cout << endl;

    int sum = 0;
    i = 0;

    cout << "You have " << sizeof(cars) / sizeof(cars[0]) << " car.\n" << endl; // (sizeof) to give bites num of arry to give you the arrys elemints sizeof / num of one elemint bites.

    for (double price : car_price)
    {
        i++;
        cout << "Car(" << i << ") price is " << price << "$.\n";

        sum += price;
    }

    cout << "\nYou buys by " << sum << "$ cars." << endl; //multi_dimintional.

}