/* Final.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int T;
    long long all, now, sword;
    long long result;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld", &all, &now, &sword);

        result = now + (now - sword) + (all - sword);
        if (result > now + all)
        {
            result = now + all;
        }
        printf("Case #%d: %lld\n", i, result);
    }


    return 0;
}