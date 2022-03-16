#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::stringstream;

class range {
private:
    int firstNumber, lastNumber;
public:
    /**
     * @brief A range class that can be used to assign an array of integers.
     * 
     * @param firstNumber The starting of the range.
     * @param lastNumber The ending of the range.
     * @param arrayOfInt An array of integers that needs to be assigned, it takes the range from the first parameter til the last one.
     * 
     * Such that doing arrayOfInt[5]; range(0, 5, arrayOfInt); Printing arrayOfInt will give you 0,1,2,3,4.
     */
    range(int firstNumber, int lastNumber, int arrayOfInt[]) {
        int i;
        for (i = firstNumber; i < lastNumber; i++) {
            arrayOfInt[i] = i;
        }
        
    }
};

class str {
public:
    /**
     * @brief Convert a number to a string.
     * 
     * @param numberToString The number that the user needs to turn into a string. 
     * @param convertedToString The name of a variable that will contain the new string value.
     */
    template <typename T>
    str(T numberToString, string &convertedToString) {
        stringstream convertToString;
        convertToString << numberToString;
        convertToString >> convertedToString;
    }
};
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
/**
 * @brief This function is used to get the length of an Array of Characters.
 * 
 * @param lenOfArrayofChar is an array of characters that needs to be put in the function.
 * @return countOfChar
 */
int len(char lenOfArrayofChar[]) {
    int i, countOfChar = 0;
    for (int i = 0; lenOfArrayofChar[i]; i++)
    {
        countOfChar++;
    }
    return countOfChar;
}

/**
 * @brief This function is used to get the length of an Array of Characters.
 * 
 * @param lenOfString is a string that is used in this function to get you its size
 * @return countOfStringChars 
 */
int len(string lenOfString) {
    int i, countOfStringChars = 0;
    for (int i = 0; lenOfString[i]; i++)
    {
        countOfStringChars++;
    }
    return countOfStringChars;
}

