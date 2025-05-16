#include<stdio.h>
#include<math.h>

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

int laSoNguyenTo(int n) 
{
    if (n < 2)
        return false;
        
    for (int i = 2; i <= sqrt(n); i++) 
	{
        if (n % i == 0)
            return false;
    }
    return true;
}

void demSoNguyen(int a[100][100], int n)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j && laSoNguyenTo(a[i][j]))
				tong++;
		}	
	}
	printf("Ma tra co %d so nguyen to tren DCC", tong);
}

void tongDCC(int a[100][100], int n)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j)
				tong+=a[i][j];
		}	
	}
	printf("\nTong phan tu co chi so dong = chi so cot: %d", tong);
}

int ktDoiXung(int a[100][100], int n)
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] != a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}

void sort(int a[100], int n) 
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

void inPTVien(int a[100][100], int n)
{
	int kq[100];
	int k = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
			{
				kq[k++] = a[i][j];	
			}
		}
	}
	if(k != 0)
	{
		sort(kq, k);
		printf("\nCac phan tu vien cua ma tran: ");
		for(int i = 0; i<k; i++)
		{
			printf("%d ",kq[i]);
		}
	}
}

int main()
{
	int n;
	int a[100][100];
	//Cau a
	nhapMaTran(a,n);
	inMaTran(a,n);
	//Cau b
	demSoNguyen(a,n);
	//Cau c
	tongDCC(a,n);
	//Cau d
	if(ktDoiXung(a,n)) printf("\nMa tran doi xung qua DCC");
	else printf("\nMa tran khong doi xung qua DCC");
	//Cau e
	inPTVien(a,n);
	
}
