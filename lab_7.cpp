#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

char *sim = new char [1];
int mun1 = 0, mun2 = 0, n = 0, razmer = 0;
void rachot(char *sim, int *mun1, int *mun2);
int rezul(int mun1, int num2);

int main()
{
    ifstream file("d:\\out.txt");
    if (file.is_open())
        cout << "file open";
    else cout << "file close";
    file.seekg(0, ios_base::end);// подчет количесвтва позиций в файле
    razmer=file.tellg();// подчет количесвтва позиций в файле
    do // цикл считывания символов
    {
        file.seekg(n, ios_base::beg); // перемещение по файлу
        file.read (sim, 1);
        rachot(sim, &mun1, &mun2);
        ++n;
    }
    while (n<razmer); // проверка достижения конца файла
        if (rezul(mun1, mun2)) // проверка равенства { }
            cout << "balans";
        else cout << "no balans" << endl;
}

void rachot(char *sim, int *mun1, int *mun2)
{
    if (sim[0] == '{')
        ++(*mun1);
    if (sim[0] == '}')
        ++(*mun2);
}
int rezul(int mun1, int num2)
{
    if (mun1 == mun2)
    return 1;
    else return 0;
}