/*Написать классы Vector и Matrix для хранения и обработки одномерных и
двумерных массивов, соответственно. Реализовать задание 2 лабораторной работы №1
с помощью созданных классов. Все функции оформить в виде методов классов.
В коде отразить следующее:
 Выделение и освобождение динамической памяти производить в конструкторах и
деструкторах классов, соответственно.
 В классе Vector перегрузить оператор индексации []. В классе Matrix добавить
методы T at(int i, int j) const и setAt(int i, int j, T val), которые
позволяют получить и установить значение элемента массива с индексом [i][j], T –
это тип элементов массива по варианту (int или double).
 Перегрузить операторы инкремента и декремента (как префиксного, так и
постфиксного). Смысл инкремента / декремента всего массива заключается в
инкременте / декременте каждого элемента массива*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <cstring>
#include "Vector.h"
#include "Matrix.h"

using namespace std; // чтобы не записывать std::cin


	int rows = 6;//Строки
	int cols = 3;//Столбцы
	Vector arr(16);//Создаем массив
	Matrix arr2d(rows, cols);//Создаем 2Д массив



void arrIN(Vector& arr)
{
	cout << "����: "<< endl;
	for (int i = 0; i < 16; i++)
	{
		int tw = 1;
		int tr = 1;

	for (int i = 0; i <= 16; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = pow(2, tw);
			tw++;
		}
		else
		{
			arr[i] = pow(3, tr);
			tr++;
		};
	}	
	
		cout << arr[i] << "  ";
	}
	cout << endl;
	cout << "�����: "<< endl;
	int tmpmas;
	for (int i = 0; i <= 16 - 1; i++)
	{
		for (int j = 0; j < 16 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmpmas = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmpmas;
			}
		}
		;
		
		cout << arr[i] << "  ";
		
	}
	cout << endl;
}

void krey2d(Matrix& arr2d, Vector& arr)
{

	for (int i = 0; i < arr2d.GetRows(); i++)//использую метод класса 
	{
		for (int j = 0; j < arr2d.GetCols(); j++)
		{
			arr2d[i][j] = arr[i * arr2d.GetCols() + j];
			cout << setw(10) << arr2d[i][j];
		}
		cout << endl;
	}
}

void summ(Matrix& arr2d)
{
	int cnt = 0;
	for (int i = 0; i < 16; i++)
	{
		int tmp = arr[i];
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
	printf("[cnt] : %d", cnt,"\n");
	printf("\n");

}


int main()
{
	setlocale(LC_ALL, "Russian");//Русский язык в консоли



	arrIN(arr);
	cout << endl;
	cout << "Массив создан" << endl;

	krey2d(arr2d, arr);
	cout << endl;
	cout << "Массив, с 1 строкой - суммой всех элементов строки" << endl;

	summ(arr2d);

	return 0;
}
