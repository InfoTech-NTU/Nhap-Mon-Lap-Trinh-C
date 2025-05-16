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

int Max_KT(char a[])
{
    int n = strlen(a);
    int maxCount = 0;
    
    for (int i = 0; i < n-1; i++)
    {   
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i] && a[j] != '\0' && a[i] != ' ')
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
	}
	return maxCount;
}

void KT_Max(char a[])
{
    int n = strlen(a);
    char checked[100] = {0}; 
    
    for (int i = 0; i < n-1; i++)
    {   
    	int count = 1;
        if (checked[i] == 1) continue;
        
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i] && a[j] != '\0' && a[i] != ' ')
            {
                count++;
                checked[j] = 1;
            }
        }
        if (count == Max_KT(a))
        	printf("%c ", a[i]);
    }
}

int main()
{
	char a[100];
	int n;
	int vt;
	Nhap(a);
	printf("Max KT = %d\n",Max_KT(a));
	printf("Cac tu xuat hien nhieu nhat %d lan: ",Max_KT(a));
	KT_Max(a);
}
