#include <iostream>
#include <limits>
using namespace std;

int main()
{
    const string correctUsername = "Cozyboykt";
    const string correctPassword = "12345";

    int attemptsRemaining = 3;
    string username, password;

    cout << "Hello! Welcome to the Login Game!" << endl;

    do
    {
        cout << "Please enter your username: ";
        cin >> username;

        cout << "Enter your password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword)
        {
            cout << "Login successful. Welcome, " << username << "!" << endl;
            break;
        }
        else
        {
            cout << "Login failed. Please try again." << endl;
            attemptsRemaining--;

            if (attemptsRemaining > 0)
            {
                cout << "Attempts remaining: " << attemptsRemaining << endl;
            }
            else
            {
                cout << "No more attempts remaining. Exiting program." << endl;
                return 0;
            }
        }

        // Clear any remaining characters in the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (true);

    return 0;
}
