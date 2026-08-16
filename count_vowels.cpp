#include <iostream>
#include <string>
using namespace std;
int countVowels(string text)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string text;

    cout << "===== VOWEL COUNTER =====" << endl;

    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Number of vowels: " << countVowels(text) << endl;
    return 0;
}
