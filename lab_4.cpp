#include <iostream>

using namespace std;

int main()
{
    int n = 5, min = 1000, mas[n];
    float s;
    for (int i = 1; i <= n; i++)
    {
        cin >> mas[i];
        if (min > mas[i]) {
            min = mas[i];
        }
    }
    s = (double)(50 * min) / (double)100;
    cout << 50 - s;
    
    return 0;
}
