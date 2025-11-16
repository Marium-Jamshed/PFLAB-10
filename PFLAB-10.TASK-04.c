#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
     printf("\nWrite a sentence..");
     scanf("%[^\n]",str);
     
     int i;
     for(i=0;str[i]!='\0';i++){
     	char ch=str[i];
     	
     	if(ch>='a'&&ch<='z'){
     		str[i]=ch+3;
		 }
		 else if(ch>='A'&&ch<='Z'){
		 	str[i]=ch+3;
		 }
	 }
	 printf("\nEncrypted: %s",str);
	
	return 0;
}
