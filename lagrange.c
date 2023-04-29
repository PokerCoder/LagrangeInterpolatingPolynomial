#include <stdio.h>

double lagrange(int n, double ux, double kx[], double ky[]);

int main()
{

    int number_of_data;

    printf("number of data: ");
    scanf("%d", &number_of_data);
    printf("\n");

    double unkown_x;

    printf("want to find this x's value: ");
    scanf("%lf", &unkown_x);
    printf("\n");

    double known_xs[number_of_data];
    double known_ys[number_of_data];

    for (int i = 0; i < number_of_data; i++)
    {
        printf("%d. x: ", i);
        scanf("%lf", &known_xs[i]);
        printf("\n");

        printf("%d. y: ", i);
        scanf("%lf", &known_ys[i]);
        printf("\n");
    }

    double result;

    result = lagrange(number_of_data, unkown_x, known_xs, known_ys);

    printf("Result is -> %lf \n", result);

    return 1;
}

double kroneckerDelta(int j, int n, double kx[], double ux);

double lagrange(int n, double ux, double kx[], double ky[])
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += ky[i] * kroneckerDelta(i, n, kx, ux);
    }

    return sum;
}

double kroneckerDelta(int j, int n, double kx[], double ux)
{
    double product = 1.0;

    for (int i = 0; i < n; i++)
    {
        if (i == j)
        {
            continue;
        }

        product *= (ux - kx[i]) / (kx[j] - kx[i]);
    }

    return product;
}
