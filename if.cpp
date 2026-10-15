#include <iostream>

using namespace std;

int main()
{
    int part;

    cout << "Part: ";
    cin >> part;

    while (true)
    {
        switch (part)
        {
            case 1:
            {
                int x, y;

                cout << "Inter x space y: ";
                cin >> x >> y;

                bool is_greater = x > y;
                bool is_equal = x == y;

                if (is_greater)
                {
                    cout << "\nx is greater than y.\n";
                }

                else if (is_equal)
                {
                    cout << "\nx equal y.\n";
                }

                else
                {
                    cout << "\nx is smaller than y.\n";
                }

                return false;
                break;
            }

            case 2:
            {
                int time;
                int age;

                cout << "Time: ";
                cin >> time;

                cout << "Age: ";
                cin >> age;

                cout << ((time < 12 && age >= 18) ? "Good day." : (time < 18 && age >=18) ? "Good afternoon." : "Good evening.");

                return false;
                break;
            }

            default:
            {
                cout << "Part " << part << " not founded." << endl;

                return true;
            }
        }
    }
}