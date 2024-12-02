#include<stdio.h>
    int main(){
    	int k,j;
	int arr[]={18,23,7,11,4};
	int a,n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		k=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>k){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=k;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
