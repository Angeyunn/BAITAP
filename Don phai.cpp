#include <iostream>

using namespace std;

int my_strlen(const char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

void reverse(char *a) {
    int len = my_strlen(a);
    char *left = a;
    char *right = a + len - 1;
    
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void pad_right(char *a, int n) {
    int len = my_strlen(a);
    if (len >= n) return;
    
    for (int i = len; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

int main() {
    char str[100];
    int n;
    
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);
    
    cout << "Nhap do dai toi thieu cua chuoi: ";
    cin >> n;
    pad_right(str, n);
    cout << "Chuoi sau khi don phai: '" << str << "'" << endl;
    
    return 0;
}
