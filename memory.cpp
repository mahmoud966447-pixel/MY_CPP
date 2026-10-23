#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int part; cout << "Part: "; cin >> part;

        switch (part)
        {
            case 1:
            {
                string food = "Pizza";
                string &meal = food;

                meal = "Burger";

                cout << "Food and mail values after changs mail value: ";
                cout << food << "    " << meal << endl;

                food = "tomato";

                cout << "food and mail value after chang food value: ";
                cout << food << "    " << meal << endl;

                cout << "Food adress: ";
                cout << &food << endl;  // memory addres.

                string* ptr = &meal;

                cout << "addres: ";
                cout << ptr << endl;

                cout << "Addres value: ";
                cout << *ptr << endl;

                break;
            }

            case 2 :
            {
                int* space = new int;
                *space = 35;
                cout << *space << endl;
                cout << space << "\n\n";

                delete space;

                cout << *space << endl;
                cout << space << endl;

                return false;
            }

            case 3 :
            {
                int gist_num; 

                do
                {
                    cout << "Inter the numper of gists: "; cin >> gist_num;

                    if (gist_num < 1)
                    {
                        cout << "Numper of gists mustn't be less than 1.";
                    }
                }while (gist_num < 1);

                string* gists = new string[gist_num];

                cin.ignore();  // It used whin you use (gitline) function after it because it take the \n after cin and wark without input.

                for (int i = 0; i < gist_num; i++)
                {
                    cout << "Inter gist " << i + 1 << ": "; getline(cin, gists[i]);
                }

                cout << "\n\n";

                for (int i = 0; i < gist_num; i++)
                {
                    cout << gists[i] << endl;
                }

                delete[] gists;  // clean up memory.

                return false;
            }

            default :
            {
                cout << "Part " << part << " not founded.\n\n";
            }
        }
    }
}