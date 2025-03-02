#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    return rand() % 100 + 1; // Tạo số ngẫu nhiên từ 1 đến 100
}

int main() {
    srand(time(0));
    int random_number = generateRandomNumber(); // Gọi hàm tạo số ngẫu nhiên
    int a, count = 0;
    bool choitiep = true;
    char b;
    int score = 10000; // Điểm khởi đầu

    while (choitiep) {
        cout << "Nhap so cua ban (1-100): ";
        cin >> a;
        count++; // Tăng biến đếm mỗi lần đoán

        // Kiểm tra số dự đoán
        if (a > random_number) {
            cout << "Your number is too high" << endl;
        } else if (a < random_number) {
            cout << "Your number is too low" << endl;
        } else {
            cout << "Correct! You guessed the number in " << count << " attempts." << endl;
            cout << "Do you want to play again? Press Y for YES or N for NO: ";
            cin >> b;

            if (b == 'N' || b == 'n') {
                choitiep = false; // Kết thúc trò chơi
            } else if (b == 'Y' || b == 'y') {
                // Khởi tạo lại số ngẫu nhiên và đếm lại
                random_number = generateRandomNumber(); // Gọi hàm tạo số ngẫu nhiên
                count = 0;
                score = 10000; // Đặt lại điểm khởi đầu
            } else {
                cout << "Invalid input! Exiting game." << endl;
                choitiep = false; // Thoát trò chơi khi nhận input không hợp lệ
            }
        }

        // Giảm điểm theo số lần đoán sai
        score -= 2 * (100 - count);
    }

    // Hiển thị điểm số của người chơi
    cout << endl << "Your final score is: " << score << endl;

    return 0;
}
