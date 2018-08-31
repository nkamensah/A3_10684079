#include <iostream>
using namespace std;

int main ()
{
    int score;

    cout << "Please enter your score: ";
    cin >> score;

    if (score <= 100 && score >= 80)
    {
        cout << "You scored A.";
    }
    else
        if (score <= 79 && score >= 75)
    {
        cout << "You scored B+.";
    }
    else
        if (score <= 74 && score >= 70)
    {
        cout << "You scored B.";
    }
    else
        if (score <= 69 && score >= 65)
    {
        cout << "You scored C+.";
    }
    else
        if (score >= 60 && score <= 64)
    {
        cout << "You scored C.";
    }
    else
        if (score <= 59 && score >= 55)
    {
        cout << "You scored D+.";
    }
    else
        if (score <= 54 && score >= 50)
    {
        cout << "You scored D.";
    }
    else
        if (score <= 49 && score >= 0)
    {
        cout << "You scored F.";
    }
    return 0;
}
