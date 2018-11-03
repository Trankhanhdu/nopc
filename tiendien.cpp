#include<stdio.h>
#include<conio.h>
main(){
	int scu,smoi,tien,tieuthu;
	printf("Nhap chi so dien moi");
	scanf("%d",&smoi);
    printf("Nhap chi so dien cu");
	scanf("%d",&scu);
	tieuthu=smoi-scu;
	if(tieuthu>0&&tieuthu<50)
		tien=tieuthu*1500;
	if(tieuthu>=50&&tieuthu<=100)
	    tien=49*1500+(tieuthu-49)*2000;
	else if(tieuthu>100)
	    tien=49*1500+51*2000+(tieuthu-100)*3000;
	else printf("xin ban hay nhap lai ");
printf("so tien phai tra la %d",tien);
}
