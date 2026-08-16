#include <iostream>
using namespace std;
long long factorial(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
int main()
{
    int number;
    cout << "===== FACTORIAL CALCULATOR =====" << endl;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << number << " = "
             << factorial(number) << endl;
    }
    return 0;
}
