#include<stdio.h>
#include<conio.h>
void Nhap(int array[100],int n){
	for (int i=0;i<n;i++){
        printf("mang[%d]",i);
        scanf("%d",&array[i]);
}
}
void in(int a[100],int n){
	for (int i=0;i<n;i++){
    	printf("Mang[%d] %d",i,a[i]);
	}
}
int gt(int n){
	int gt=1;
	for(int i=1;i<=n;i++){
		gt=gt*i;
  reuturn gt;
	}
}
int tonggt (int a[100],int n){
	 int s=0;
	for (int i=0;i<n;i++)
	 s=s+gt(a[i]);
	 return s;
}

int main(){
    int mang[100];
    int n;
    printf("Nhap n");
    scanf("%d",&n);
    Nhap(mang,n);
    in(mang,n);
    printf("tong giai thua  la %d",tonggt(mang,n));
}

