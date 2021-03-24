/* 1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long verify(const char str[])
{
    int num;

    for (int i = 0; i < strlen(str); i++)
    {
        num = str[i] - 48;

        // index가 짝수일 때 1 -> 배열의 위치가 홀수
        // index가 홀수일 때 1 -> 배열의 위치가 짝수 
        if (i % 2 == 0)
        {
            if (num % 2 == 0)
                return 0;
        }
        else
        {
            if (num % 2)
                return 0;
        }
    }

    return 1;
}

int main(void)
{
    int T;
    char num[19];
    long long start, end;
    long long result;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld", &start, &end);
        result = 0;
        for (long long j = start; j <= end; j++)
        {
            sprintf(num, "%lld", j);
            result += verify(num);
        }

        printf("Case #%d: %lld\n", i, result);
    }

    return 0;
}