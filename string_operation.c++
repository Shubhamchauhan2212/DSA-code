#include <bits/stdc++.h>
using namespace std;
void patternmMatch(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for ( j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])          
                break;
        }
        if (j == m)
            cout << "Pattern found at index " << i << endl;
    }
}
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    cout << "Length of s1: " << s1.size() << endl;
    cout << "First char: " << s1[0] << endl;

    string combined = s1 + " " + s2;
    cout << "Concatenated: " << combined << endl;

    string sub = combined.substr(6, 5);
    cout << "Substring: " << sub << endl;

    // Reverse string
    string str = combined;
    reverse(str.begin(), str.end());
    cout << "Reverse string: " << str << endl;

    // Plaindrome check
    string word = "madam";
    string rev = word;

    reverse(rev.begin(), rev.end());

    if (word == rev)
    {
        cout << word << " is a plaindrome" << endl;
    }
    else
    {
        cout << word << " is NOT a plaindrome" << endl;
    }

    // Anagram check
    string a = "listen";
    string b = "silent";

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
    {
        cout << "They are anagrams" << endl;
    }
    else
    {
        cout << "They are NOT anagrams" << endl;
    }

    // Character counting
    string text = "Hello world 123";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (char c : text)
    {
        if (isalpha(c))
        {
            char ch = tolower(c);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(c))
            digits++;
        else if (isspace(c))
            spaces++;
    }
    cout << "In \"" << text << "\":" << endl;
    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;
    cout << "digits: " << digits << endl;
    cout << "spaces: " << spaces << endl;

    // strign comparison
    string str1 = "apple";
    string str2 = "banana";

    if (str1 == str2)
        cout << str1 << " is equal to " << str2 << endl;
    else if (str1 < str2)
        cout << str1 << " comes before " << str2 << endl;
    else
        cout << str1 << " comes after " << str2 << endl;

    // string to integer/integer to string
    string numstr = "12345";
    int num = stoi(numstr);
    cout << "Integer value: " << num << endl;

    int x = 6789;
    string xstr = to_string(x); 
    cout << "string value; " << xstr << endl;

    // pattern Matching Example
    cout << "\n-- Pattern Matching ---" << endl;
    string fulltext = "ABCABCDABCD";
    string pattern = "ABCD";

    patternmMatch(fulltext, pattern);
    return 0;
}