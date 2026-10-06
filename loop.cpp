#include <iostream>

using namespace std;

int main()
{
    int tall;
    int num;

    cout << "Tall :";
    cin >> tall;

    cout << "Numper :";
    cin >> num;

    for(int i = 0; i < tall; i++)
    {
        for(int z = 0; z < num; z++)
        {
            for(int y = 0; y < (tall - i); y++)
            {
                cout<<" ";
            }

            cout << "*";

            for(int x = 0; x < i; x++)
            { 
                cout << "**";
            }

            for(int w = 0; w <  (tall - i); w++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

}