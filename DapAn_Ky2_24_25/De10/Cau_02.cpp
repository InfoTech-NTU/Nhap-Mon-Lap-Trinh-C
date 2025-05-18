#include <stdio.h>
#include <string.h>

void cau_c(char *s){//hello world
	char tmp[100];
	strcpy(tmp, s);
	for(int i = 0; tmp[i] != '\0'; i++){
		int cnt = 1;
		for(int j = i+1; tmp[j] != '\0'; j++){
			if(tmp[i] == tmp[j]){
				cnt++;
				strcpy(&tmp[j], &tmp[j+1]);
			}
		}
		printf("%c: %d\n", tmp[i], cnt);
		cnt = 1;
	}
}

int cau_d(char *s) {
    char target[100];
    gets(target);
    int len_s = strlen(s), len_t = strlen(target);

    for (int i = 0; i <= len_s - len_t; i++) {
        int j = 0;
        while (j < len_t && s[i + j] == target[j])
            j++;
        if (j == len_t)
            return 1;
    }
    return 0;
}

int main(){
	char s[100];
	gets(s);
	printf("Cau c:\n");
	cau_c(s);
	printf("Cau d: ");
    if (cau_d(s))
        printf("YES\n");
    else
        printf("NO\n");
    
}