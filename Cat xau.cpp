#include <iostream>

using namespace std;

int my_strlen(const char *a) {
    int length = 0;
    while (*a++) length++;
    return length;
}

void truncate(char *a, int n) {
    int len = my_strlen(a);
    if (len > n) {
        *(a + n) = '\0';
    }
}

int main() {
    char str[100];
    int n;

    cout << "Nhap xau: ";
    cin.getline(str, 100);

    cout << "Nhap do dai toi da: ";
    cin >> n;

    truncate(str, n);

    cout << "Xau sau khi truncate: \"" << str << "\"" << endl;

    return 0;
}

