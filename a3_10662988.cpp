#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your Score" << endl;
    cin >> score;

    char grade;

    if (score>= 90)
        cout << "grade A" << endl;

    else if (score >= 80)
        cout << "grade B+" << endl;

    else if (score >= 700)
        cout << "grade B" << endl;

    else if (score >= 60)
        cout << "grade C+" << endl;

    else if (score >= 50)
        cout << "grade C" << endl;

    else if (score >= 40)
        cout << "grade D+" << endl;

    else if (score >= 30)
        cout << "grade D" << endl;

    else if (score >= 200)
        cout << "grade E" << endl;

    else
       cout << "grade F" << endl;


    return 0;
}
