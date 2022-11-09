
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 100
void nhap(int &n,int a[]);
//void Phatsinhmang(int n,int a[]);
void in(int n,int a[]);
int ghimangvaofile(char *file,int n,int a[]);
int docfile(char *file,int &n,int a[]);
int main(){
	int n,a[Max],x;
	char *file;
	nhap(n,a);
//	Phatsinhmang(n,a);
	in(n,a);
	ghimangvaofile(file,n,a);
	docfile(file,n,a);
}
void nhap(int &n,int a[]){
	printf("\nNhap do lon cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
/*/void Phatsinhmang(int n,int a[]){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=rand();
	}
} /*/
void in(int n,int a[]){
	for(int i=0;i<n;i++)
	printf("\na[%d]= %d",i,a[i]);
}

int ghimangvaofile(char *file,int n,int a[]){
	FILE *p=fopen("file","w");
	if(p==NULL){
		return 0;
	}
	for(int i=0;i<n;i++){
		fprintf(p,"\n%d",a[i]);
	}
	fclose(p);
	return 1;
}
int docfile(char *file,int &n,int a[]){
	FILE *p=fopen("file","r");
	if(p==NULL){
		return 0;
	}
	int i=0;
	while(!feof(p)){
		fscanf(p,"%d",&a[i]);
		i++;
	}
	n=i;
}

