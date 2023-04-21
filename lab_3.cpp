#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >=1; i--)
    {
        cout << i << endl;
        if (i % 5 == 0)
            cout << "веер" << endl;
    }

    return 0;
}
