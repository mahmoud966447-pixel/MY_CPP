#include <iostream>

using namespace std;

int main()
{
    int part;
    
    cout << "Part: ";
    cin >> part;

    while (true)
    {
        if (part == 1)
        {
            int i;

            cout << "Inter i value: ";
            cin >> i;

            do  // Do the frist with out check (doing before checkening).
            {
                cout << "I is " << i << endl;
                i++;
            }while (i < 5);

            break;
        }

        else if (part == 2)
        {
            for (int i = 1; i <= 3; i++)
            {
                for (int j = 1; j <= 3; j++)   // Some thing not important.
                {
                    cout << i * j << " ";
                }
                cout << endl;
            }

            break;
        }

        else if (part == 3)
        {
            int numpers[5] = {10, 20, 30, 40, 50}

            for (int num : numpers)
            {
                cout << num << endl;
            }

            string name = "mahmoud";

            for (char c : name)
            {
                cout << c << endl;
            }
        }

        else
        {
            cout << "Part " << part << " not fouded.";

            continue;
        }
    }
}