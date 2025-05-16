#include<stdio.h>
#include<string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
}

void Xuat(char a[]) 
{
    printf("Noi dung: %s", a);
}

int Dem_The(char a[]) 
{
    int dem = 0;
    
    for (int i = 0; i < strlen(a) - 2; i++) {
        if ((a[i] == 't' || a[i] == 'T') && (a[i+1] == 'h' || a[i+1] == 'H') && (a[i+2] == 'e' || a[i+2] == 'E')) 
		{
            if ((a[i + 3] == ' ' || a[i + 3] == ',' || a[i + 3] == '.' || a[i + 3] == '\n')) 
			{
                dem++;
            }
        }
    }
    
    return dem;
}

int main() 
{
    char a[100];
    
    Nhap(a);  
    Xuat(a);    
    if(Dem_The(a) != 0)
    	printf("Tu \"the\" xuat hien %d lan trong chuoi", Dem_The(a));
	else 
		printf("Tu \"the\" khong xuat hien trong chuoi");  
    return 0;
}

