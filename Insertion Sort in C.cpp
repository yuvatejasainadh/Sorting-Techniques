#include <stdio.h>
void InsertionSort(int A[],int s){
	int i,j,key;
	for (i=1;i<s;i++){
		j=i-1;
		key=A[i];
	
			while (j>=0 && key<A[j]){
			A[j+1]=A[j];
			j--; 
			}
			A[j+1]=key;
		}
		
	}
int main(){
	int n,i;
	scanf("%d",&n);
	int x[n];
	for (i=0;i<n;i++){
		scanf("%d",&x[i]);
	}


	InsertionSort(x,n);
	// After Sorting
		for (i=0;i<n;i++){
		printf("%d ",x[i]);
	}
}
