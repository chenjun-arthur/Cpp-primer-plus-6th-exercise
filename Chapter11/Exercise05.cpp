/*Chapter 11 Programming Exercises
5. Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state member
that governs whether the object is interpreted in stone form, integer pounds form,
or floating-point pounds form. Overload the << operator to replace the
show_stn() and show_lbs() methods. Overload the addition, subtraction, and
multiplication operators so that one can add, subtract, and multiply Stonewt values.
Test your class with a short program that uses all the class methods and friends.
*/
// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "ex05stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    incognito.stoneMode();
    cout << "The celebrity weighed " << incognito << "\n";

    wolfe.stoneMode();
    cout << "The detective weighed " << wolfe << "\n";

    cout << "The President weighed " << taft << "\n";

    incognito = Stonewt(276.8, Stonewt::STONE);
    taft = Stonewt(325, Stonewt::IPOUND);             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed " << incognito << "\n";
    cout << "After dinner, the President weighed " << taft << "\n";
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";

    cout << "After 2 times, incognito weighed " << incognito * 2 << "\n";
    cout << "When added, together weighed " << incognito + taft << "\n";
    cout << "After 1.5 times, taft weighed " <<  1.5 * taft << "\n";
    // std::cin.get();
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! " << st;
    }
}
