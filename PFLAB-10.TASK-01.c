#include<stdio.h>
#include <string.h>
int main(){
	char p[100];
	int upper,lower,special,number,digits;
	printf("\nEnter password: ");
	scanf("%s",p);
	int i;
	for(i=0;p[i]!='\0';i++){
		if(p[i]<='A'&&p[i]<='Z') upper++;	
	if(p[i]<='a'&&p[i]>='z')lower++;
	if(p[i]>='0'&&p[i]<='9') digits++;
	if(p[i]=='!'||p[i]=='#'||p[i]=='@'||p[i]=='%')special=1;
}
if(strlen(p)>=8&&upper&&lower&&digits&&special){
	printf("\nPassword is strong!");
}
else{
	printf("\nPassword is weak!");
}
return 0;
}
