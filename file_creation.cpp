#include<stdio.h>

int main(){
	
	FILE *fp;
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	fp=fopen("Example.txt","w");
	for(int i=0;i<n;i++){
		fprintf(fp,"%d\n",i);
	}
	return 0;
		
}
