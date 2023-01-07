#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int n = 5, m = 5;
int** mat;

void citire(void)
{
	int i, j, x;
	mat = (int*)malloc(n * sizeof(int));
	if (!mat)
	{
		printf("Eroare alocare dinamica a liniilor!");
		free(mat);
		exit(EXIT_FAILURE);
	}
	for (j = 0; j < m; j++)
	{
		mat[j] = (int*)malloc(m * sizeof(int));
		if (!mat[j])
		{
			printf("Eroare alocare dinamica a coloanelor!");
			free(mat);
			exit(EXIT_FAILURE);

		}
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("mat[%d][%d]=", i, j);
			x = rand() % 100;
			mat[i][j] = x;
			printf("%d\n", mat[i][j]);
		}

}

void afisare(void)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

void suma_diagPri(void)
{
	int i, j;
	int s = 0;

	if (n == m)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)

				if (i == j)

					s = s + mat[i][j];
		printf("Suma de pe diagonala principala este:%d\n", s);
	}

}

void suma_diagSec(void)
{
	int i, j;
	int s1 = 0;

	if (n == m)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)


				if (i + j == n - 1)

					s1 = s1 + mat[i][j];
		printf("Suma de pe diagonala secundara este:%d\n", s1);
	}

}

void minsimax_diagPri(void)
{
	int i, j;
	int max = mat[1][0];
	int min = mat[1][0];

	if (n == m)
	{
		for (i = 2; i < n; i++)
			for (j = 0; j < m; j++)
			{
				if ((mat[i][j] > max) && (i > j))
					max = mat[i][j];

				else if ((mat[i][j] < min) && (i > j))
					min = mat[i][j];
			}
		printf("Maximul de sub diagonalei principale este: %d\n", max);
		printf("Minimul de sub diagonalei principale este: %d\n", min);
	}
}

void minsimax_diagSec(void)
{
	int i, j;
	int max = mat[1][n - 1];
	int min = mat[1][m - 1];

	if (m == n)
	{
		for (i = 2; i < n; i++)
			for (j = 0; j < m; j++)
			{
				if ((mat[i][j] > max) && (i + j > n - 1))
					max = mat[i][j];

				else if ((mat[i][j] < min) && (i + j > n - 1))
					min = mat[i][j];
			}
		printf("Maximul de sub diagonalei secundara este: %d\n", max);
		printf("Minimul de sub diagonalei secundara este: %d\n", min);
	}

}

int main()
{

	citire();
	afisare();
	suma_diagPri();
	suma_diagSec();
	minsimax_diagPri();
	minsimax_diagSec();

	system("pause");
	return 0;
}