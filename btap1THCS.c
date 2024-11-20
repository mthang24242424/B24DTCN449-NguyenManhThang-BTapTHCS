#include <stdio.h>
#include <ctype.h>
#include <string.h>

void chuanHoa(char *str) {
    char temp[81];
    int i = 0, j = 0;

    while (str[i]) {
        if (str[i] != ' ' || (j > 0 && temp[j - 1] != ' '))
            temp[j++] = (j == 0 || temp[j - 1] == ' ') ? toupper(str[i]) : tolower(str[i]);
        i++;
    }
    if (j > 0 && temp[j - 1] == ' ') j--; 
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    int t;
    char str[81];
    scanf("%d\n", &t);

    while (t--) {
        fgets(str, 81, stdin);
        str[strcspn(str, "\n")] = '\0';
        chuanHoa(str);
        printf("%s\n", str);
    }

    return 0;
}


