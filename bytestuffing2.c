#include <stdio.h>
#include <string.h>

int main() {
char start[10];
char end[10];
char ch[100];
char stuff[10];
char out[100];
char esc[] = "esc";
int k = 0;
printf("Enter the characters :");
scanf("%s", ch);
printf("Enter a charcter that represents starting delimiter:");
scanf("%s", start);
printf("Enter a character that represents ending delimiter:");
scanf("%s", end);
printf("Enter a character that is to be stuffed:");
scanf("%s", stuff);

for (int i = 0; i <strlen(start); i++) {
out[k] = start[i];
k++;
}

for (int i = 0; i < strlen(ch); i++) {
int count = 0;
for (int j = i, l = 0; j < (i + strlen(start)); j++,l++) {
if (ch[j] == start[l]) {
count++;
} else {
break;
}
}
if (count == strlen(start)) {
for (int m = 0; m < strlen(stuff); m++) {
out[k] = stuff[m];
k++;
}
}
count = 0;
for (int j = i, l = 0; j < (i + strlen(end)); j++,l++) {
                        if (ch[j] == end[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(end)) {
                        for (int m = 0; m < strlen(stuff); m++) {
                                out[k] = stuff[m];
                                k++;
                        }
                }
count = 0;
for (int j = i, l = 0; j < (i + strlen(esc)); j++,l++) {
                        if (ch[j] == esc[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(esc)) {
                        for (int m = 0; m < strlen(stuff); m++) {
                                out[k] = stuff[m];
                                k++;
                        }
                }

out[k] = ch[i];
k++;
}

for (int i = 0; i <strlen(end); i++) {
                out[k] = end[i];
                k++;
        }

out[k] = '\0';

printf("\nAfter Stuffing: %s\n", out);
return 0;
}
