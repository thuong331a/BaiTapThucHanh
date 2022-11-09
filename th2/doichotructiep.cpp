#include<stdio.h>
#define max 1000 
void nhapmang(int &n,int a[]);
void swap(int &a,int &b);
void doichotructiep(int n,int a[]);
int main(){
	int n, a[max];
	nhapmang(n,a);
	doichotructiep(n,a);
}
void nhapmang(int &n,int a[]){
	printf("\nnhap do lon cua mang n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}
void doichotructiep(int n,int a[]){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
	printf("\nMang sau khi sap xep : ");
	for(int i=0;i<n;i++){
		printf("\na[%d]= %d",i,a[i]);
	}
}

