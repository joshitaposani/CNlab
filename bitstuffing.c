#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	printf("Enter bit string\n");
	scanf("%s",str);
	char newstr[100];
	char flag[10] = "01111110";
	int j = 0;
	int count  = 0;
	for (int i = 0; i < strlen(str);i++){
		if(str[i] == '0') {
			count = 0;
			newstr[j] = str[i];
			j++;
		}
		else{
		     count++;
		     newstr[j] = str[i];
		     j++;
		     if (count == 5){
			  newstr[j] = '0';
                          j++;
                         count = 0;

		}
	}
	}
	strcat(newstr,flag);
	strcat(flag,newstr);
	printf("%s\n",flag);
}


