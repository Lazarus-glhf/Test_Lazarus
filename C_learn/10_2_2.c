#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int i,j;
	int n = 5;
	int A[5]={1,2,3,4,5};

	for(i=n-1;i>=0;i--){
		for(j=1;j<i;j++){
			if(A[j]>A[j+1]){
				//A[j]<->A[j+1];
			}
		}
	}
}