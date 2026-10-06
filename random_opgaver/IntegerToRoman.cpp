#include <iostream>

std::string intToRoman(int num) {
    std::string roman = "";
    int thousands = num - (num % 1000);
    int hundreds = (num % 1000) - (num % 100);
    int tens = (num % 100) - (num % 10);
    int ones = (num % 10) - (num % 1);
    while (thousands > 0) {
        roman += "M";
        thousands -= 1000;
    }
    while (hundreds > 0) {
        if (hundreds == 900) {
            roman += "CM";
            hundreds -= 900;
        }
        else if (hundreds == 400) {
            roman += "CD";
            hundreds -= 400;
        }
        else if (hundreds >= 500) {
            roman += "D";
            hundreds -= 500;
        }
        else {
            roman += "C";
            hundreds -= 100;
        }
    }
    while (tens > 0) {
        if (tens == 90) {
            roman += "XC";
            tens -= 90;
        }
        else if (tens == 40) {
            roman += "XL";
            tens -= 40;
        }
        else if (tens >= 50) {
            roman += "L";
            tens -= 50;
        }
        else {
            roman += "X";
            tens -= 10;
        }
    }
    while (ones > 0) {
        if (ones == 9) {
            roman += "IX";
            ones -= 9;
        }
        else if (ones == 4) {
            roman += "IV";
            ones -= 4;
        }
        else if (ones >= 5) {
            roman += "V";
            ones -= 5;
        }
        else {
            roman += "I";
            ones -= 1;
        }
    }
    std::cout << roman << "\n";    
    return roman;
}

int main() {
    intToRoman(1994);
    return 0;
}