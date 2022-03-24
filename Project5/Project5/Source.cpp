#include <iostream>
#include <ctype.h>

using namespace std;

bool isNumber(char c)
{
    if (isdigit(c))
        return true;
    return false;
}

int main()
{

    string str;
    int count = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (isNumber(str[i]))
        {
            count++;
        }
    }
    cout << "Total number of digits : " << count << endl;

    return 0;
}
