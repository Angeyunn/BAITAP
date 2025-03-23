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

void delete_char(char *a, char c) {
    char *src = a, *dest = a;
    while (*src) {
        if (*src != c) {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() {
    char str[100];
    char c;
    
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);
    
    cout << "Nhap ky tu can xoa: ";
    cin >> c;
    
    delete_char(str, c);
    cout << "Chuoi sau khi xoa ky tu '" << c << "': " << str << endl;
    
    return 0;
}
