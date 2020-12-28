/*
������� ������ ��������
���-8
������������ ������ �1

������� �10

������� �2:

������� strncpy.
������ char* strncpy(char* dest, const char* src, size_t num).
������� �������� ������ num �������� �� ������ src � ������ dest.


*/


#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <clocale>
 
using namespace std;

size_t n;
 
char* mystrncpy(char* dest, const char* src, size_t num)
{
    n = 0;
    while (n < num)
    {
        dest[n] = src[n];
        n++;
    }
    dest[num] = '\0';
    return dest;
}
 
 
int main()
{
    setlocale(LC_ALL, "russian");

    const char s[800] = "Hello World! ������ ���!";

    printf("%s", s,"\n");
    printf("\n");

    char res[1000];
    printf("������ ������� strncpy: \n");

    char* std1 = mystrncpy(res, s, 5);
    printf("%s \n", std1);
    printf("\n");

    printf("������ strncpy: \n");
    char* std2 = strncpy(res, s, n)+'\0';
    printf("%s \n", std1);
    printf("\n");
    
    system("pause");
    return 0;
}
