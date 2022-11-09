#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define Max 100001
void nhap(int &n,int a[]);
int timkiemtt(int x,int n,int a[]);
int timkiemnp(int n,int a[],int x,int dau,int giua,int cuoi);
int main(){
	int n,a[Max];
	int dau=0,cuoi=n-1,giua=(dau+cuoi)/2;
	nhap(n,a);
	clock_t star,end;
	start = clock();
	timkiemtt(x,n,a);
	end = clock();
	double t= end-start;
	printf("\nThoi gian tim kiem tuyen tinh la %f ",t);
	start = clock();
	tim(n,a,x,dau,giua,cuoi);
	end = clock();
	double t= end-start;
	printf("\nThoi gian tim kiem tuyen tinh la %f ",t);
}
void nhap(int &n,int a[]){
	printf("\nNhap do lon cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int timkiemtt(int x,int n,int a[]){
	int i=0;
	while(i<x&&a[i]!=x){
		i++;
	}
	if(i<n)
		return i;
	return -1;
}
int timkiemnp(int n,int a[],int x,int dau,int giua,int cuoi){
	if(a[dau]<a[cuoi]){
		if(a[giua]==x)
			return giua;
		if(x>a[giua])
			return tim(n,a,x,giua+1,giua,cuoi);
		return tim(n,a,x,dau,giua,giua-1);
	}
	return -1;
}
