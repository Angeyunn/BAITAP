#include <iostream>

using namespace std;

void trim_left(char *a) {
    char *start = a;
    while (*start == ' ') start++;  

    char *dst = a;
    while (*start) {
        *dst = *start;
        dst++;
        start++;
    }
    *dst = '\0';
}

void trim_right(char *a) {
    char *end = a;
    while (*end) end++;  
    end--;  

    while (end >= a && *end == ' ') {
        *end = '\0';
        end--;
    }
}

int main() {
    char str[100];

    cout << "Nhap xau: ";
    cin.getline(str, 100);

    trim_left(str);
    cout << "Sau trim_left: '" << str << "'\n";

    trim_right(str);
    cout << "Sau trim_right: '" << str << "'\n";

    return 0;
}

