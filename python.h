#pragma

#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
// #include <typeinfo>

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
     * 
     */
    range(int firstNumber, int lastNumber, int arrayOfInt[]) {
        int i;
        for (int j = 0, i = firstNumber; i < lastNumber; i++ , j++) {
            arrayOfInt[j] = i;
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

class integer {
public:
    integer(string stringToInt, int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }
    
    integer(string stringToInt, long &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }

    integer(string stringToInt, long long int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }

    integer(string stringToInt, unsigned int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }
};

class real {
public:
    real(string stringToFloat, float &convertedToFloat) {
        stringstream convertToFloat;
        convertToFloat << stringToFloat;
        convertToFloat >> convertedToFloat;
    }

    real(string stringToDouble, double &convertedToDouble) {
        stringstream convertToDouble;
        convertToDouble << stringToDouble;
        convertToDouble >> convertedToDouble;
    }

};

class toChar {
public:
    toChar(string stringToChar, char &convertedToChar) {
        stringstream convertToChar;
        convertToChar << stringToChar;
        convertToChar >> convertedToChar;
    }

    toChar(string stringToChar, char convertedToChar[]) {
        stringstream convertToChar;
        convertToChar << stringToChar;
        convertToChar >> convertedToChar;
    }

};


void type(string stringDatatype) {
    cout << "str";
}

void type(char charDatatype) {
    cout << "char";
}

void type(int intDatatype) {
    cout << "int";
}

void type(float floatDatatype) {
    cout << "float";
}

void type(double doubleDatatype) {
    cout << "double";
}



/**
 * @brief Python-Like print() function.
 * @param void prints a New Line
 */
void print() {
    cout << endl;
}

/**
 * @brief A Python-Like print function that prints out the arguments whatever they are 
 * @param first is the first value whether it's string, int, double or bool.
 * @param next is the next value and it can be multiple values.
 * Thus using print("C++", 2, 6.9) will print the following: C++ 2 6.9
 */
template<typename T, typename ...TAIL >
void print(const T &first, TAIL... next) {
    cout << first << ' ';
    print(next...);
}

/**
 * @brief A function to print any type of arrays, but in "int, float or double" arrays, it prints everything without the last value.
 */
template<typename T, size_t n>
void print(T const(& arr)[n])
{
    string STR;
    str(arr, STR);

    if (arr[0] == STR[0]) {
        for (size_t i = 0; i < n; i++) {
            cout << arr[i];
        }
    }

    else {   
        for (size_t i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
    }
    // print(tail...);
    cout << endl;
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
