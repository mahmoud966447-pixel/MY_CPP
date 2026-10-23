#include <iostream>

using namespace std;

void code_parts(int part_num, bool is_true);
void empty_value(string country = "no_country");

int main()
{
    int part;
    bool is_true;

    code_parts(part, is_true);
}

void code_parts(int part_num, bool is_true)
{
    do
    {
        cout << "Part: "; cin >> part_num;

        switch (part_num)
        {
            case 1 :
            {
                empty_value("Egypt");
                empty_value();
                empty_value("USA");

                is_true = false;
                break;
            }

            default :
            {
                cout << "Part " << part_num << " not founded.";

                is_true = true;
                break;
            }
        }
    }while (is_true == true);
}                                                       // Don't write (return) in any void function.

void empty_value(string country)
{
    cout << country << endl;
}

int winner()
{
    
}