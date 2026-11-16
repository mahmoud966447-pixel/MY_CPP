#include <iostream>

using namespace std;

void code_parts(int part_num, bool is_true);

//======================================================

int main()                                            
{
    int part;
    bool is_true;

    code_parts(part, is_true);
}

//======================================================

void empty_value(string country = "no_country");
int calc (int num1, int num2, string oper);
void change_num (int &num, int change);
void swaps_values (int &num1, int &num2);


void code_parts(int part_num, bool is_true)
{
    do
    {
        cout << "Part: "; cin >> part_num;

        switch (part_num)
        {
            case 1:
            {
                empty_value("Egypt");
                empty_value();
                empty_value("USA");

                is_true = false;
                break;
            }

            case 2:
            {
                int num1, num2;
                string oper;

                while (true)
                {
                    cout << "Inter numper(1): "; cin >> num1;
                    cout << "Inter numper(2): "; cin >> num2;
                    cout << "Inter operation (+, -, *, /, ^): "; cin >> oper;
                    cin.ignore();

                    if (oper == "+", "-", "*", "/", "^")
                    {
                        cout << calc (num1, num2, oper);
                        break;
                    }

                    else
                    {
                        cout << "Operation (" << oper << ") not found." << endl;
                        continue;
                    }
                }

                is_true = false;
                break;
            }

            case 3:
            {
                int num; cout << "Inter variable to change his value: "; cin >> num;
                int changing_value; "Inter changing value: "; cin >> changing_value;

                change_num (num, changing_value);

                cout << "Your var = " << num;

                is_true = false;
                break;
            }

            case 4:
            {
                int num1, num2;

                cout << "Inter numper(1): "; cin >> num1;
                cout << "Inter numper(2): "; cin >> num2;

                swaps_values (num1, num2);

                cout << "numper(1) = " << num1 << endl << "numper(2) = " << num2 << endl;

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

int calc (int num1, int num2, string oper)
{
    if (oper == "+")
    {
        return num1 + num2;
    }

    else if (oper == "-")
    {
        return num1 - num2;
    }

    else if (oper == "*")
    {
        return num1 * num2;
    }

    else if (oper == "/")
    {
        return num1 / num2;
    }

    else
    {
        int equal = num1;

        for (int i = 0; i < num2 - 1; i++)
        {
            equal *= num1;
        }

        return equal;
    }
}

void change_num (int &num ,int change)
{
    num = change;
}

void swaps_values (int &num1, int &num2)
{
    int var = num1;

    num1 = num2;
    num2 = var;
}
