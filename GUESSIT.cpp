#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    return rand() % 100 + 1; // T?o s? ng?u nhi�n t? 1 d?n 100
}

int main() {
    srand(time(0));
    int random_number = generateRandomNumber(); // G?i h�m t?o s? ng?u nhi�n
    int a, count = 0;
    bool choitiep = true;
    char b;
    int score = 10000; // �i?m kh?i d?u

    // V�ng l?p ch�nh c?a tr� choi
    while (choitiep) {
        cout << "Nhap so cua ban (1-100): ";
        cin >> a;
        count++; // Tang bi?n d?m m?i l?n do�n

        // Ki?m tra s? d? do�n
        if (a > random_number) {
            cout << "Your number is too high" << endl;
        } else if (a < random_number) {
            cout << "Your number is too low" << endl;
        } else {
            cout << "Correct! You guessed the number in " << count << " attempts." << endl;
            cout << "Do you want to play again? Press Y for YES or N for NO: ";
            cin >> b;

            if (b == 'N' || b == 'n') {
                choitiep = false; // K?t th�c tr� choi
            } else if (b == 'Y' || b == 'y') {
                // Kh?i t?o l?i s? ng?u nhi�n v� d?m l?i
                random_number = generateRandomNumber(); // G?i h�m t?o s? ng?u nhi�n
                count = 0;
                score = 10000; // �?t l?i di?m kh?i d?u
            } else {
                cout << "Invalid input! Exiting game." << endl;
                choitiep = false; // Tho�t tr� choi khi nh?n input kh�ng h?p l?
            }
        }

        // Gi?m di?m theo s? l?n do�n sai
        score -= 2 * (100 - count);
    }

    // Hi?n th? di?m s? c?a ngu?i choi
    cout << endl << "Your final score is: " << score << endl;

    return 0;
}

