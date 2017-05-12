#include<stdio.h>
int main(){
	int b;
	int a[b];
	int x;
	scanf("%d",&b);
	for(int k=0;k<b-1;k++){
		int n;
		scanf("%n",&n);
		a[k]=n;
	}
	x=a[b-1];
	int i=-1;
	for(int j=0;j<b-1;j++){
		if(a[j]<=a[b-1]){
			i=i+1;
			int temp;
			temp = a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	int Tem;
	Tem=a[i+1];
	a[i+1]=a[b-1];
	a[b-1]=Tem;
	for(int h=0;h<b-1;h++){
		printf("%d",a[h]);
	}
	return 0;
}
