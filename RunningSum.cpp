#include <iostream>
using namespace std;
int sumOfNumbers(int sum = 0, int num = 0)
{

    // using do-while loop
    do
    {
        cout << "Enter a number" << endl;
        cin >> num;
        sum = num + sum;
    } while (num >= 0);
    cout << "The sum of positive numbers is:";
    return sum;
}

// Main function
int main()
{

    // Variables
    int num1 = 0, num = 0, sum = 0;
    // Calling the function
    cout << sumOfNumbers(sum, num);

    return 0;
}