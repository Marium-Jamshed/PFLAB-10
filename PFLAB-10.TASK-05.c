#include<stdio.h>
#include<string.h>

int main(){
	int n,i;
	printf("\nEnter number of students: ");
	scanf("%d",&n);
	int total=0;
	char names[n][100];
	int marks[n];
	for(i=0;i<n;i++){
		printf("\nEnter name of student %d ",i+1);
		scanf(" %[^\n]",names[i]);
		printf("\nEnter marks of %s: ",names[i]);
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	float avg=total/n;
	int maxindex=0;
	for(i=0;i<n;i++){
		if(marks[i]>marks[maxindex]){
			maxindex=i;
		}
	}
	 printf("\nHighest scorer is %s with %d marks.\n",
	  names[maxindex], marks[maxindex]);
	  printf("\nThe average is %.2f",avg);
	return 0;
}
