#include <iostream>

bool isPalindrome(int x) {
        int count = 0;
        int l = 0;
        int r = std::to_string(x).length();
        int length = std::to_string(x).length();
        if (length & 1) {
            length++;
        };
        for (int i = 0; i < length / 2; i++) {
            if (std::to_string(x)[l] == std::to_string(x)[r - 1]) {
                count++;
                l++;
                r--;
            }
        }

        count = count * 2;
        std::cout << count << "\n";
        std::cout << length << "\n";
        if (count == length) {
            return true;
        }
        return false;
    }

int main() {
    isPalindrome(121);
    return 0;
}
