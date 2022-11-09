#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 100
//void nhap(int &n,int a[]);
//void in(int n,int a[]);
void Phatsinhmangtang(int n,int a[]);
int tim(int n,int a[],int x,int dau,int giua,int cuoi);
int main(){
	int n,a[Max],x;
	int dau=0,cuoi=n-1,giua=(dau+cuoi)/2;
//	nhap(n,a);
//	in(n,a);	
	Phatsinhmangtang(n,a);
	printf("\nNHap gia tri x can tim la : ");
	scanf("%d",&x);
	int kq=tim(n,a,x,dau,giua,cuoi);
	if(kq==-1)
		printf("\nGia tri X can tim khong co trong mang");
	else
		printf("\nGia tri x  co ");
	return 0;
} 
/*/void nhap(int &n,int a[]){
	printf("\nNhap do lon cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void in(int n,int a[]){
	for(int i=0;i<n;i++)
	printf("\na[%d]= %d",i,a[i]);
}/*/
void Phatsinhmangtang(int n,int a[]){
	srand(time(NULL));
	a[0]=rand()%50;
	for(int i=0;i<n;i++){
		a[i]=a[i-1]+rand()%10;
	}
}
int tim(int n,int a[],int x,int dau,int giua,int cuoi){
	if(a[dau]<a[cuoi]){
		if(a[giua]==x)
			return giua;
		if(x>a[giua])
			return tim(n,a,x,giua+1,giua,cuoi);
		return tim(n,a,x,dau,giua,giua-1);
	}
	return -1;
}
