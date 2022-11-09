#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 1000
typedef struct sv{
	char mssv[20];
	char ten[20];
	char gioitinh[15];
	char diachi[20];
	float dtb;
};
void nhap(int &n,sv ds[]);
void in(int n, sv ds[]);
void swap(sv &a,sv &b);
void sapxep(int b,sv ds[]);
int tim(int n,sv ds[],int dau,int giua,int cuoi,int x[]);
int main(){
	sv ds[max];
	int n,dau,giua,cuoi,x[20];
	nhap(n,ds);
	in(n,ds);
	sapxep(n,ds);
	tim(n,ds,dau,giua,cuoi,x);
}
void nhap(int &n,sv ds[]){
	printf("\nNhap so sinh vien : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("\nNhap MSSV sinh vien : ");
		gets(ds[i].mssv);
		fflush(stdin);
		printf("\nNhap ten cua sinh vien : ");
		gets(ds[i].ten);
		fflush(stdin);
		printf("\nNhap gioi tinh cua sinh vien : ");
		gets(ds[i].gioitinh);
		fflush(stdin);
		printf("\nNhap dia chi cua sinh vien : ");
		gets(ds[i].gioitinh);
		fflush(stdin);
		printf("\nNhap dtb cua sinh vien thu %d : ",i+1);
		scanf("%f",&ds[i].dtb);	
	}
}
void in(int n,sv ds[]){
	for(int i=0;i<n;i++){
		printf("\nMSSV la : %s",ds[i].mssv);
		printf("\nTen sinh vien %s",ds[i].ten);
		printf("\nGioi tinh sinh vien %s",ds[i].gioitinh);
		printf("\nDiem TB cua SV %d la : %.2f",i+1,ds[i].dtb);
}
}
void swap(sv &a,sv &b){
	sv c;
	c=a;
	a=b;
	b=c;
}
void sapxep(int n,sv ds[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].mssv<ds[j].mssv)
				swap(ds[i].mssv,ds[j].mssv);
		}
	}
}
int tim(int n,sv ds[],int dau,int giua,int cuoi,int x[]){
	dau=0,cuoi=n-1;
	giua=(dau+cuoi)/2;
	fflush(stdin);
	printf("\nNhap Mang X can tim : ");
	gets(x[20]);
	fflush(stdin);
	if(dau<=cuoi){
 		if(x==ds[giua])
			return x;
		if(x>ds[giua])
			return tim(n,ds[],giua+1,giua,cuoi);
		return tim(n,ds[],dau,giua,giua-1);
}
	return -1;
}
