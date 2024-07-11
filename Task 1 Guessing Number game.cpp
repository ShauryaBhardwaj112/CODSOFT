#include <bits/stdc++.h>
#include <ctime>
using namespace std;

class Guess {
private:
    int Guessnum;
    int n;
    int comp = 0;

public:
    void randomGuess() {
        srand(time(0));
        Guessnum = rand() % 100 + 1;
    }

    void getinput() {
        cout << "Enter the number: ";
        cin >> n;
    }

    void check() {
        if (n == Guessnum) {
            comp++;
            cout << "Congratulations!! You have guessed the correct number" << endl;
        } else if (n < Guessnum) {
            comp++;
            cout << "Oops! Your guessed number is lower than the actual" << endl;
        } else {
            comp++;
            cout << "Oops! You have guessed too high" << endl;
        }
        cout << "Number of attempts: " << comp << endl;
    }

    bool ISguessed() {
        return n == Guessnum;
    }
};

int main() {
    Guess number;
    number.randomGuess();
    bool guessed = false;
    while (!guessed) {
        number.getinput();
        number.check();
        guessed = number.ISguessed();
    }
    return 0;
}


