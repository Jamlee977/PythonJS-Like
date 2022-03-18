#pragma once


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
     * Such that doing arrayOfInt[5]; range(0, 5, arrayOfInt); Printing arrayOfInt will give you 0,3,6,9,12.
     * 
     */
    range(int firstNumber, int lastNumber, int arrayOfInt[]) {
        int i;
        for (int j = 0, i = firstNumber; i < lastNumber; i++ , j++) {
            arrayOfInt[j] = i;
        }
        
    }

    /**
     * @brief A range class that can be used to assign an array of integers.
     * 
     * @param firstNumber The starting of the range.
     * @param lastNumber The ending of the range.
     * @param step The step for moving.
     * @param arrayOfInt An array of integers that needs to be assigned, it takes the range from the first parameter til the last one.
     * 
     * Such that doing arrayOfInt[5]; range(0, 15, 2, arrayOfInt); Printing arrayOfInt will give you 0,1,2,3,4.
     * 
     */
    range(int firstNumber, int lastNumber, int step, int arrayOfInt[]) {
        int i;
        for (int j = 0, i = firstNumber; i < lastNumber; i++ , j++) {
            arrayOfInt[j] = i;
            i = i + step;
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

    /**
     * @brief Convert a string into an int.
     * 
     * @param stringToInt The string that you want to turn into an int.
     * @param convertedToInt The int variable that you want the string to turn into.
     */
    integer(string stringToInt, int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }
    
    /**
     * @brief Convert a string into a long int.
     * 
     * @param stringToInt The string that you want to turn into a long int.
     * @param convertedToInt The long int variable that you want the string to turn into.
     */
    integer(string stringToInt, long &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }

    /**
     * @brief Convert a string into a long long int.
     * 
     * @param stringToInt The string that you want to turn into a long long int.
     * @param convertedToInt The long long int variable that you want the string to turn into.
     */
    integer(string stringToInt, long long int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }

    /**
     * @brief Convert a string into a unsigned int.
     * 
     * @param stringToInt The string that you want to turn into a unsigned int.
     * @param convertedToInt The unsigned int variable that you want the string to turn into.
     */
    integer(string stringToInt, unsigned int &convertedToInt) {
        stringstream convertToInt;
        convertToInt << stringToInt;
        convertToInt >> convertedToInt;
    }
};

class real {
public:

    /**
     * @brief Convert a string into a float.
     * 
     * @param stringToInt The string that you want to turn into a float.
     * @param convertedToInt The float variable that you want the string to turn into.
     */
    real(string stringToFloat, float &convertedToFloat) {
        stringstream convertToFloat;
        convertToFloat << stringToFloat;
        convertToFloat >> convertedToFloat;
    }

    /**
     * @brief Convert a string into a double.
     * 
     * @param stringToInt The string that you want to turn into a double.
     * @param convertedToInt The double variable that you want the string to turn into.
     */
    real(string stringToDouble, double &convertedToDouble) {
        stringstream convertToDouble;
        convertToDouble << stringToDouble;
        convertToDouble >> convertedToDouble;
    }

};

class toChar {
public:

    /**
     * @brief Convert a string into a char.
     * 
     * @param stringToInt The string that you want to turn into a char.
     * @param convertedToInt The char variable that you want the string to turn into.
     */
    toChar(string stringToChar, char &convertedToChar) {
        stringstream convertToChar;
        convertToChar << stringToChar;
        convertToChar >> convertedToChar;
    }

    /**
     * @brief Convert a string into an array of char.
     * 
     * @param stringToInt The string that you want to turn into an array of char.
     * @param convertedToInt The array of char variable that you want the string to turn into.
     */
    toChar(string stringToChar, char convertedToChar[]) {
        stringstream convertToChar;
        convertToChar << stringToChar;
        convertToChar >> convertedToChar;
    }

};


/**
 * @brief A function that prints the type of a variable
 */
void type(string stringDatatype) {
    cout << "str" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(char charDatatype) {
    cout << "char" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(int intDatatype) {
    cout << "int" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(float floatDatatype) {
    cout << "float" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(double doubleDatatype) {
    cout << "double" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(long double longDoubleDatatype) {
    cout << "long double" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(long int longIntDatatype) {
    cout << "long int" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(long long int longLongIntDatatype) {
    cout << "long long int" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
void type(unsigned int unsignedIntDatatype) {
    cout << "unsigned int" << endl;
}

/**
 * @brief A function that prints the type of a variable
 */
template <typename T>
void type(T arrayDatatype[]) {
    cout << "array" << endl;
}





/**
 * @brief A function to determine if an integer is prime.
 * 
 * @param isPrimeInt  
 */
bool isPrime(int isPrimeInt) {
    int i;
    for (i = 2; i <= isPrimeInt / 2; i++) {
        if (isPrimeInt % i == 0) {
            return false;
        }

    }

    return true;
    
}


/**
 * @brief A fucntion to get you the prime numbers in range starting from 0.
 * 
 * @param number The end of the range.
 */
void prime(int number) {
    int i, j, flag;

    for (i = 0; i <= number; i++) {
        if (i == 0 || i == 1) {
            continue;
        }

        flag = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout << i << ' ';
        }
    }
    cout << endl;
}

/**
 * @brief A fucntion to get you the prime numbers in range.
 * 
 * @param firstNumber The first number in the range.
 * @param lastNumber The last number in the range.
 */
void prime(int firstNumber, int lastNumber) {
    int i, j, flag;

    for (i = firstNumber; i <= lastNumber; i++) {
        if (i == 0 || i == 1) {
            continue;
        }

        flag = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout << i << ' ';
        }
    }
    cout << endl;
}


/**
 * @brief A function to uppercase a char or a string.
 * 
 * @param toUpper 
 */
char upper(char &toUpper) {
    toUpper = toUpper - 32;
    return toUpper;
}

/**
 * @brief A function to uppercase a char or a string.
 * 
 * @param toUpper 
 */
void upper(char toUpper[]) {
    int i;

    for (i = 0; toUpper[i]; i++) {
        if (toUpper[i] >= 'a' && toUpper[i] <= 'z') {
            toUpper[i] = toUpper[i] - 32;
        }
    }
}

/**
 * @brief A function to uppercase a char or a string.
 * 
 * @param toUpper 
 */
void upper(string &toUpper) {
    int i;

    for (i = 0; toUpper[i]; i++) {
        if (toUpper[i] >= 'a' && toUpper[i] <= 'z') {
            toUpper[i] = toUpper[i] - 32;
        }
    }
}

/**
 * @brief A function to lowercase a char or a string.
 * 
 * @param toLower 
 */
char lower(char &toLower) {
    toLower = toLower + 32;
    return toLower;
}

/**
 * @brief A function to lowercase a char or a string.
 * 
 * @param toLower 
 */
void lower(char toLower[]) {
    int i;

    for (i = 0; toLower[i]; i++) {
        if (toLower[i] >= 'A' && toLower[i] <= 'Z') {
            toLower[i] = toLower[i] + 32;
        }
    }
}

/**
 * @brief A function to lowercase a char or a string.
 * 
 * @param toLower 
 */
void lower(string &toLower) {
    int i;

    for (i = 0; toLower[i]; i++) {
        if (toLower[i] >= 'A' && toLower[i] <= 'Z') {
            toLower[i] = toLower[i] + 32;
        }
    }
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
        for (size_t i = 0; i <= n; i++) {
            cout << arr[i] << ' ';
        }
    }
    
    cout << endl;
}

/**
 * @brief A function to print an array of strings.
 * 
 * @param arrayOfStrings 
 * @param size 
 */
void print(const char *arrayOfStrings[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << arrayOfStrings[i] << endl;
    }
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
 * @brief This function is used to get the length of a string.
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

/**
 * @brief This function is used to get the length of an Array of Strings.
 * 
 * @param lenOfString is a string that is used in this function to get you its size
 * @return countOfStringsInArray 
 */
int len(const char *lenOfArrayOfStrings[]) {
    int i, countOfStringsInArray = 0;
    for (i = 0; lenOfArrayOfStrings[i]; i++)
    {
        countOfStringsInArray++;
    }
    countOfStringsInArray = countOfStringsInArray - 13;
    return countOfStringsInArray;
}


/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 */
void copy(char toBeCopied[], char toCopyIn[]) {
    int size;
    size = len(toBeCopied);
    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }
    
}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 */
void copyBack(char toBeCopied[], char toCopyIn[]) {
    int size;
    size = len(toBeCopied);
    int i, j;
    for (j = 0; j <= size; j++);
	j--;

	for (i = 0; i <= size; i++, j--) {
		toCopyIn[i] = toBeCopied[j];
	}
    
}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 */
void copy(string toBeCopied, string toCopyIn) {
    int size;
    size = len(toBeCopied);
    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 */
void copyBack(string toBeCopied, string toCopyIn) {
    int size;
    size = len(toBeCopied);
    int i, j;
    for (j = 0; j <= size; j++);
	j--;

	for (i = 0; i <= size; i++, j--) {
		toCopyIn[i] = toBeCopied[j];
	}
    
}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 * @param size The size of the array
 */
void copy(int toBeCopied[], int toCopyIn[], int size) {

    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 * @param size The size of the array
 */
void copy(float toBeCopied[], float toCopyIn[], int size) {

    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}

/**
 * @brief A function to copy two strings.
 * 
 * @param toBeCopied 
 * @param toCopyIn 
 * @param size The size of the array
 */
void copy(double toBeCopied[], double toCopyIn[], int size) {

    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}

/**
 * @brief A function to reverse an array of characters.
 * 
 * @param toReverse 
 */
void reverse(char toReverse[]) {
    
    int temp;
    int size = len(toReverse);

    for(int i = 0; i < size / 2; i++){
        temp = toReverse[i];
        toReverse[i] = toReverse[size-i-1];
        toReverse[size-i-1] = temp;
    }
    
}

/**
 * @brief A function to reverse an array of characters.
 * 
 * @param toReverse
 * @param size The size of the array of numbers.
 */
void reverse(int toReverse[], int size) {
    
    int temp;

    for(int i = 0; i < size / 2; i++){
        temp = toReverse[i];
        toReverse[i] = toReverse[size-i-1];
        toReverse[size-i-1] = temp;
    }

}

/**
 * @brief A function to reverse an array of characters.
 * 
 * @param toReverse
 * @param size The size of the array of numbers.
 */
void reverse(float toReverse[], int size) {
    
    int temp;

    for(int i = 0; i < size / 2; i++){
        temp = toReverse[i];
        toReverse[i] = toReverse[size-i-1];
        toReverse[size-i-1] = temp;
    }
    
}

/**
 * @brief A function to reverse an array of characters.
 * 
 * @param toReverse
 * @param size The size of the array of numbers.
 */
void reverse(double toReverse[], int size) {
    
    int temp;

    for(int i = 0; i < size / 2; i++){
        temp = toReverse[i];
        toReverse[i] = toReverse[size-i-1];
        toReverse[size-i-1] = temp;
    }
    
}

/**
 * @brief A function to print the id a variable.
 * 
 * @param idOfData 
 */
template <typename T>
void id(T idOfData) {
    cout << &idOfData << endl;
}


/**
 * @brief A function to print the array's objects and their number in the array starting from zero
 * 
 * @param charArrayToEnumerate 
 */
void enumerate(char charArrayToEnumerate[]) {
    int i, j = 0;

    int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from any specific int.
 * 
 * @param charArrayToEnumerate 
 * @param start
 */
void enumerate(char charArrayToEnumerate[], int start) {
    int i, j = start;

    int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from zero
 * 
 * @param charArrayToEnumerate 
 */
void enumerate(const char *charArrayToEnumerate[]) {
    int i, j = 0;

    int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from any specific int.
 * 
 * @param charArrayToEnumerate 
 * @param start
 */
void enumerate(const char *charArrayToEnumerate[], int start) {
    int i, j = start;

    int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from zero
 * 
 * @param charArrayToEnumerate
 * @param size The size of the array.
 * 
 */
template <typename T>
void enumerate(T arrayToEnumerate[], int size) {
    int i, j = 0;

    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << arrayToEnumerate[i] << endl;
    }

}


/**
 * @brief A function to print the array's objects and their number in the array starting from a specific int.
 * 
 * @param arrayToEnumerate 
 * @param size The size of the array.
 * @param start
 */
template <typename T>
void enumerate(T arrayToEnumerate[], int size, int start) {
    int i, j = start;

    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << arrayToEnumerate[i] << endl;
    }

}
