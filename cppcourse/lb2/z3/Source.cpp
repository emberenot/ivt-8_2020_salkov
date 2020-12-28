/*�������� ����������� �����, � ������������ � ���������. ������������������ � ����
������������ ������, ���������� ������������� ��� ���������� � � �����������
��� ������������� ������. ����� ������ ��������� ����� serialize() ���
���������� ������ ������ � ���� � ����� deserialize() ��� ������ ������ ������
�� ����� �� ��������� � ������� ����������, � ����� ������������� ������
serialize(const std::string& filename) � deserialize(const std::string&
filename) ��� ������ � ������ � ��������� � ��������� ������
����� �������.
������: ���, ���, ��� ��������, ��� �����������, ����� �������, ������� ����.
������� ������ �� 3 ��������� � ���������� �� ������ ������ � ������� ��������.
��� ������ �������� ������� �������� � ���� � ���������� ��� ������ � ������������ �
�����������. � ������� ������� �������������� ��� ������ � ��������� �������
������������ �� 4 ����� ������ � ����������� � ��������� ������ ������� ����.
������� ���������� ���������, ������������ �� � ������� �������� �������� �����.
*/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Student.h"
using namespace std;

void Sort(Student* photomans, int num) {
	int j = 0;
	Student* temp = new Student;
	for (int i = 0; i < num; i++) {
		j = i;
		for (int k = i; k < num; k++)
			if (photomans[j].getScore() < photomans[k].getScore())
				j = k;
		*temp = photomans[i];
		photomans[i] = photomans[j];
		photomans[j] = *temp;
	}
	delete temp;
}

void CalcNewScore(Student* students, int i, float newScore) {
	//��� ���������� �������� ����: ����� ��� ��� ����� ��������� ��� �� ���� � �������
	students[i].setScore(students[i].getScore() + newScore);
}
void Session(Student* students, int num) {
	cout << "Session:" << endl;
	for (int i = 0; i < num; i++)
	{
		float newScore = (2000 + rand() % 5000) / 1000;
		cout << "New score for student " << students[i].getFullName() << " is: " << newScore << endl;
		CalcNewScore(students, i, newScore);
		cout << "Current score is: " << students[i].getScore() << endl;
	}
	cout << endl;
}

int main()
{
	srand(time(0));

	//�������������
	Student* students1 = new Student[3];

	students1[0].setFullName("Sergeev Ivan Denisovich");
	students1[0].setSex(true);
	students1[0].setBirthYear(1986);
	students1[0].setStartYear(2020);
	students1[0].setNumber(001);
	students1[0].setScore(365);

	students1[1].setFullName("Gerasim Danil Sergeevich");
	students1[1].setSex(true);
	students1[1].setBirthYear(1991);
	students1[1].setStartYear(2018);
	students1[1].setNumber(002);
	students1[1].setScore(349);

	students1[2].setFullName("Garemov Timofei Danilovich");
	students1[2].setSex(true);
	students1[2].setBirthYear(1998);
	students1[2].setStartYear(2018);
	students1[2].setNumber(003);
	students1[2].setScore(405);

	Student students2("Darimov Dmitrii Ivanovich", true, 1987, 2010, 004, 450);

	Student* students = new Student[4];
	for (int i = 0; i < 3; i++)
	{
		students[i] = students1[i];
	}
	students[3] = students2;

	//������
	for (int i = 0; i < 3; i++)
		Session(students, 4);

	//����������
	cout << "Sorting:" << endl;
	Sort(students, 4);
	for (int i = 0; i < 4; i++) {
		cout << i << ")";
		cout << students[i].getFullName() << " ";
		cout << students[i].getScore() << endl;
	}

	//������������/��������������
	cout << "Serialize:" << endl;
	cout << "Student 1 name:" << students[1].getFullName() << endl;
	students[1].setFullName("Serizlized student");
	cout << "Set student 1 name 'Serialized'" << endl;
	students[1].Serialize();
	cout << "Serializing" << endl;
	students[1].setFullName("Garemov Timofei Danilovich");
	cout << "Set student 1 name: 'Garemov Timofei Danilovich'" << endl;
	students[1].Deserialize();
	cout << "Deserializing" << endl;
	cout << "Student 1 name: " << students[1].getFullName() << endl;
	cout << endl;

	delete[] students;
	return 0;
}
