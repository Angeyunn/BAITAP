#include <iostream>

using namespace std;

bool is_palindrome(char *a) {
    char *start = a;
    char *end = a;

    while (*end) end++;  
    end--;  

    while (start < end) {
        if (*start != *end) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];

    cout << "Nhap xau: ";
    cin.getline(str, 100);

    if (is_palindrome(str)) {
        cout << "Xau doi xung.\n";
    } else {
        cout << "Xau khong doi xung.\n";
    }

    return 0;
}

