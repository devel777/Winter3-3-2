#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
setlocale(0,"");
cout << "����� ������ 10x3, ��������� �� ������������ ���������. \n"
        "����� ���������� ���������, ���������� �������� ������� ������ �������� ���������������." << endl;
cout << "\n";

float a[10][3],sum,avg;
int count1,count2,i,j;
srand(time(0));
cout << "Array a:" << endl;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
    {
        a[i][j] = float(rand()%901+100)/10;
        cout << setw(7) << a[i][j];
    }
    cout<<endl;
    }
    cout <<"\n"; // ������������ � ������ 2-������ ������
    cout << "����-�� ��������� �������: " << i*j << endl;
    count1=i*j;
    count2=0;
    sum=0;
    avg=0;
        for (i = 0; i < 10; i++)
            for (j = 0; j < 3; j++)
                    sum+= a[i][j];
                avg=sum/count1;
                cout << "����� ��������� �������: " << sum << endl;
                cout << "������� ����� ��������� �������: " << avg << endl;
        for (i = 0; i < 10; i++)
            for (j = 0; j < 3; j++)
        if (abs(a[i][j]) > avg) count2++;
        cout<< "���������� ��������� ������ ����������� �������� ��������������� "  << count2 << endl;
    return 0;
}
