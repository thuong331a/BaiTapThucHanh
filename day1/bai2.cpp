#include<stdio.h>
#define Max 100
void nhap(int &n,int a[]);
int timkiem(int x,int n,int a[]);
int main(){
	int n,a[Max];
	nhap(n,a);
	int x;
	printf("\nNhap x Can Tim : ");
	scanf("%d",&x);
	timkiem(x,n,a);
	int kq=timkiem(x,n,a);
	if(kq==-1){
		printf("\nPhan tu khong co trong mang ");
	}
	else
		printf("\nPhan tu co trong mang tai vi tri %d ",kq);
}
void nhap(int &n,int a[]){
	printf("\nNhap do lon cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int timkiem(int x,int n,int a[]){
	int i=0;
	while(i<x&&a[i]!=x){
		i++;
	}
	if(i<n)
		return i;
	return -1;
}

