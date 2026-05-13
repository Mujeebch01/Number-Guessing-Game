#include <iostream>
using namespace std;
int main()
{
    int secretnumber = 85;
    int guess;
    int attempt = 0;
    do
    {
        cout << "Guess the number : ";
        cin >> guess;
        attempt++;
        if (guess > secretnumber)
        {
            cout << "TOO HIGH!" << endl;
        }
        else if (guess < secretnumber)
        {
            cout << "TOO LOW!" << endl;
        }
    } while (guess != secretnumber);

    cout << "\nYou guessed correct number!" << endl;
    cout << "You guessed in " << attempt << " attempts." << endl;

    return 0;
}