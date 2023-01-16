#include <iostream>
using namespace std;
char grades(int score)
{
    if (score < 0 || score > 100)
    {
        return 0;
    }
    switch (score / 10)
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    case 5:
        return 'E';
    default:
        return 'F';
    }
}
int main()
{
    int score;
    char grade;
    cout << "Enter :";
    cin >> score;

    // Find grade
    grade = grades(score);
    cout<<grade;
}