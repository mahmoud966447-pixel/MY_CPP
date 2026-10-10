#include<iostream>
#include <string>

using namespace std;  

int main()
{
    string fristname;
    string fullname;
    cout <<"  *\n ***\n*****\n";

    cout << 3 + 3 << endl;

    cout << "\t \"my name is\\ mahmoud \" \n";  // (\) take you acces to put some invalide characters in your string like (\ , ").

    cout << "Inter your name: "; // we use cout to make user know what he will write in input.
    cin >> fristname; // if user write "mahmoud hamdi" it will print "mahmoud".

    cout << "Inter your full name: ";
    cin.ignore();
    getline(cin, fullname);
    cout << fullname << " is my name."; // we can print the variable values by cout.

    return 0;
}