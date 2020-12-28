/*
������� ������ ��������
���-8
������������ ������ �1

������� �10

������� �1:

�������� ������ �� n=16 ����� �����, ������������������� ���������. ������� 
processArray() ������ ��������� �������� ������� � ������� ��������� ��������� 
������ (1, 2, 4, 8, 16,�), � ��������� ��������� � ��������� ������ (3, 9, 27,�). ����� 
���������� � ������� cnt � ���������� ����� � �������, ���������� ����� 1, � 
������������ �������� ������, ���������� ��������������� ������� ��������. 
������� �� ����� �������������� �������.

*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void processArray(int*, int);
void processArraySort(int*, int, int);
int processArrayOd(int*, int, int);



int i = 0;
int j = 0;
int cnt;
const int n = 16;

int main()
{
	int mas[16];
	//������� ���� � �������
	setlocale(LC_ALL, "Russian");

	// ������ ������� ����� 16 (�� �������)

	// ������� ������ � �������������� 1
	for (int z = 0; z < 16; ++z)
	{
		mas[z] = 1;
		i = z;
		mas[i] = mas[z];
	}

	//������� ������� processarray
	processArray(mas, i);

	printf("[����] : ");
	for (i = 0; i < n; ++i)
	{
		printf("%d",mas[i],"\n");
		printf(" ");
	}

	printf("\n");
	printf("\n");

	//������� ������� processarraysort
	processArraySort(mas, i, j);

	printf("[�����] : ","\n");
	for (i = 0; i < n; ++i)
	{
		printf("%d",mas[i],"\n");
		printf(" ");
	}

	printf("\n");
	printf("\n");	

	//������� ������� processod
	processArrayOd(mas, i, cnt);
	printf("[cnt] : %d", cnt,"\n");

	printf("\n");

	system("pause");
	return 0;
}

void processArray(int* mas, int i)
{
	int tw = 1;
	int tr = 1;

	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			mas[i] = pow(2, tw);
			tw++;
		}
		else
		{
			mas[i] = pow(3, tr);
			tr++;
		};
	}
}

void processArraySort(int* mas, int i, int j)
{
	int tmpmas;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				tmpmas = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = tmpmas;
			}
		}
	}
}

int processArrayOd(int* mas, int i, int cnt)
{
	cnt = 0;
	for (int i = 0; i <= n; i++)
	{
		int tmp = mas[i];
		while (tmp > 0) 
		{ 
    		if (tmp % 10 == 1) 
			{
    			cnt+=1;
			}
    		tmp = tmp/10;
		}
		tmp = 0;
	}
}
