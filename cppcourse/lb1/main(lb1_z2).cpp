/*
������� ������ ��������
���-8
������������ ������ �1

������� �10

������� �2:

��������������: 1D > 2D. ���������� ������ �� 18 ����� ����� ���������� 
������������� � ������� �������� � ��������� �� ��������� ����� 6�3 ����� ������� � 
������ ���� �� ��������.
�������������: ��������� ������ ������� x[i] = i^2 � 1 � ��� �������� � ��������� 
��������� ��������� �� �1.
����� �� �����: �� ������ ������� ������� ������� 5 �������.

*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void processArraySozd(int*, int);
void processArraySort(int*, int, int);
void processArray2D(int*, int**);


int i = 0;
int j = 0;
int count = 0;
int n = 18;



int main()
{
	int* mas = new int[18];
	int **mas2d = new int* [6]; // ��� ������ � �������
    	for (int count1 = 0; count1 < 6; count1++)
    	{
    		mas2d[count1] = new int [3]; // � ���� ��������
		}
        
	
	setlocale(LC_ALL, "Russian");//������������� ������� ����
	
	processArraySozd(mas, i);//�������� �������� � ����� �������
	processArraySort(mas, i, j);//��������� � ������� ��������� ������
	processArray2D(mas, mas2d);//�������� �������������� ���������������� ������� � ���������� ������
		for (int count1 = 0; count1 < 6; count1++)//������� ������
		{
			delete [] mas2d[count];
		}
		delete [] mas2d;
	delete [] mas;

	system("pause");
	return 0;	
}

void processArraySozd(int* mas, int i){
cout << "[����]" << endl;
	for (i = 0; i < 18; ++i)
	{
		mas[i] = i * i - 1;
		if(i % 2 != 0)
		{
			mas[i] = mas[i] * -1;
		}
		cout << setw (5) << mas[i];
	}
	cout << endl;
}

void processArraySort(int* mas, int i, int j)
{
	int tmpmas;

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (mas[j] < mas[j + 1])
			{
				tmpmas = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = tmpmas;
			}
		}
	}
	cout << "[�����]" << endl;
	for (i = 0; i < n; ++i)
	{	
		cout << setw (5) << mas[i]/* << " "*/;
	}
	cout << endl;
	cout << endl;
}

void processArray2D(int* mas, int** mas2d)
{
	cout << "[����� 2D �������]" << endl;
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<3;++j)
		{
			*(*(mas2d + i)+j) = mas[count];
			count++;
			cout << setw (5) << *(*(mas2d + i)+j);
		} 
		cout << endl;
    }
}




