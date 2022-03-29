#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

#define INT_MIN -2147483647
#define INT_MAX 2147483647

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::stringstream;

class range {
public:

    range() = default;

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

    str() = default;
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

    integer() = default;
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

    real() = default;

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

    toChar() = default;
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
 * @param toUpper A character to be turned into capital letters
 */
char upper(char &toUpper) {
    toUpper = toUpper - 32;
    return toUpper;
}

/**
 * @brief A function to uppercase a char or a string.
 * 
 * @param toUpper An array of characters to turn its characters into capital letters
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
 * @param toUpper A string to be turned into capital letters
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
 * @param toLower A character to be turned into small letters
 */
char lower(char &toLower) {
    toLower = toLower + 32;
    return toLower;
}

/**
 * @brief A function to lowercase a char or a string.
 * 
 * @param toLower An array of characters to turn its characters into small letters
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
 * @param toLower A string to be turned into capital letters
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
 * @brief A function to printa dynamic array.
 * 
 * @param arrOfData An array of any datatype
 * @param size the size of the dynamic array 
 *  
 */
template <typename T>
void *print(T *arrOfData, int size) {
    string STR;
    str(arrOfData, STR);
    if (arrOfData[0] == STR[0]) {
        for(int i = 0; i < size; i++) {
            cout << arrOfData[i];
        }
    }
    else {
        for(int i = 0; i < size; i++) {
            cout << arrOfData[i] << ' ';
        }
    }
}

/**
 * @brief A function to print an array of strings.
 * 
 * @param arrayOfStrings An array of a character array
 * @param size The size of the array
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
void input(Y varInput) {
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
 * @brief A function to input the elements of a dynamic array.
 * 
 * @param newArray A dynamic array of integers
 * @param size The size of the dynamic array
 * 
 */
void *input(int *newArray, int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> *(newArray + i);
	}
}

/**
 * @brief A function to input the elements of a dynamic array.
 * 
 * @param newArray A dynamic array of floats
 * @param size The size of the dynamic array
 * 
 */
void *input(float *newArray, int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> *(newArray + i);
	}
}

/**
 * @brief A function to input the elements of a dynamic array.
 * 
 * @param newArray A dynamic array of doubles
 * @param size The size of the dynamic array
 * 
 */
void *input(double *newArray, int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> *(newArray + i);
	}
}



/**
 * @brief A function to get the minimum value of an array of integers
 * 
 * @param arrayOfInt An array of integers
 * @param sizeOfArray The size of the array 
 * @return int 
 */
int min (int arrayOfInt[], int sizeOfArray) {
    int i;
    int minimumValue = INT_MAX;

    for (i = 0; i < sizeOfArray; i++) {
        if (minimumValue > arrayOfInt[i]) {
            minimumValue = arrayOfInt[i];
        }
    }

    return minimumValue;
}

/**
 * @brief A function to get the minimum value of an array of floats
 * 
 * @param arrayOfFloat An array of floats
 * @param sizeOfArray The size of the array
 * @return int 
 */
int min (float arrayOfFloats[], int sizeOfArray) {
    int i;
    int minimumValue = INT_MAX;

    for (i = 0; i < sizeOfArray; i++) {
        if (minimumValue > arrayOfFloats[i]) {
            minimumValue = arrayOfFloats[i];
        }
    }

    return minimumValue;
}

/**
 * @brief A function to get the minimum value of an array of doubles
 * 
 * @param arrayOfDouble An array of doubles
 * @param sizeOfArray The size of the array
 * @return int 
 */
int min (double arrayOfDouble[], int sizeOfArray) {
    int i;
    int minimumValue = INT_MAX;

    for (i = 0; i < sizeOfArray; i++) {
        if (minimumValue > arrayOfDouble[i]) {
            minimumValue = arrayOfDouble[i];
        }
    }

    return minimumValue;
}



/**
 * @brief A function to get the maximum value of an array of integers
 * 
 * @param arrayOfInt An array of integers
 * @param sizeOfArray The size of the array
 * @return int 
 */
int max (int arrayOfInt[], int sizeOfArray) {
    int i;
    int maximumValue = INT_MIN;

    for (i = 0; i < sizeOfArray; i++) {
        if (arrayOfInt[i] > maximumValue) {
            maximumValue = arrayOfInt[i];
        }
    }

    return maximumValue;
}

/**
 * @brief A function to get the maximum value of an array of floats
 * 
 * @param arrayOfFloats An array of floats
 * @param sizeOfArray The size of the array
 * @return int 
 */
int max (float arrayOfFloats[], int sizeOfArray) {
    int i;
    int maximumValue = INT_MIN;

    for (i = 0; i < sizeOfArray; i++) {
        if (arrayOfFloats[i] > maximumValue) {
            maximumValue = arrayOfFloats[i];
        }
    }

    return maximumValue;
}


