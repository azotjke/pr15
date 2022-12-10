#include <stdio.h>

 main()
{
    int n, m;

    printf("number of lines: ");
    scanf("%d", &n);

    printf("number of columns: ");
    scanf("%d", &m);

    int** mas = new int* [n];


    for (int j = 0; j < n; j++)
    {
        mas[j] = new int[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &mas[j][i]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%3d", mas[j][i]);
        }
        printf("\n\n");
    }

    int tmp = 0;

    printf("\n\n\n\n");
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            tmp = mas[j][i];
            mas[j][i] = mas[i][j];
            mas[i][j] = tmp;
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%3d", mas[j][i]);
        }
        printf("\n\n");
    }


    for (int j = 0; j < n; j++)
    {
        delete[] mas[j];

    }

    delete[] mas;
}
