#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <regex>
using namespace std;

// macro definations

// // Object-Like Macros
#define PI 3.14

// // Function-Like Macros
#define PRINT(x) cout << "Value is: " << (x) << endl

// // Muliline Macros
#define PRINT_RECTANGLE(width, height)  \
    for (int i = 0; i < height; i++)    \
    {                                   \
        for (int j = 0; j < width; j++) \
        {                               \
            cout << "*";                \
        }                               \
        cout << endl;                   \
    }

// // Chain Macros
#define SALARY 10000
#define PAYMENT cout << "The salary of employee is: " << SALARY << endl

// // Predefined Macros
// __FILE__
// __DATE__
// __TIME__
// __LINE__

// Find prime or not
bool primeFinder(int n);
// Identify character
void charFinder();
// Print a pattern like right angle triangle
void trianglePattern(int n);
// fibonacchi series
void fibonacci(int n);
// digit operation LC-1281
void digitOperation(int num);
// number of bits LC - 191
void numberOfBits(uint32_t num);
// decimal to binary positive
void decimalToBinaryPos(int num);
// decimal to binary negative - Don't work
void decimalToBinaryNeg(int num);
// binary to decimal
void binaryToDecimal(int num);
// reverse an integer
int reverseInteger(int num);
// bitwise compliment
void bitwiseCompliment(int num);
// power of two
bool powerOfTwo(int num);
// factorial
int factorial(int num);
// combination
int combination(int n, int r);
// print integer array
void printIntArr(int arr[], int size);
// print vector integer array
void printVectIntArr(vector<int> vect);
// reverse an Integer array
void reverseIntArr(int arr[], int size);
// reverse integer vector array
void reverseVectorIntArray(vector<int> &arr);
// array swap alternate
void swapAlternate(int arr[], int size);
// Find one unique element in array (2m + 1)
int findOneUnique(int arr[], int size);
// find duplicate in array of n numbers containing number from 1 to n-1. One number will repeat.
int findDuplicateEasy(int arr[], int size);
// unique number of occurrences
bool uniqueNumberOfOccur(vector<int> &arr);
// find intersecting of sorted array -> brute force
void findIntersectSorted(int arr1[], int arr2[], int size1, int size2);
// pair sum
vector<vector<int>> pairSum(int arr[], int size, int sum);
// triplet sum
void tripletSum(int arr[], int size, int sum);
// sort 0's and 1's
void sortZeroOne(int arr[], int size);
// binary search in integer array
int binarySearchInt(int arr[], int size, int key);
// binary search in vector integer array
int binarySearchVectorInt(vector<int> vect, int key);
// first occurrence in vector integer array
int firstOccurrenceVectorInt(vector<int> vect, int key);
// last occurrence in vector integer array
int lastOccurrenceVectorInt(vector<int> vect, int key);
// Find the first and last occurrence in sorted array
pair<int, int> firstLastOccurrence(vector<int> arr, int key);
// find the total number of occurrence in vector int array
int totalOccurrenceVectInt(vector<int> arr, int key);
// find the peak in mountain vector array
int peakInMountainVector(vector<int> vect);
// find the pivot element's index in rotated sorted vector array
int findPivotVector(vector<int> vect);
// find element in rotated sorted array
int findElementRotatedSorted(vector<int> vect, int key);
// find integer square root of input
long long int getIntegerSqrt(int n);
// get precise square root
double getPreciseRoot(int n, int precision, int tempSol);
// book allocation problem
bool isPossibleBookAllocate(vector<int> arr, int n, int m, int mid);
int allocateBooks(vector<int> arr, int n, int m);
// aggresive cows problem
bool isPossibleCowAllocate(vector<int> stalls, int k, int mid);
int aggresiveCows(vector<int> stalls, int k);
// Selection sort in Increasing order
void selectionSortVect(vector<int> &vect);
// bubble sort in increasing order
void bubbleSortVectInt(vector<int> &vect);
// insertion sort in increasing order
void insertionSortVectInt(vector<int> &vect);
// stl practice
void stlContainerPractice();
// stl algorithm practice -> #include<algorithm>
void stlAlgorithmPractice();
// Merge sorted array
vector<int> mergeSorted(vector<int> arr1, vector<int> arr2);
// move zeros
void moveZeros(vector<int> &v);
// rotate array
void rotateArray(vector<int> &arr, int k);
// check rotated sorted
bool checkRotatedSorted(vector<int> arr);
// find sum of two array - (simulate addition of two decimal numbers)
vector<int> sumTwoArray(vector<int> arr1, vector<int> arr2);
// string converter -> omit whitespace, special character, and convert to lowercase
string stringConverter(string ch);
// palindrome checker -> returns bool 1 if palindrome
bool palindromeChecker(string str);
//  Reverse word in string
void reverseWordsInString(vector<char> &s);
// maximum occurrance in string
char maximumOccurranceString(string s);
// replace character with a word or bunch of characters
void replaceChar(string &s, string rep);
// remove all the occurrence of a string
void removeSubStr(string &s, string part);
// check permutation in string -> s1's permutaion should be present in s2 as a substring
bool checkEqualAlphabetArray(int arr1[], int arr2[]);
bool checkPermutation(string s1, string s2);
// compress a string -> {a,a,a,b,c,c,c,c} => {a,3,b,c,4}
int compressString(vector<char> &ch);
// remove adjacent duplicate characters from string {abbaca} -> {ca}
string removeAdjDupChar(string s);
// print 2D vector integer array
void print2DVectorIntArray(vector<vector<int>> arr);
// Row wise sum of 2D array
void rowWiseSum(int arr[][3], int row, int col);
// wave pattern print in 2D integer vector array (not actual waves)
void wavePrint2DInt(vector<vector<int>> arr, int row, int col);
// print matrix in spiral form
void printSpiral(vector<vector<int>> arr);
// rotate matrix by 90 degrees -> inplace = transpose and then reverse
void rotateMatrix(vector<vector<int>> &arr);
// binary search in 2D integer vector
bool binarySearch2DVectorInt(vector<vector<int>> &arr, int target);
// binary search in 3D integer vector -> both row and column are sorted in ascending order
bool binarySearch2DVectorInt2(vector<vector<int>> &arr, int target);
// number of prime numbers before n -> (sieve of eratosthenes)
int numberOfPrimes(int n);
// sieve of eratosthenes
vector<int> sieveOfEratosthenes(long long int r);
// implement segmented sieve
vector<int> segmentedSieve(long long int l, long long int r);
// lowest and higthest prime factor of numbers
pair<int, int> lowAndHighPrimeFactors(int number);
// prime factorization of a number
vector<int> primeFactor(int number);
// GCD in iterative approach
int iterativeGCD(int a, int b);
// inline function
inline int getMax(int a, int b);
// power function with recursion
long long int powerFunction(int n, int m);
// fibonacci series with recursion
int fibonacciRecursion(int n, int big = 1, int small = 0);
// climbing stairs - leetcode -> distinct ways to climb stairs
int climbStairs(int n);
// sum of array using recursion
int sumArrayRecursion(int arr[], int size);
// linear search using recursion
int linerSearchRecursion(int arr[], int size, int key, int index = 0);

