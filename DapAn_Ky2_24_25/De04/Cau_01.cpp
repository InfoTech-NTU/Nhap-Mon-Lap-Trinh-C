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

void PTMin(int a[100][100], int n)
{
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j && a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j && a[i][j] == min)
				dem++;
		}
	}
	
	printf("Phan tu nho nhat tren DCC la %d xuat hien %d lan",min, dem);
}

int checkSoHH(int n)
{
	int tong = 0;
    for(int i = 1; i < n; i++) 
	{
        if(n % i == 0) 
			tong += i;
    }
    return tong == n;
}

void inSoHH(int a[100][100], int n)
{
	printf("\nCac so hoan hao co trong ma tran: ");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(checkSoHH(a[i][j]) && a[i][j] != 0) printf("%d ",a[i][j]);
		}
	}
}

int checkTangDan(int a[100][100], int n)
{
	int k;
	do
	{
		printf("\nNhap chi so hang: ");
		scanf("%d",&k);
	}
	while(!(0 <= k && k < n));
	
	for(int i = 0; i < n-1; i++)
	{
		if(a[k][i] > a[k][i+1])
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
	PTMin(a,n);
	//Cau d
	inSoHH(a,n);
	//Cau e
	if(checkTangDan(a,n)) printf("YES");
	else printf("NO");
	
}
