#include<stdio.h>
#include<string.h>
int main(){
	char p[100];
	int vowels=0,consonants=0,digits=0,spaces=0,total=0;
	printf("\nWrite a sentence!: ");
	 scanf(" %[^\n]", p);   
	int i;
   for(i=0;p[i]!='\0';i++){
   	char ch=p[i];
   	if(p[i]=='A'||p[i]=='a'||p[i]=='e'||p[i]=='E'||p[i]=='I'||p[i]=='i'||p[i]=='O'||p[i]=='o'
	   ||p[i]=='u'||p[i]=='U')vowels++;
	   else if((p[i]>='A'&&p[i]<='Z')||(ch>='a'&&ch<='z')){
	   	consonants++;
	   }
	   if(p[i]>='0'&&p[i]<='9')digits++;
	   if(p[i]==' ')spaces++;
   }
   printf("\n----Statistics----");
   printf("\nvowels : %d\n",vowels);
   printf("consonants : %d\n",consonants);
   printf("digits : %d\n",digits);
   printf("spaces : %d\n",spaces);
   total=vowels+consonants+digits+spaces;
   printf("total : %d\n",total);
   
   
	
	
	return 0;
}

