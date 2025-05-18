#include<stdio.h>
#include<math.h>
#include<limits.h>

void nhapMaTran(int a[100][100], int &n)
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(!(3 <= n && n <= 12));
	
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

void giaTriMaxMin(int a[100][100], int n)
{
	int min = INT_MAX;
	int max = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] < min)
			{
				min = a[i][j];
			}
			else if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	printf("Gia tri lon nhat: %d\nGia tri nho nhat: %d", max, min);
}

bool laSoNguyenTo(int n) 
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

void cotSoNguyen(int a[100][100], int n)
{
    int tonTai = 0;
    
    for (int j = 0; j < n; j++) 
    {
        int flag = 1;
        for (int i = 0; i < n; i++) 
        {
            if (!laSoNguyenTo(a[i][j]))
            {
                flag = 0;
                break; 
            }
        }
        if (flag == 1)
        {
            printf("\nCot %d chua toan so nguyen to", j);
            tonTai = 1;
        }
    }

    if (!tonTai)
        printf("\nKhong co cot nao chua toan so nguyen to");
}

void chiaHet2va3(int a[100][100], int n)
{
	int kq[100], k = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i + j == n - 1 && a[i][j] % 2 == 0 || a[i][j] % 3 == 0)
				kq[k++] = a[i][j];
		}	
	}
	if(k != 0) 
	{
		printf("\nMa tran co %d phan tu chia het cho 2 hoac 3: ",k);
		for(int i = 0; i<k; i++)
		{
			printf("%d ",kq[i]);
		}
	}
	else 
		printf("\nMa tran khong co phan tu chia het cho 2 hoac 3");
}

void viTri(int a[100][100], int n)
{
	int vti[100], vtj[100];
	int sli = 0, slj = 0;
	int y;
	printf("\nNhap y: ");
	scanf("%d",&y);
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] == y)
			{
				vti[sli++] = i;
				vtj[slj++] = j;
			}
		}
	}
	if(sli != 0)
	{
		printf("Vi tri cua %d trong ma tran: \n",y);
		for(int i = 0; i<sli; i++)
		{
			printf("(%d,%d)\n",vti[i],vtj[i]);
		}
	}
	else 
		printf("Khong co %d trong ma tran",y);
}

int main()
{
	int n;
	int a[100][100];
	//Cau a
	nhapMaTran(a,n);
	inMaTran(a,n);
	//Cau b
	giaTriMaxMin(a,n);
	//Câu c
	cotSoNguyen(a,n);
	//Cau d
	chiaHet2va3(a,n);
	//Cau e
	viTri(a,n);
}
