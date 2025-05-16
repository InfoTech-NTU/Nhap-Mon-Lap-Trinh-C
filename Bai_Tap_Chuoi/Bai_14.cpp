#include <stdio.h>
#include <string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
    
    if (a[strlen(a) - 1] == '\n') 
        a[strlen(a) - 1] = '\0';
}

void Xuat(char a[])
{
	printf("Noi dung: %s",a);
}

void Tu_max (char a[])
{
	char b[100], c[100];
	int j = 0;
	int maxlength = 0;
	for(int i = 0; i <= strlen(a); i++)
	{
        if(a[i] != ' ' && a[i] != '\0')
	    	b[j++] = a[i];
		else
		{
            b[j] = '\0';
            if(strlen(b) > maxlength)
			{
                strcpy(c, b);
                maxlength = strlen(b);            
			}
			j = 0;
        }
    }
	Xuat(c);
	printf("\nChieu dai: %d ",maxlength);
}


int main()
{
	char a[100];
	Nhap(a);
	Tu_max(a);
}
