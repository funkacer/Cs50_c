#include <stdio.h>

float average(int N, int scores[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
    }
    // 72, 73, 33 rozdíl vznikne tak, že (float) N != 3.0
    printf("Average is %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    printf("Average is %f\n", average(N, scores));
}

float average(int N, int scores[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += scores[i];
    }
    return sum / (float) N;
}