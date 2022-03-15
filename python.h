#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>

using std::endl;
using std::cout;
using std::cin;
using std::string;

/**
 * @brief Python-Like print() function.
 * @param void prints a New Line
 */
void print() {
    cout << endl;
}

/**
 * @brief A Python-Like print function that prints out the arguments whatever they are 
 * @param first is the first value wheather it's string, int, double or bool.
 * @param next is the next value and it can be multiple values.
 * Thus using print("C++", 2, 6.9) will print the following: C++ 2 6.9
 */
template<typename T, typename ...TAIL >
void print(const T &first, TAIL... next) {
    cout << first << ' ';
    print(next...);
}

/**
 * @brief This functions is used to enter an input without entering a sentence before the variable.
 * 
 * @param varInput is the input that the user wants to enter.
 */
template<typename Y>
void input(Y &varInput) {
	cin >> varInput;
}

/**
 * @brief This function is to let the user input a variable with a string.
 * @param str is the sentence that you want to be before entering the variable.
 * @param varInput is the input that the user wants to enter.
 * Thus, """input("Enter your name: ", name);""" would be: Enter your name: {name}
 */
template<typename Y>
void input(string str, Y &varInput) {
    cout << str;
	cin >> varInput;
}