/**
 * @brief A function to get the maximum value of an array of doubles
 * 
 * @param arrayOfDoubles An array of doubles
 * @param sizeOfArray The size of the array
 * @return int 
 */
int max (double arrayOfDoubles[], int sizeOfArray) {
    int i;
    int maximumValue = INT_MIN;

    for (i = 0; i < sizeOfArray; i++) {
        if (arrayOfDoubles[i] > maximumValue) {
            maximumValue = arrayOfDoubles[i];
        }
    }

    return maximumValue;
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
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @brief A function to copy two strings backwards.
 * 
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @brief A function to copy two strings backwards.
 * 
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
 * @param size The size of the array
 */
void copy(int toBeCopied[], int toCopyIn[], int size) {

    for (int i = 0; i <= size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}

/**
 * @brief A function to copy two strings backwards.
 * 
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @param toBeCopied The array to be copied from
 * @param toCopyIn The array to be copied in
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
 * @param toReverse An array to reverse
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
 * @param toReverse An array to reverse
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
 * @param toReverse An array to reverse
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
 * @param toReverse An array to reverse
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
 * @param idOfData The name of any variable
 */
template <typename T>
void id(T idOfData) {
    cout << &idOfData << endl;
}


/**
 * @brief A function to print the array's objects and their number in the array starting from zero
 * 
 * @param charArrayToEnumerate Array of characters that needs to be enumerated
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
 * @param charArrayToEnumerate Array of characters that needs to be enumerated
 * @param start The starting point
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
 * @param charArrayToEnumerate Array of an array of characters that needs to be enumerated
 */
void enumerate(const char *charArrayToEnumerate[], int size) {
    int i, j = 0;

    // int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from any specific int.
 * 
 * @param charArrayToEnumerate Array of an array of characters that needs to be enumerated
 * @param start The starting point
 */
void enumerate(const char *charArrayToEnumerate[], int size, int start) {
    int i, j = start;

    // int size = len(charArrayToEnumerate);
    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << charArrayToEnumerate[i] << endl;
    }
}


/**
 * @brief A function to print the array's objects and their number in the array starting from zero
 * 
 * @param arrayToEnumerate An array that needs to be enumerated whether it was an array of ints, floats, or doubles 
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
 * @param arrayToEnumerate An array that needs to be enumerated whether it was an array of ints, floats, or doubles
 * @param size The size of the array.
 * @param start The starting point
 */
template <typename T>
void enumerate(T arrayToEnumerate[], int size, int start) {
    int i, j = start;

    for(i = 0; i < size; i++, j++) {
        cout << j << ' ' << arrayToEnumerate[i] << endl;
    }

}

/**
 * @brief A function to sort an array.
 * 
 * @param arrayOfIntegers An array of integers.
 * @param sizeOfArray The array's size.
 */
void sort(int arrayOfIntegers[], int sizeOfArray) {
    int i, temp, j = 0;

    while (j != sizeOfArray)
    {

        for (i = 0; i < sizeOfArray; i++) {

            if (arrayOfIntegers[i] > arrayOfIntegers[i + 1])
            {
                temp = arrayOfIntegers[i];
                arrayOfIntegers[i] = arrayOfIntegers[i + 1];
                arrayOfIntegers[i + 1] = temp;
            }

        }

        j++;
    }
    
}

/**
 * @brief A function to sort an array.
 * 
 * @param arrayOfIntegers An array of floats.
 * @param sizeOfArray The array's size.
 */
void sort(float arrayOfFloats[], int sizeOfArray) {
    int i, temp, j = 0;

    while (j != sizeOfArray)
    {
        
        for (i = 0; i < sizeOfArray; i++) {

            if (arrayOfFloats[i] > arrayOfFloats[i + 1])
            {
                temp = arrayOfFloats[i];
                arrayOfFloats[i] = arrayOfFloats[i + 1];
                arrayOfFloats[i + 1] = temp;
            }

        }

        j++;
    }
    
}

/**
 * @brief A function to sort an array.
 * 
 * @param arrayOfIntegers An array of doubles.
 * @param sizeOfArray The array's size.
 */
void sort(double arrayOfDoubles[], int sizeOfArray) {
    int i, temp, j = 0;

    while (j != sizeOfArray)
    {
        
        for (i = 0; i < sizeOfArray; i++) {

            if (arrayOfDoubles[i] > arrayOfDoubles[i + 1])
            {
                temp = arrayOfDoubles[i];
                arrayOfDoubles[i] = arrayOfDoubles[i + 1];
                arrayOfDoubles[i + 1] = temp;
            }

        }

        j++;
    }
    
}

