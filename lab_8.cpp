#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
vector <string> short_list;
 
int main()
{
    string temp;
    ifstream file("spravka.txt");
    if (!file.is_open()){
        cout << "in.txt didn't open";
        exit(0);
    }
    while (getline(file, temp)){
        short_list.push_back(temp);
    }
    file.close();
 
    sort(short_list.begin(), short_list.end());
 
    for(int i=0; i<short_list.size(); ++i)
    {
        cout << short_list[i] << endl;
    }
 
    ofstream fout ("out.txt");
    for(int i=0; i<short_list.size(); ++i)
    {
        fout << short_list[i] << endl;
    }
    fout.close();
 
    return 0;
}