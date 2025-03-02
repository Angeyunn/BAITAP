#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    return rand() % 100 + 1; // T?o s? ng?u nhiên t? 1 d?n 100
}

int main() {
    srand(time(0));
    int random_number = generateRandomNumber(); // G?i hàm t?o s? ng?u nhiên
    int a, count = 0;
    bool choitiep = true;
    char b;
    int score = 10000; // Ði?m kh?i d?u

    // Vòng l?p chính c?a trò choi
    while (choitiep) {
        cout << "Nhap so cua ban (1-100): ";
        cin >> a;
        count++; // Tang bi?n d?m m?i l?n doán

        // Ki?m tra s? d? doán
        if (a > random_number) {
            cout << "Your number is too high" << endl;
        } else if (a < random_number) {
            cout << "Your number is too low" << endl;
        } else {
            cout << "Correct! You guessed the number in " << count << " attempts." << endl;
            cout << "Do you want to play again? Press Y for YES or N for NO: ";
            cin >> b;

            if (b == 'N' || b == 'n') {
                choitiep = false; // K?t thúc trò choi
            } else if (b == 'Y' || b == 'y') {
                // Kh?i t?o l?i s? ng?u nhiên và d?m l?i
                random_number = generateRandomNumber(); // G?i hàm t?o s? ng?u nhiên
                count = 0;
                score = 10000; // Ð?t l?i di?m kh?i d?u
            } else {
                cout << "Invalid input! Exiting game." << endl;
                choitiep = false; // Thoát trò choi khi nh?n input không h?p l?
            }
        }

        // Gi?m di?m theo s? l?n doán sai
        score -= 2 * (100 - count);
    }

    // Hi?n th? di?m s? c?a ngu?i choi
    cout << endl << "Your final score is: " << score << endl;

    return 0;
}

