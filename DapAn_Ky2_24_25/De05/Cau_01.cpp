#include<stdio.h>
#include <limits.h>

void nhapMaTran(int a[100][100], int &n)
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(!(2 <= n && n <= 10));
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void inMaTran(int a[100][100], int n)
{
	printf("Noi dung cua ma tran %d x %d\n",n,n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}


void trungBinhCong(int a[100][100], int n)
{
	int dem = 0;
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j && a[i][j] % 2 != 0)
			{
				dem++;
				tong += a[i][j];
			}
		}
	}
	if(tong == 0 && dem == 0) printf("Khong co cac phan tu le tren DCC");
	else printf("TBC cac phan tu le tren DCC: %0.2f",(float)tong/dem);
}

bool soDoiXung(int n)
{
	int temp = n;
	int dao = 0;
	while(temp > 0)
	{
		dao = dao * 10 + temp % 10; 
		temp /= 10;
	}
	if(dao != n) return 0;
	return 1;
}

void inDoiXung(int a[100][100], int n)
{
	printf("\nCac phan tu la so doi xung:");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(soDoiXung(a[i][j]))
				printf("%d ",a[i][j]);
		}
	}
}

void PTMin(int a[100][100], int n)
{
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i % 2 == 0 && j % 2 != 0 && a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	printf("\nPhan tu nho nhat tai hang chan cot le: %d",min);
}

int main()
{
	int n;
	int a[100][100];
	//Cau a
	nhapMaTran(a,n);
	//Cau b
	inMaTran(a,n);
	//Cau c
	trungBinhCong(a,n);
	//Cau d
	inDoiXung(a,n);
	//Cau e
	PTMin(a,n);
}
