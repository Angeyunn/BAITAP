#include <iostream>
using namespace std;

int my_strlen(const char a[]) {
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    return length;
}

void my_strcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void delete_char(char a[], char c) {
    int i = 0, j = 0;
    while (a[i] != '\0') {
        if (a[i] != c) {
            a[j++] = a[i];
        }
        i++;
    }
    a[j] = '\0';
}

int main() {
    char a[1000], c;
    cout << "Nh?p chu?i: ";
    cin.getline(a, 1000);
    cout << "Nh?p ký t? c?n xóa: ";
    cin >> c;
    delete_char(a, c);
    cout << "Chu?i sau khi xóa: " << a << endl;
    return 0;
}

