#include <bits/stdc++.h> // universal library
using namespace std;

string toString(int number) {
    string result = ""; // empty string;
    while (number) {
        result = char(number % 10 + '0') + result; // convert digit to char and append to result;
        number /= 10;
    }

    return result; // return the result string;
}

int toInt(string value) {
    int result = 0; // initialize result to 0;
    for (char c : value) {
        result = result * 10 + (c - '0'); // convert char to int and multiply with result;
    }

    return result; // return the result integer;
}

int main() {
    string str;
    int number;
    
    cin >> str >> number;
    
    string converted_number = toString(number) + " Hello";
    int converted_str = toInt(str) * 10;

    cout << "converted_number: " << converted_number << endl;
    cout << "converted_str: " << converted_str << endl;
}