#include <iostream>


using namespace std;

auto a = 4; //automatically treated as int

int main()
{
    int num;  // numper.
    long salary;  //long numper.
    float hight; //(num.num).
    double phone_numper; //very long float.
    string name; // text
    char gpa;  // 'A' one character
    bool istudent; // true or false.


    int x, z; // No problem with muilty variables in one line and change the variable value.
    x = num = z = 50;

    const int con = 0; // No one can to change this variable value.
    //int con = 1;  error.
    ++x; //(++x;) = (x++;)
    cout << x << endl;

    float f1 = 35e3; //35000
    double d1 = 12e4; //120000

    bool b1 = true; //output (1)
    bool b2 = false; //output (0)

    cout << boolalpha;   //enable reset (true, false)

    cout << b1 << endl << b2 << endl;

    cout << noboolalpha;   //inable reset (1, 0)

    cout << b1 << endl << b2 << endl;

    char a = 65; //outbut (A).
    /*In char you can print the numper by his numper (A => Z) (65 => 90) and (a => z) (97 => 122) to change (A = a + 32)*/

    string fristname = "mahmoud";
    char fristname1[] = "mahmoud";
    string lastname = "maklouhf";
    cout << fristname + " " + lastname << endl;
    cout << fristname.append(lastname) << endl; // add to the main variable.
    cout << "MY name chares numper is " << fristname.size() << endl; // my string char num it will be 15 becuse i append to this.
    cout << "MY name chares numper is " << fristname.length() << endl; // my string char num it will be 15 becuse i append to this.
    cout << fristname[2] << endl;  // to take one char from my txt by his num (it startes from 0 not 1).
    cout << fristname.at(2); // [] = .at()



    

    /*Variables shoud have an understandable name to make code easy to read to the next devolopers.*/
}