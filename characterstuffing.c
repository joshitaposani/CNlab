#include<stdio.h>
#include<string.h>
int main() {
	char str[30];
	char sdeli;
	char edeli;
	int i = 0;
	printf("Enter the message\n");
	scanf("%s",str);
	printf("Enter the starting delimeter\n");
	scanf(" %c",&sdeli);
	printf("Enter the ending delimeter\n");
	scanf(" %c",&edeli);
	printf("%c ",sdeli);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == 'e' && str[i+1] == 's' && str[i+2] == 'c') {
			printf(" esc ");
		}
		else if (str[i] == sdeli) {
                        printf(" esc ");
                }
                else if(str[i] == edeli) {
                        printf(" esc ");
                }

		printf("%c",str[i]);
	}
	printf(" %c \n",edeli);
}
