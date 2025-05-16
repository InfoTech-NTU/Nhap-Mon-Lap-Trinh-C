#include <stdio.h>
#include <string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
    
    if (a[strlen(a) - 1] == '\n') 
        a[strlen(a) - 1] = '\0';
}

void TimKiemChuoi(char a[], char b[]) 
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    for (int i = 0; i <= len2 - len1; i++) 
    {
        int j;
        for (j = 0; j < len1; j++) 
        {
            if (b[i + j] != a[j]) 
            	break;
        }
        
        if (j == len1)
        	printf("Chuoi '%s' xuat hien tai vi tri %d trong chuoi '%s'.\n", a, i, b);
    }
    
}

int main() 
{
    char a[100], b[100];
    Nhap(a);
    Nhap(b);

    TimKiemChuoi(a, b);
}

