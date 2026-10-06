#include <iostream>

using namespace std;

auto is_student = true;

int main()
{
    string name;
    int age; 
    double salary;
    long phone_numper;
    char gpa;

    cout <<"Name : ";
    cin >> name;
    cout <<"Age : ";
    cin >> age;
    cout <<"Salary : ";
    cin >> salary;
    cout <<"Phone numper : ";
    cin >> phone_numper;
    cout <<"Gpa : ";
    cin >> gpa;
    
    cout << "Hello " << name << " becuse your age is " << age << " you are allowed to go into our wepsite we will send a massage in to "<< phone_numper << " to ensure that you which want to log in and congratulation to " << gpa << " " << is_student << endl;
    
}   