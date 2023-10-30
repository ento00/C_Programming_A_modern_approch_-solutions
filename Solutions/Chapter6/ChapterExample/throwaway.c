#include<stdio.h>

int main(void)
{
    int flag = 0;
    for (int i = 10; i>=1; i/=2)
    {   
        flag++;
        printf("%d\n", i++);
        if (flag == 10)
            break;
    }
    return 0;
}
