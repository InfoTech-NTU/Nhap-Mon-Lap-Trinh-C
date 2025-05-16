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

void tongSoNguyen(int a[100][100], int n)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i <= j && laSoNguyenTo(a[i][j]))
				tong += a[i][j];
		}	
	}
	printf("Tong so nguyen to tam giac tren DCC: %d", tong);
}

void chiaHet(int a[100][100], int n)
{
	int kq[100], k = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i + j > n - 1 && a[i][j] % 5 == 0 || a[i][j] % 3 == 0)
				kq[k++] = a[i][j];
		}	
	}
	if(k != 0) 
	{
		printf("\nMa tran co %d phan tu chia het cho 5 hoac 3: ",k);
		for(int i = 0; i<k; i++)
		{
			printf("%d ",kq[i]);
		}
	}
	else 
		printf("\nMa tran khong co phan tu chia het cho 5 hoac 3");
}

void inDongChan(int a[100][100], int n, int d)
{
	for(int i = 0; i<n; i++)
	{
		printf("%d ",a[d][i]);
	}
}

void dongChan(int a[100][100], int n)
{
	int kiemtra = 0;
	for(int i = 0; i<n; i++)
	{
		int flag = 1;
		int vt = 0;
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] % 2 != 0)
			{
				flag = 0;
				vt = i;
			}
		}
		if(flag == 1) 
		{
			kiemtra = 1;
			printf("\nDong %d chua toan so chan: ", vt);
			inDongChan(a,n,vt);
		}
	}
	if(!kiemtra)
	{
		printf("\nMa tran khong co dong nao toan so chan");
	}
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
	tongSoNguyen(a,n);
	//Cau d
	chiaHet(a,n);
	//Cau e
	dongChan(a,n);
}
