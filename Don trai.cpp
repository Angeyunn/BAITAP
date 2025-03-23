#include <iostream>

using namespace std;

int my_strlen(const char *a) {
    int length = 0;
    while (*a++) length++;
    return length;
}

void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

void pad_left(char *a, int n) {
    int len = my_strlen(a);
    if (len >= n) return;

    int diff = n - len;
    
    for (int i = len; i >= 0; --i) {
        *(a + i + diff) = *(a + i);
    }

    for (int i = 0; i < diff; ++i) {
        *(a + i) = ' ';
    }
}

int main() {
    char str[100];
    int n;

    cout << "Nhap xau: ";
    cin.getline(str, 100);

    cout << "Nhap do dai mong muon: ";
    cin >> n;

    pad_left(str, n);
    
    cout << "Xau sau khi pad_left: \"" << str << "\"" << endl;

    return 0;
}

