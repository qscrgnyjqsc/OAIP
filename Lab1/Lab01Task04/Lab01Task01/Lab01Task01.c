#include <stdio.h>


int main()
{ char a[15], summer[15] = "����", winter[15] = "����", autum[15] = "�����", spring[15] = "�����";
    int g=1, a=1, s=1, w=1;
    gets(a);

    for (int i = 0; i < 6; i++)

    {
        if (a[i] != summer[i]) 
        {
            s = 0;
        }
    } 

    for (int i = 0; i < 6; i++)

    {
        if (a[i] != winter[i])
        {
            w = 0;
        }
    } 

    for (int i = 0; i < 5; i++)

    {
        if (a[i] != autum[i])
        {
            a = 0;
        }
    } 

    for (int i = 0; i < 6; i++)

    {
        if (a[i] != spring[i])
        {
           g = 0;
        }
    }

if(s!=1 && w!=1)

 printf("����, ����, ������");

else

 printf("�������, ������, �������");

if (g != 1 && a != 1)

 printf("��������, �������, ������");

else

 printf("����, ������, ���");

    return 0;
}
