#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x = 5;
    int y = 3;

    // (==),(!=),(>),(<),(>=),(<=)
    // (and => &&),(or => ||),(not => !)

    //normal oprations.

    x += 3;
    x = x + 3;

    x -= 3;
    x = x - 3;

    x *= 3;
    x = x * 3;

    x /= 3;
    x = x / 3;

    x %= 3;
    x = x % 3;

    //binary oprations.

    x &= 3;
    x = x & 3;

    x |= 3;
    x = x | 3;

    x ^= 3;
    x = x ^ 3;

    x >>= 3;
    x = x >> 3;

    x <<= 3;
    x = x << 3;

    //cmath operations.

    cout << max({1, 3, 4, 5}) << endl; // waht algorith liberary.
    cout << min({1, 3, 4, 5,5}) << endl; // waht algorith liberary.

    cout << sqrt(64) << endl; // root.
    cout << round(4.5) << endl; // the nearer int.
    cout << log2(8) << endl;
    cout << log(2.718281) << endl;
}