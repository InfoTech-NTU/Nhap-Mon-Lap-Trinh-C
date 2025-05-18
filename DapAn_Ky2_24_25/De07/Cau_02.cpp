#include <stdio.h>
#include <string.h>
#include <ctype.h>

void my_strlwr(char *s){
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
}

void cau_b(char *s){
    char tmp[100];
    strcpy(tmp, s);
    my_strlwr(tmp);

    char a[100][100];
    int i = 0, j = 0;

    for(int k = 0; k <= strlen(tmp); k++){
        if(tmp[k] == ' ' || tmp[k] == '\0'){
            a[i][j] = '\0';
            i++;
            j = 0;
        } else {
            a[i][j++] = tmp[k];
        }
    }

    char str[100];
    for(int v = 0; v < i - 1; v++){
        for(int z = v + 1; z < i; z++){
            if(strcmp(a[v], a[z]) > 0){
                strcpy(str, a[v]);
                strcpy(a[v], a[z]);
                strcpy(a[z], str);
            }
        }
    }

    for(int v = 0; v < i; v++){
        printf("%s ", a[v]);
    }
}

void cau_c(char *s){
	int cnt_words = 0, cnt_vowels = 0, index = 0;
    for(int i = 0; i <= strlen(s); i++){
        if(s[i] == ' ' || s[i] == '\0'){
            for(int j = index; j < i; j++){
                char ch = tolower(s[j]);
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                    cnt_vowels++;
                }
            }
            if(cnt_vowels > 0){
                cnt_words++;
                cnt_vowels = 0;
            }
            index = i + 1;
        }
    }
    printf("So tu chua it nhat 1 nguyen am: %d tu", cnt_words);
}

void cau_d(char *s, char *min_word){
	int index = 0;
    int min_len = 100;
    char str[100];
    int cnt = 0;

    for(int i = 0; i <= strlen(s); i++){
        cnt++;
        if(s[i] == ' ' || s[i] == '\0'){
            if(cnt - 1 < min_len){
                int min_i = 0;
                for(int j = index; j < i; j++){
                    str[min_i++] = s[j];
                }
                str[min_i] = '\0';
                strcpy(min_word, str);
                min_len = cnt - 1;
            }
            index = i + 1;
            cnt = 0;
        }
    }
}

void cau_e(char *s, char *min_word){
    char words[100][100];
    int i = 0, j = 0, count = 0;

    for (int k = 0; k <= strlen(s); k++) {
        if (s[k] == ' ' || s[k] == '\0') {
            words[count][j] = '\0';
            count++;
            j = 0;
        } else {
            words[count][j++] = s[k];
        }
    }

    int skip_first = 0, skip_min = 0;
    int min_found = 0;

    printf("Chuoi sau khi xoa tu dau tien va tu ngan nhat: ");
    for (int k = 0; k < count; k++) {
        if (k == 0) {
            skip_first = 1;
            continue;
        }
        if (!min_found && strcmp(words[k], min_word) == 0) {
            skip_min = 1;
            min_found = 1;
            continue;
        }
        printf("%s", words[k]);
        if (k < count - 1) printf(" ");
    }
}

int main(){
	char s[100];
	printf("Cau a: \n");
	gets(s);
	puts(s);
	printf("Do dai cua chuoi: %d", strlen(s));

	printf("\nCau b: ");
	cau_b(s);

	printf("\nCau c: ");
	cau_c(s);

	printf("\nCau d: ");
	char min_word[100];
	cau_d(s, min_word);
	printf("Tu ngan nhat: %s", min_word);

	printf("\nCau e: ");
	cau_e(s, min_word);

	return 0;
}