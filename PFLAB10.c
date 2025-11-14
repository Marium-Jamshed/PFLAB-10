#include<stdio.h>
#include <string.h>
int main(){
	char arr[4][10]={"Marium","Ilham","Emaan","Wajiha"};	

int i;
int j;
\

for(i=0;i<4;i++){
	puts(arr[i]);
	for(j=0;j<strlen(arr[i]);j++){
		printf(" %c ",arr[i][j]);
		printf("\n");
			
}
printf(" size %d",strlen(arr[i]));
printf("\n");
}

	
	
	return 0;
}
