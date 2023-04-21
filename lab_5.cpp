#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;
    cin >> number;
    bool isTrue = false;
    int count_max, count_1, n;
    
    count_max = number.length();
    count_1 = count_max / 2;
    n = count_max - 1;
    for (int i = 0; i < count_1; i++)
    {
        if (number[i] == number[i+n]) {
            isTrue = true;
        }
        n = n - 2;
    }
    if (isTrue == true)
        cout << number + " это палиндром" << endl;
    else
        cout << number + " не палиндром" << endl;
    return 0;
}
