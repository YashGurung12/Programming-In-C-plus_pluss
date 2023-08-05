#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str = "Yash is my name";
    string str2 = "a Software Engineer";
    int length = str.length();
    string word, e;

    cout << "Enter a word to find in str:" << endl;
    getline(cin, word);
    int index = str.find(word);

    cout << "Enter a word to erase in str2:" << endl;
    getline(cin, e);
    str2.erase(str2.find(e));

    string com = str + " " + str2;

    cout << "length of the str is:" << length << endl;
    cout << "Combined String:" << com << endl;
    cout << "Word found in index:" << index << endl;
    cout << str << endl;
    cout << str2 << endl;
    cout << "Comparing 2 strings:" << endl;
    cout << str.compare(str2) << endl;

    // Sort the str string.
    sort(str.begin(), str.end());
    cout << str << endl;

    return 0;
}
