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
			if(i >= j && a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}	
	return min;
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

void InSoHH(int a[100][100], int n) 
{
    int dem = 0;
    printf("Cac so hoan hao tai vi tri (hang chan, cot le):\n");
    
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            if(i % 2 == 0 && j % 2 != 0) 
			{
                if(checkSoHH(a[i][j])) 
				{
                    printf("- Vi tri (%d,%d): %d\n", i, j, a[i][j]);
                    dem++;
                }
            }
        }
    }

    if(dem == 0) printf("Khong tim thay\n"); 
	else printf("=> Co %d so hoan hao thoa dieu kien.\n", dem);
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
	printf("Phan tu nho nhat tam duoi: %d\n",PTMin(a,n));
	//Cau d
	InSoHH(a,n);
}