// main function
int main()
{
    int arr[] = {198, 12, 33, 22, 65, 34, 98};
    int index = linerSearchRecursion(arr, 7, 198);
    cout << index << endl;
}

// Find Prime or not
bool primeFinder(int n)
{
    int i = 2, sqn;
    bool flag = true;
    sqn = sqrt(n);

    if (n <= 1)
    {
        flag = false;
        return flag;
    }
    else
    {
        while (i <= sqn)
        {
            if (n % i == 0)
            {
                flag = false;
                return flag;
            }
            i++;
        }
        return flag;
    }
}
// Identify character
void charFinder()
{
    char ch;
    cout << "Enter a Character: " << endl;
    ch = cin.get();

    if (ch >= 65 && ch <= 90)
    {
        cout << "The character is Upper Case." << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "The character is Lower Case." << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "The character is a number." << endl;
    }
    else
    {
        cout << "The character is a special character." << endl;
    }
}
// Print a pattern like right angle triangle
void trianglePattern(int n)
{
    int i = 1, j = 1;

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// fibonacchi series
void fibonacci(int n)
{
    int temp = 0;
    // initial values of fibonacci
    cout << "0 1 ";
    for (int a = 0, b = 1, i = 0; i < (n - 2); i++)
    {
        // print the rest of the values
        cout << (temp = a + b) << " ";
        // conditions of fibonacci
        a = b;
        b = temp;
    }
}
// digit operation LC-1281
void digitOperation(int num)
{
    int product = 1, sum = 0, temp = num, result = 0;

    while (temp > 0)
    {
        product *= temp % 10;
        sum += temp % 10;
        temp /= 10;
    }
    result = product - sum;
    cout << product << " " << sum << " " << result << endl;
}
// number of bits LC - 191
void numberOfBits(uint32_t num)
{
    int ones = 0;

    while (num > 0)
    {
        if (num & 1)
        {
            ones++;
        }
        num = num >> 1;
    }

    cout << ones << endl;
}
// decimal to binary positive
// reverse: answer = (digit * 10^i) + answer
// not reverse: answer = (answer * 10) + digit
void decimalToBinaryPos(int num)
{
    int answer = 0, digit;

    for (int i = 0; num != 0; i++)
    {
        digit = num & 1;
        num = num >> 1;
        answer += (digit * pow(10, i));
    }
    cout << answer << endl;
}
// decimal to binary negative - Don't work
void decimalToBinaryNeg(int num)
{
    int number, answer = 0, digit;
    number = abs(num);
    number = ~number;
    number = number + 1;
    cout << number << endl;

    for (int i = 0; number != 0; i++)
    {
        digit = number & 1;
        number = number >> 1;
        answer += (digit * pow(10, i));
        cout << answer << endl;
    }
    cout << answer << endl;
}
// binary to decimal
void binaryToDecimal(int num)
{
    int i = 0, temp = num, result = 0;

    for (int i = 0; temp != 0; i++)
    {
        result += (temp % 10) * pow(2, i);
        temp /= 10;
    }

    cout << result << endl;
}
// reverse an integer
int reverseInteger(int num)
{
    int result, digit;

    for (int i = 0; num != 0; i++)
    {
        digit = num % 10;
        num /= 10;
        if (result > (INT_MAX / 10) || result < (INT_MIN / 10))
        {
            result = 0;
            break;
        }
        result = (result * 10) + digit;
    }
    return result;
}
// bitwise compliment
void bitwiseCompliment(int num)
{
    int notNum = ~num, temp = num, musk = 0, result;

    if (num == 0)
    {
        musk = 1;
    }
    for (int i = 0; temp != 0; i++)
    {
        temp = temp >> 1;
        if (temp != 0)
        {
            musk = musk << 1 | 1;
        }
    }

    result = notNum & musk;
    cout << result << endl;
}
// power of two - number of set bit is one
bool powerOfTwo(int num)
{
    if (num == 1)
    {
        return true;
    }
    int root;
    root = ceil(sqrt(num));
    if (pow(2, root) == num)
    {
        return true;
    }
    return false;
}
// factorial
int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}
// combination
int combination(int n, int r)
{
    if (r > n)
    {
        return -1;
    }
    return (factorial(n)) / ((factorial(r)) * (factorial(n - r)));
}
// print integer array
void printIntArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// print vector integer array
void printVectIntArr(vector<int> vect)
{
    int size = vect.size();
    for (int i = 0; i < size; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}
// reverse an Integer array
void reverseIntArr(int arr[], int size)
{
    int n = size - 1;
    for (int i = 0; i < (size / 2); i++)
    {
        swap(arr[i], arr[n - i]);
        // Method for swapping without extra variable
        // ---> a = a-b
        // ---> b = a+b
        // ---> a = b-a
        // arr[i] = arr[i] - arr[n - i];
        // arr[n - i] = arr[i] + arr[n - i];
        // arr[i] = arr[n - i] - arr[i];
    }
}
// reverse integer vector array
void reverseVectorIntArray(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i < ((n + 1) / 2); i++)
    {
        swap(arr[i], arr[n - i]);
    }
}
// array swap alternate
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
// Find one unique element in array (2m + 1)
int findOneUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
// find duplicate in array of n numbers containing number from 1 to n-1. One number will repeat.
int findDuplicateEasy(int arr[], int size)
{
    int ans = 0, sum = 0;
    sum = ((size - 1) * (size)) / 2;
    for (int i = 0; i < size; i++)
    {
        ans += arr[i];
    }
    ans = ans - sum;
    return ans;
}
// unique number of occurrences
bool uniqueNumberOfOccur(vector<int> &arr)
{
    unordered_map<int, int> mp;
    set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto val : mp)
    {
        st.insert(val.second);
    }
    if (st.size() != mp.size())
        return false;
    return true;
}
// find intersecting of sorted array -> brute force, two pointer approach
void findIntersectSorted(int arr1[], int arr2[], int size1, int size2)
{
    int answerArray[100000] = {0};
    int matched = 0, element = 0;

    // unoptimized solution
    // for(int i = 0; i < size1; i++)
    // {
    //     element = arr1[i];
    //     if(element < arr2[0])
    //     {
    //         continue;
    //     }
    //     for(int j = 0; j < size2; j++)
    //     {
    //         if(element < arr2[j]) break;
    //         if(element == arr2[j])
    //         {
    //             answerArray[matched] = arr2[j];
    //             arr2[j] = INT_MIN;
    //             matched++;
    //             break;
    //         }
    //     }
    // }

    // optimized solution
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            answerArray[matched] = arr2[j];
            i++;
            j++;
            matched++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
    }

    // if no intersection was found
    if (matched == 0)
    {
        answerArray[matched] = -1;
        matched++;
    }
    printIntArr(answerArray, matched);
}
// pair sum
vector<vector<int>> pairSum(int arr[], int size, int sum)
{
    vector<vector<int>> ans;
    vector<int> temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;

    // Solution of the leetcode problem: Two Sum
    // vector<int> twoSum(vector<int> &nums, int target)
    // {
    //     vector<int> temp = nums;
    //     sort(temp.begin(), temp.end());
    //     vector<int> ans;

    //     int x, y;
    //     for (int i = 0; i < temp.size(); i++)
    //     {
    //         y = target - temp[i];
    //         if(binary_search(temp.begin() + i, temp.end(), y))
    //         {
    //             x = temp[i];
    //             y = y;
    //             break;
    //         }
    //     }
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         if(x = nums[i])
    //         {
    //             ans.push_back(i);
    //         }
    //         else if(y = temp[i])
    //         {
    //             ans.push_back(i);
    //         }
    //     }
    //     return ans;
    // }
}
// triplet sum
void tripletSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}
// sort 0's and 1's
void sortZeroOne(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i < j)
    {
        if (arr[i] == 0 && arr[j] == 1)
        {
            i++;
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            i++;
        }
        else if (arr[i] == 1 && arr[j] == 1)
        {
            j++;
        }
    }
    printIntArr(arr, size);
}
// binary search in integer array
int binarySearchInt(int arr[], int size, int key)
{
    int start = 0, end = (size - 1), mid, index = -1;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            // cout << "inside arr[mid] < key" << endl;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            // cout << "inside arr[mid] > key" << endl;
            end = mid - 1;
        }
    }

    return index;
}
// binary search in vector integer array
int binarySearchVectorInt(vector<int> vect, int key)
{
    int size = (vect.size());
    int start = 0, end = (size - 1);
    int mid, index = -1;

    while (start <= end)
    {
        mid = start + ((end - start) / 2);

        // element found
        if (vect[mid] == key)
        {
            index = mid;
            break;
        }
        else if (vect[mid] < key)
        {
            start = mid + 1;
        }
        else if (vect[mid] > key)
        {
            end = mid - 1;
        }
    }
    return index;
}
// first occurrence in vector integer array
int firstOccurrenceVectorInt(vector<int> vect, int key)
{
    int size = (vect.size());
    int start = 0, end = (size - 1);
    int mid, index = -1;

    while (start <= end)
    {
        mid = start + ((end - start) / 2);

        // element found
        if (vect[mid] == key)
        {
            index = mid;
            end = mid - 1;
        }
        else if (vect[mid] < key)
        {
            start = mid + 1;
        }
        else if (vect[mid] > key)
        {
            end = mid - 1;
        }
    }
    return index;
}
// last occurrence in vector integer array
int lastOccurrenceVectorInt(vector<int> vect, int key)
{
    int size = (vect.size());
    int start = 0, end = (size - 1);
    int mid, index = -1;

    while (start <= end)
    {
        mid = start + ((end - start) / 2);

        // element found
        if (vect[mid] == key)
        {
            index = mid;
            start = mid + 1;
        }
        else if (vect[mid] < key)
        {
            start = mid + 1;
        }
        else if (vect[mid] > key)
        {
            end = mid - 1;
        }
    }
    return index;
}
// Find the first and last occurrence in sorted array
pair<int, int> firstLastOccurrence(vector<int> vect, int key)
{
    int first = -1, last = -1;
    pair<int, int> pair = make_pair(firstOccurrenceVectorInt(vect, key), lastOccurrenceVectorInt(vect, key));
    return pair;
}
// find the total number of occurrence in vector int array
int totalOccurrenceVectInt(vector<int> arr, int key)
{
    int firstOccurrence = firstOccurrenceVectorInt(arr, key);
    int lastOccurrence = lastOccurrenceVectorInt(arr, key);
    if (firstOccurrence == -1 && lastOccurrence == -1)
    {
        return 0;
    }
    return ((lastOccurrence - firstOccurrence) + 1);
}
// find the peak in mountain vector array
int peakInMountainVector(vector<int> vect)
{
    int size = vect.size();
    int start = 0, end = (size - 1), mid;
    int index = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (vect[mid] > vect[mid + 1] && vect[mid] > vect[mid - 1])
        {
            index = mid;
            break;
        }
        else if (vect[mid] < vect[mid + 1])
        {
            start = mid + 1;
        }
        else if (vect[mid] > vect[mid + 1])
        {
            end = mid - 1;
        }
    }
    return index;
}
// find the pivot element's index in rotated sorted vector array
int findPivotVector(vector<int> vect)
{
    int size = vect.size() - 1;
    int start = 0, end = size;
    int mid;

    while (start < end)
    {
        mid = start + ((end - start) / 2);
        if (vect[mid] >= vect[0])
        {
            start = mid + 1;
        }
        else if (vect[mid] <= vect[size])
        {
            end = mid;
        }
    }
    return start;
}
// find element in rotated sorted array
int findElementRotatedSorted(vector<int> vect, int key)
{
    int pivot = findPivotVector(vect);
    int start = 0, end = vect.size() - 1, mid;
    int index = -1;
    // check the range of key
    if (key >= vect[0] && key <= vect[pivot - 1])
    {
        end = pivot - 1;
    }
    else
    {
        start = pivot;
    }
    // binary search
    while (start <= end)
    {
        mid = (start + ((end - start) / 2));

        if (vect[mid] == key)
        {
            index = mid;
            break;
        }
        else if (vect[mid] < key)
        {
            start = mid + 1;
        }
        else if (vect[mid] > key)
        {
            end = mid - 1;
        }
    }
    return index;
}
// find integer square root of input
long long int getIntegerSqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid, answer = -1, sqare;

    while (start <= end)
    {
        mid = (start + ((end - start) / 2));
        sqare = mid * mid;
        if (sqare == n)
        {
            answer = mid;
            break;
        }
        else if (sqare < n)
        {
            start = mid + 1;
            answer = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return answer;
}
// get precise square root
double getPreciseRoot(int n, int precision, int tempSol)
{
    double factor = 1;
    double answer = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = tempSol; j * j < n; j += factor)
        {
            answer = j;
        }
    }
    return answer;
}
// book allocation problem
bool isPossibleBookAllocate(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1; // calculation will start with one student and count will be increased accordingly
    int pageSum = 0;      // first the total page count will be 0, pages will be added for a student. if student count is increased then the pagesum will be reset to 0 and the counting will be reset.
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid) // it is checked that the studentCount is within the number of student and if the first book's page is less than the mid value
            {
                return false;
            }
            pageSum = 0; // pageSum is reseted after adding studentCount.
            pageSum += arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m)
{
    int start = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum, ans = -1, mid;

    while (start <= end)
    {
        mid = (start + ((end - start) / 2));
        if (isPossibleBookAllocate(arr, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
// aggresive cows problem
bool isPossibleCowAllocate(vector<int> stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPoss = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPoss >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPoss = stalls[i];
        }
    }
    return false;
}
int aggresiveCows(vector<int> stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxx = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxx = max(maxx, stalls[i]);
    }
    int end = maxx;
    int ans = -1, mid;

    while (start <= end)
    {
        mid = (start + ((end - start) / 2));
        if (isPossibleCowAllocate(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
// Selection sort in Increasing order
void selectionSortVect(vector<int> &vect)
{
    int minIndex;
    int size = vect.size();
    for (int i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (vect[j] < vect[minIndex])
            {
                minIndex = j;
            }
        }
        swap(vect[i], vect[minIndex]);
    }
}
// bubble sort in increasing order
void bubbleSortVectInt(vector<int> &vect)
{
    int size = vect.size();

    for (int i = (size - 1); i > 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j < i; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
// insertion sort in increasing order
void insertionSortVectInt(vector<int> &vect)
{
    int size = vect.size();
    int element;

    for (int i = 1; i < size; i++)
    {
        element = vect[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (element < vect[j])
            {
                // the element is smaller -> so right shift the previous number and put the element in the correct position
                vect[j + 1] = vect[j];
                vect[j] = element;
            }
            else
            {
                break;
            }
        }
    }
}
// stl container practice
void stlContainerPractice()
{
    // array -> #include<array>
    cout << "<-- STL Array -->" << endl
         << endl;

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a.at(i) << endl;
    }
    cout << "If a is empty or not: " << a.empty() << endl;
    cout << "First element of a: " << a.front() << endl;
    cout << "Last element of a: " << a.back() << endl;

    cout << endl
         << "<-- STL Array -->" << endl;
    // array

    cout << endl;

    // vector -> #include<vector>
    cout << "<-- STL Vector -->" << endl
         << endl;

    // vector initialization
    vector<int> v;

    // initialization with specific size and initial elements
    vector<int> vv(10, 1);

    // printing capacity and size of vector after push_back() and pop_back()
    cout << "Capacity & Size of the vector: " << v.capacity() << ", " << v.size() << endl;
    v.push_back(1);
    cout << "Capacity & Size of the vector: " << v.capacity() << ", " << v.size() << endl;
    v.push_back(2);
    cout << "Capacity & Size of the vector: " << v.capacity() << ", " << v.size() << endl;
    v.push_back(3);
    cout << "Capacity & Size of the vector: " << v.capacity() << ", " << v.size() << endl;
    v.pop_back();
    cout << "Capacity & Size of the vector: " << v.capacity() << ", " << v.size() << endl;

    // printing vector with for loop -> new method
    cout << "Printing vector: " << endl;
    for (int i : vv)
    {
        cout << i << " ";
    }
    cout << endl;

    // iterator of vector => v.begin(), v.end() -> used in various cases

    // copy a vector in another vector
    vector<int> copy(v);
    cout << "Printing the copied vector" << endl;
    for (int i : copy)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << endl
         << "<-- STL Vector -->" << endl;
    // vector

    cout << endl;

    // Deque -> #include<deque> => double ended queue
    cout << "<-- STL Deque -->" << endl
         << endl;

    deque<int> d;
    d.push_back(2);  // push value from the back
    d.push_front(1); // push value to the front
    d.push_back(2);
    d.push_front(1);

    cout << "Printing the Deque: " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();
    cout << "Printing Deque after pop: " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "If deque is empty or not: " << d.empty() << endl;
    cout << "Front of deque: " << d.front() << endl;
    cout << "End of deque: " << d.back() << endl;

    // iterator of deque => d.begin(), d.end() -> used in various cases
    // direct access possible using [] or at() like vector and array

    // erase element from the deque
    d.erase(d.begin(), d.begin() + 1);
    cout << "Printing Deque after erase: " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << endl
         << "<-- STL Deque -->" << endl;
    // Deque

    cout << endl;

    // list -> $include<list> => implemented using doubly linkedlist
    cout << "<-- STL List -->" << endl
         << endl;

    list<int> l;
    // same as vector and array
    // random access is NOT possible with [] or at()
    l.push_front(1);
    l.push_back(2);
    l.erase(l.begin()); // to delte the first or last element. not like vector or deque

    cout << "Printing List after erase: " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << endl
         << "<-- STL List -->" << endl;
    // list

    cout << endl;

    // stack -> #include<stack>
    cout << "<-- STL Stack -->" << endl
         << endl;

    stack<string> s;

    // pushing element onto stack
    s.push("Jamal");
    s.push("Ibne");
    s.push("Itminan");
    s.push("Chowdhury");

    // removing element from stack
    s.pop();

    // printing the top element from stack
    cout << "The top of the stack: " << s.top() << endl;

    // printing all element of the stack
    stack<string> temp(s);
    cout << "All the elements of the stack: " << endl;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    cout << endl
         << "<-- STL Stack -->" << endl;
    // stack

    cout << endl;

    // Queue -> #include<queue> => first come first out
    cout << "<-- STL Queue -->" << endl
         << endl;

    queue<string> q;

    // pushing element onto queue
    q.push("Chowdhury");
    q.push("Itminan");
    q.push("Ibne");
    q.push("Jamal");

    // removing element from queue
    q.pop();

    // printing the front element from queue
    cout << "The top of the queue: " << q.front() << endl;

    // printing all element of the queue
    queue<string> qtemp(q);
    cout << "All the elements of the queue: " << endl;
    while (!qtemp.empty())
    {
        cout << qtemp.front() << " ";
        qtemp.pop();
    }
    cout << endl;

    cout << endl
         << "<-- STL Queue -->" << endl;
    // Queue

    cout << endl;

    // priority queue -> By default same as max heap
    cout << "<-- STL Priority Queue -->" << endl
         << endl;

    // max heap
    priority_queue<int> max;
    // min heap
    priority_queue<int, vector<int>, greater<int>> min;

    // insert data max heap
    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    // insert data min heap
    min.push(1);
    min.push(3);
    min.push(2);
    min.push(0);

    // printing all element of the priority queue - max heap
    priority_queue<int> maxTemp(max);
    cout << "All the elements of the Priority Queue - max: ";
    while (!maxTemp.empty())
    {
        cout << maxTemp.top() << " ";
        maxTemp.pop();
    }
    cout << endl;

    // printing all element of the priority queue - min heap
    priority_queue<int, vector<int>, greater<int>> minTemp(min);
    cout << "All the elements of the Priority Queue - min: ";
    while (!minTemp.empty())
    {
        cout << minTemp.top() << " ";
        minTemp.pop();
    }
    cout << endl;

    cout << endl
         << "<-- STL Priority Queue -->" << endl;
    // priority queue

    cout << endl;

    // set -> #include<set>
    cout << "<-- STL Set -->" << endl
         << endl;

    set<int> sett;
    // insert value
    sett.insert(2);
    sett.insert(2);
    sett.insert(3);
    sett.insert(1);
    sett.insert(0);

    // printing set
    cout << "All elements of the set: ";
    for (int i : sett)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase element

    // first method
    sett.erase(++sett.begin());
    // second method
    set<int>::iterator it = sett.begin();
    it++;
    it++;
    sett.erase(it);

    // printing set
    cout << "All elements of the set after erase: ";
    for (int i : sett)
    {
        cout << i << " ";
    }
    cout << endl;

    // check element
    cout << "Check if 2 is in the set: " << sett.count(2) << endl;
    cout << "Check if 5 is in the set: " << sett.count(5) << endl;

    // use of find() to get iterator of a element => documentation for better understanding
    set<int>::iterator itr = sett.find(2);
    cout << "Value found at itr is: " << *itr << endl;

    cout << endl
         << "<-- STL Set -->" << endl;
    // set

    cout << endl;

    // map -> #include<map> => Data stored in key value pair
    cout << "<-- STL Map -->" << endl
         << endl;

    map<long long int, string> mp;

    // insert data => data will be stored in sorted order
    mp[2154901105] = "Itminan";
    mp[2154901089] = "Elaf";
    mp[2154901109] = "Samia";
    mp.insert({2154901115, "Jamil"});

    // printing value of map
    cout << "The values stored in map: " << endl;
    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << endl;

    // finding an element
    cout << "Finding element in map (2154901105): " << mp.count(2154901105) << endl;

    // erasing element in map
    mp.erase(2154901105);
    cout << "The values stored in map after erase: " << endl;
    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << endl;

    // find() in map
    auto itMp = mp.find(2154901089);
    cout << "Printing map with iterator: " << endl;
    for (auto i = itMp; i != mp.end(); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }
    cout << endl;

    cout << endl
         << "<-- STL Map -->" << endl;
    // map
}
// stl algorithm practice -> #include<algorithm>
void stlAlgorithmPractice()
{
    vector<int> v = {10, 6, 4, 12, 1, 8};

    // sort -> intro sort(heap, insertion, quick)
    cout << "<-- Sort -->" << endl
         << endl;

    cout << "Before sort: ";
    printVectIntArr(v);
    sort(v.begin(), v.end());
    cout << "After sort: ";
    printVectIntArr(v);

    cout << endl
         << "<-- Sort -->" << endl;
    // sort

    cout << endl;

    // binary search
    cout << "<-- Binary Search -->" << endl
         << endl;

    cout << "Searching 5 in vector: " << binary_search(v.begin(), v.end(), 5) << endl;

    // upper and lower bound => returns iterator
    // finding index (lower bound)
    int lowerBound = lower_bound(v.begin(), v.end(), 6) - v.begin();
    cout << "Lower bound of 6 in vector: " << lowerBound << endl;

    // finding reverse index (upper bound)
    int upperBound = upper_bound(v.begin(), v.end(), 6) - v.begin();
    cout << "Upper bound of 6 in vector: " << upperBound << endl;

    cout << endl
         << "<-- Binary Search -->" << endl;
    // binary search

    cout << endl;

    // various utility
    cout << "<-- Utility Functions -->" << endl
         << endl;

    int a = 4, b = 3;
    // min max
    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    // swap
    cout << "Before swap -> " << "a=" << a << " b=" << b << endl;
    swap(a, b);
    cout << "After swap -> " << "a=" << a << " b=" << b << endl;

    // reverse
    string str = "Hello";
    cout << "Before reverse: " << str << endl;
    reverse(str.begin(), str.end());
    cout << "After reverse: " << str << endl;

    // rotate
    cout << "Before Rotate: ";
    printVectIntArr(v);
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate: ";
    printVectIntArr(v);

    cout << endl
         << "<-- Utility Functions -->" << endl;
    // various utility
}
// Merge sorted array
vector<int> mergeSorted(vector<int> arr1, vector<int> arr2)
{
    int s = 0, ss = 0;
    int size1 = arr1.size() - 1;
    int size2 = arr2.size() - 1;
    vector<int> ansArr;

    while (s <= size1 || ss <= size2)
    {
        if (arr1[s] < arr2[ss])
        {
            ansArr.push_back(arr1[s]);
            s++;
        }
        else
        {
            ansArr.push_back(arr2[ss]);
            ss++;
        }
    }
    return ansArr;
}
// move zeros
void moveZeros(vector<int> &v)
{
    int i = 0;
    for (int j = i; j < v.size(); j++)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[i++]);
        }
    }
}
// rotate array
void rotateArray(vector<int> &arr, int k)
{
    int size = arr.size();
    vector<int> temp(size, 0);
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }
    arr = temp;
}
// check rotated sorted
bool checkRotatedSorted(vector<int> arr)
{
    int count = 0;
    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
            count++;
    }
    if (arr[size - 1] > arr[0])
        count++;

    return count <= 1;
}
// find sum of two array - (simulate addition of two decimal numbers)
vector<int> sumTwoArray(vector<int> arr1, vector<int> arr2)
{
    vector<int> ansArray;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0, sum = 0;

    while (i >= 0 && j >= 0)
    {
        sum = arr1[i--] + arr2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ansArray.push_back(sum);
    }
    // 1st case -> arr1 is bigger
    while (i >= 0)
    {
        sum = arr1[i--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ansArray.push_back(sum);
    }
    // 2nd case -> arr2 is bigger
    while (j >= 0)
    {
        sum = arr2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ansArray.push_back(sum);
    }
    // carry remains after calculation
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ansArray.push_back(sum);
    }

    reverse(ansArray.begin(), ansArray.end());
    return ansArray;
}
// string converter -> omit whitespace, special character, and convert to lowercase
string stringConverter(string ch)
{
    int size = ch.size();
    int count = 0;
    int value;
    string result;

    for (int i = 0; i < size; i++)
    {
        value = ch.at(i);
        if ((value >= 32 && value <= 47) || (value >= 58 && value <= 64) || (value >= 91 && value <= 96) || (value >= 123 && value <= 126))
        {
            continue;
        }
        result.push_back(tolower(ch.at(i)));
    }

    return ch;
}
// palindrome checker -> returns bool 1 if palindrome
bool palindromeChecker(string str)
{
    str = stringConverter(str);
    bool answer = 1;
    int start = 0;
    int end = str.size() - 1;

    while (start <= end)
    {
        if (str.at(start++) != str.at(end--))
        {
            answer = 0;
            break;
        }
    }
    return answer;
}
//  Reverse word in string -> hello world = world hello
void reverseWordsInString(vector<char> &s)
{
    // Taking input in main
    // string ch;
    // getline(cin, ch);
    // vector<char> c(ch.begin(), ch.end());
    // reverseWordsInString(c);
    // Taking input in main
    int start = 0;
    int end = s.size() - 1;

    // first reverse the full char array
    while (start <= end)
    {
        swap(s[start++], s[end--]);
    }
    // now change the words back to normal (reverse all the words in place)
    int st = 0, e = 0, en = 0;
    while (en != s.size() + 1)
    {
        // cout << "Inside do while " << en << endl;
        if (s[en] == ' ')
        {
            e = en;
            e--;
            while (st <= e)
            {
                // cout << "Inside while" << endl;
                swap(s[st++], s[e--]);
            }
            st = en + 1;
        }
        else if (en == s.size())
        {
            e = en;
            e--;
            while (st <= e)
            {
                // cout << "Inside while else" << endl;
                swap(s[st++], s[e--]);
            }
            break;
        }
        en++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << "";
    }

    cout << endl;
}
// maximum occurrance in string
char maximumOccurranceString(string s)
{
    int alphabet[26] = {0};
    char ch;
    int a;

    // store all occurrance
    for (int i = 0; i < s.size(); i++)
    {
        ch = s.at(i);
        a = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            a = (ch - 'a');
            alphabet[a]++;
        }
        else
        {
            a = (ch - 'A');
            alphabet[a]++;
        }
    }
    // get max occurrence
    int maxx = alphabet[0];
    int alpha = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > maxx)
        {
            maxx = alphabet[i];
            alpha = i;
        }
    }

    return 'a' + alpha;
}
// replace character with a word or bunch of characters
void replaceChar(string &s, string rep)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, rep);
        }
    }
}
// remove all the occurrence of a string
void removeSubStr(string &s, string part)
{
    // read doc of string::find from GeeksForGeeks
    int partSize = part.size();
    size_t found = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int d = s.find(part, found++);
        if (d != string::npos)
            s.replace(d, partSize, "");
    }
}
// check permutation in string -> s1's permutaion should be present in s2 as a substring
bool checkEqualAlphabetArray(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}
bool checkPermutation(string s1, string s2)
{
    // character count array
    int countS1[26] = {0};
    int index = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        index = s1[i] - 'a';
        countS1[index]++;
    }

    // traverse s2 string in window of s1's length and compare with count array
    int countS2[26] = {0};
    int window = s1.size();

    int i = 0;
    // run for the first window
    while (i < window && i < s2.size())
    {
        index = s2[i] - 'a';
        countS2[index]++;
        i++;
    }

    if (checkEqualAlphabetArray(countS1, countS2))
        return true;

    // run for the later windows
    while (i < s2.size())
    {
        char newChar = s2[i];
        index = newChar - 'a';
        countS2[index]++;

        // remove the previous window value
        char oldChar = s2[i - window];
        index = oldChar - 'a';
        countS2[index]--;

        // increment i
        i++;

        // compare the both count arrays
        if (checkEqualAlphabetArray(countS1, countS2))
            return true;
    }

    return false;
}
// compress a string -> {a,a,a,b,c,c,c,c} => {a,3,b,c,4}
int compressString(vector<char> &ch)
{
    int i = 0;
    int ansIndex = 0;
    int size = ch.size();

    while (i < size)
    {
        int j = i + 1;
        while (j < size && ch[i] == ch[j])
        {
            j++;
        }
        // store the character in array and then store the count
        ch[ansIndex++] = ch[i];
        int count = j - i;
        // if character count is greater than 1 then input the count
        if (count > 1)
        {
            string countString = to_string(count);
            // this loop is needed because if the count is 2 digit then it can be properly stored
            for (char c : countString)
            {
                ch[ansIndex++] = c;
            }
        }
        // go to the next character
        i = j;
    }
    // extra - > erase the further string after compression
    ch.erase(ch.begin() + ansIndex, ch.end());
    // ansIndex is the final size of the char array ofter compression
    return ansIndex;
}
// remove adjacent duplicate characters from string {abbaca} -> {ca}
string removeAdjDupChar(string s)
{
    // Use stack data structure
    stack<char> charStk;

    // Loop through the full string
    for (int i = 0; i < s.length(); i++)
    {
        // Check if the stack is empty or not. if it is empty then push the character to the stack with out checking the top (obviously).
        if (!charStk.empty())
        {
            // If the character is already at the top of the stack then don't push the character to the stack. also pop the top character of the stack.
            if (s[i] != charStk.top())
            {
                charStk.push(s[i]);
            }
            else
            {
                charStk.pop();
            }
        }
        else
        {
            charStk.push(s[i]);
        }
    }

    // Make a character array to store the value from stack
    char temp[1000000];
    int ansCount = charStk.size();

    // Copy the elements of stack to charcter array
    for (int i = ansCount - 1; i >= 0; i--)
    {
        temp[i] = charStk.top();
        charStk.pop();
    }

    // Copy the character array to a string
    string ansString(temp);

    // Done for the compiler of leetcode -> otherwise unnecessary
    ansString.resize(ansCount);

    // Return the ansewer string
    return ansString;
}
// print 2D vector integer array
void print2DVectorIntArray(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// Row wise sum of 2D array
void rowWiseSum(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << "th row: " << sum << endl;
    }
}
// wave pattern print in 2D integer vector array (not actual waves)
void wavePrint2DInt(vector<vector<int>> arr, int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}
// print matrix in spiral form
void printSpiral(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row * col;

    // index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // print starting row -> starting col to ending col
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // print ending column -> starting row to ending row
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print ending row -> ending col to starting col
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // print starting column -> ending row to starting row
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
// rotate matrix by 90 degrees -> inplace = transpose and then reverse
void rotateMatrix(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    // transpose
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse
    for (int i = 0; i < row; i++)
    {
        reverseVectorIntArray(arr[i]);
    }
}
// binary search in 2D integer vector
bool binarySearch2DVectorInt(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = (row * col) - 1;
    int mid;

    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid / col][mid % col] == target)
        {
            return true;
        }
        else if (arr[mid / col][mid % col] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
// binary search in 3D integer vector -> both row and column are sorted in ascending order
bool binarySearch2DVectorInt2(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;
    int element;

    while (rowIndex < row && colIndex >= 0)
    {
        element = arr[rowIndex][colIndex];

        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return false;
}
// number of prime numbers before n -> (sieve of eratosthenes)
int numberOfPrimes(int n)
{
    int count = 0;

    // extra: store the prime numbers in a vector
    // vector<int> primeNumbers;

    // implement sieve of eratosthenes
    vector<bool> primeArray(n + 1, true);
    primeArray[0] = primeArray[1] = false;

    // loop through all the numbers from 2 to n
    for (int i = 2; i < n; i++)
    {
        if (primeArray[i])
        {
            count++;
            // primeNumbers.push_back(i);
            // for each prime number turn all the numbers that is the multiple of the current prime number to non prime
            for (int j = i * 2; j < n; j = j + i)
            {
                primeArray[j] = false;
            }
        }
    }

    // extra: see all the prime numbers untill n
    // printVectIntArr(primeNumbers);

    return count;
}
// sieve of eratosthenes
vector<int> sieveOfEratosthenes(long long int r)
{
    // store the primes
    vector<int> primes;
    // vector for the numbers
    vector<bool> numbers(r + 1, true);
    // assign false to number 0 and 1
    numbers[0] = numbers[1] = false;
    // main logic of sieve of eratosthenes
    for (long long int i = 2; i <= r; i++)
    {
        if (numbers[i])
        {
            primes.push_back(i);
            for (long long int j = i * 2; j <= r; j += i)
            {
                numbers[j] = false;
            }
        }
    }
    return primes;
}
// implement segmented sieve
vector<int> segmentedSieve(long long int l, long long int r)
{
    vector<int> primes;
    // step 1: generate primes until the square root of the upper limit
    vector<int> primesArray = sieveOfEratosthenes(sqrt(r));
    // step 2: create a dummy array of size (r - l + 1) and initialize it with true
    vector<bool> dummyArray((r - l + 1), true);
    // edge case where the lower limit is 0 or 1
    if (l == 1)
        dummyArray[0] = false;
    if (l == 0)
        dummyArray[0] = dummyArray[1] = false;
    // step 3: mark all multiple of the primes array in the dummy array as false
    for (auto pr : primesArray)
    {
        // get the first value within the range between l and r for the prime number
        long long int firstMultiple = ((l / pr) * pr) < l ? (((l / pr) * pr) + pr) : ((l / pr) * pr);
        long long square = pr * pr;
        for (long long int j = max(firstMultiple, square); j <= r; j += pr)
        {
            dummyArray[j - l] = false;
        }
        // important checking to see if the first multiple becomes equal to the ith prime number. If it becomes equal then the loop above will mistakenly assign the prime number as not prime. Thats why the checking and correction below is done -> the function will work okay without this checking if j = max(firstMultiple, square) is declared. Otherwise the checking is required
        // if(firstMultiple == pr)
        // {
        //     dummyArray[firstMultiple - l] = true;
        // }
    }
    // step 4: get all the primes from the dummy array
    for (long long int i = l; i <= r; i++)
    {
        if (dummyArray[i - l])
        {
            primes.push_back(i);
            // extra
            cout << i << " ";
        }
    }
    return primes;
}
// lowest and higthest prime factor of numbers
pair<int, int> lowAndHighPrimeFactors(int number)
{
    vector<int> highestPrimeFactor(number + 1, 0), lowestPrimeFactor(number + 1, 0);

    vector<int> sieve(number + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= number; i++)
    {
        if (sieve[i])
        {
            highestPrimeFactor[i] = i;
            lowestPrimeFactor[i] = 1;
            for (int j = i * 2; j <= number; j += i)
            {
                sieve[j] = false;
                highestPrimeFactor[j] = i;
                if (lowestPrimeFactor[j] == 0)
                {
                    lowestPrimeFactor[j] = i;
                }
            }
        }
    }

    pair<int, int> factors = make_pair(lowestPrimeFactor[number], highestPrimeFactor[number]);

    return factors;
}
// prime factorization of a number
vector<int> primeFactor(int number)
{
    // vector for storing the prime factors of the number
    vector<int> factors = {1};
    // map to store the the factors with their power
    map<int, int> mapFactor;

    // vector for storing lowestFactor
    vector<int> highestFactor(number + 1, 0);
    // vector for storing sieve
    vector<bool> sieve(number + 1, true);
    sieve[0] = sieve[1] = false;

    // make the sieve vector and highestFactor vector
    for (int i = 2; i <= number; i++)
    {
        if (sieve[i])
        {
            highestFactor[i] = i;
            for (int j = i * 2; j <= number; j += i)
            {
                sieve[j] = false;
                highestFactor[j] = i;
            }
        }
    }

    // finding the prime factors of number: own way
    while (number > 1)
    {
        factors.push_back(highestFactor[number]);
        mapFactor[highestFactor[number]]++;
        number = number / highestFactor[number];
    }

    // finding the prime factors of number: yt -> luv
    // while(number > 1)
    // {
    //     int prime_factor = highestFactor[number];
    //     while(number % prime_factor == 0)
    //     {
    //         number /= prime_factor;
    //         factors.push_back(prime_factor);
    //     }
    // }

    // sort the factors in increasing order
    sort(factors.begin(), factors.end());

    // extra: print the factors array for checking
    for (auto num : factors)
    {
        cout << num << " ";
    }
    cout << endl;

    // extra: print the factors in map
    for (auto num : mapFactor)
    {
        cout << num.first << " " << num.second << endl;
    }
    cout << endl;

    return factors;
}
// GCD in iterative approach
int iterativeGCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
// modular exponentiation -> (x^n)%m
int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1) // n is odd
        {
            res = (1LL * (res) * (x % m)) % m;
        }
        x = (1LL * (x % m) * (x % m)) % m;
        n = n >> 1;
    }
    return res;
}
// inline function
inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}
// power function with recursion
long long int powerFunction(int n, int m)
{
    // base case
    if (m <= 0)
        return 1;
    // recursive relation
    return n * powerFunction(n, --m);
}
// fibonacci series with recursion
int fibonacciRecursion(int n, int big, int small)
{
    // base case
    if (n == 0)
    {
        return small;
    }
    // recursion relation
    return fibonacciRecursion(--n, big + small, big);
}
// climbing stairs - leetcode -> distinct ways to climb stairs
int climbStairs(int n)
{
    // answer will be okay if only the first two or the last two if statements are used
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    // if (n == 1)
    //     return 1;
    // if (n == 2)
    //     return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}
// sum of array using recursion
int sumArrayRecursion(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    return arr[0] + sumArrayRecursion(arr + 1, --size);
}
// linear search using recursion
int linerSearchRecursion(int arr[], int size, int key, int index)
{
    if (size == 0)
        return -1;

    if (arr[0] == key)
        return index;

    return linerSearchRecursion(arr + 1, --size, key, ++index);
}