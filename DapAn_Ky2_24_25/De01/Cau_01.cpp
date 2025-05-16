#include<stdio.h>
#include<limits.h>

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

int PTMin(int a[100][100], int n)
{
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i <= j && a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}	
	return min;
}

int dem_PTMin(int a[100][100], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i <= j && a[i][j] == PTMin(a,n))
			{
				dem++;
			}
		}
	}	
	return dem;
}

int checkGiamDan(int a[100][100], int n, int d)
{
	do
	{
		printf("Nhap chi so hang: ");
		scanf("%d",&d);
	}
	while(!(0 <= d && d < n));
	
	for(int i = 0; i < n-1; i++)
	{
		if(a[d][i] < a[d][i+1])
			return 0;
	}	
	return 1;
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
	printf("Phan tu nho nhat o tam giac tren: %d xuat hien %d lan\n", PTMin(a,n),dem_PTMin(a,n));
	//Cau d	
	int d;	
	if(checkGiamDan(a,n,d))
		printf("Cac phan tu tren hang %d sap xep theo thu tu giam dan", d);
	else
		printf("Cac phan tu tren hang %d khong sap xep theo thu tu giam dan", d);
}
