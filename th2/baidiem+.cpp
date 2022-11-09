#include<stdio.h>
#include<string.h>
#define max 50
typedef struct hs{
	char mssv[10];
	char hoten[20];
	char gioitinh[8];
	char diachi[20];
	int diemtb;
};
int main(){
	int n;
	hs a[max];
	nhapds(n,a);
}
void nhap(hs b){
	fflush(stdin);
	gets(b.mssv);
}
