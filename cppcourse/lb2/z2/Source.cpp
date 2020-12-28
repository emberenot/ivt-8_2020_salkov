/*�������� ����� Fraction ��� ������������� ������������ ������ (��� ���������
���� ����� ����� x/y). ����������� ��������� +, -, *, / ��� ������. ����������� �����
void reduce() ��� ���������� �����, � ����� ����������� ������:
 int gcd(int n, int m)
������� ��� ���������� ����������� ������ �������� ����� n � m;
 void printAsFraction(double decimal_fraction)
 void printAsFraction(char* decimal_fraction)
������������� ������ ������ ���������� ����� � ���� ������������
(��������, ��� �������� decimal_fraction = 0.43 �� ������ ������
��������� 43/100, ��� 0.25 � 1/4 � �.�.).
����� ����������� � ���� ������������ ����� ������ ������� ���� ��������� ��
������ ������ � ��������� ����������� ������.
������������������ ������ ���������� ������. ������� ��������� �������� ������.
���������� �������� ��������, ���������, ��������� � ������� ������. �������
�� ����� ����������. �������� ����� ���������� ������ ����������� ������� ������.*/
#include "Fraction.h"
using namespace std;

int Fraction::FractionCount = 0;
int main()
{
	cout << "Fraction Num = " << Fraction::GetFractionCount() << endl << endl;

	Fraction F1(12, 24);
	Fraction F2(double(1.3));
	cout << "F1 = " << F1 << endl;
	cout << "F2 = " << F2 << endl << endl;

	cout << "F1 + F2 = " << F1 + F2 << endl;//����� ������������� ����������
	cout << "F1 - F2 = " << F1 - F2 << endl;
	cout << "F1 * F2 = " << F1 * F2 << endl;
	cout << "F1 / F2 = " << F1 / F2 << endl << endl;

	cout << "gcd 8/12 = " << Fraction::gcd(3, 9) << endl;
	cout << "gcd 10/2 = " << Fraction::gcd(150, 45) << endl << endl;

	cout << "PrintAsFraction 0.3 = ";
	Fraction::PrintAsFraction(0.4);
	cout << endl;
	cout << "PrintAsFraction 5.2 = ";
	Fraction::PrintAsFraction(5.5);
	cout << endl << endl;

	cout << "Fraction Num = " << Fraction::GetFractionCount() << endl;

	return 0;
}
