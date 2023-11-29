#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
int main(){
	int count=0;
	do{
	printf("**************MENU****************\n");
	printf("1. Nhap vao chuoi ky tu\n"); 
	printf("2. In ra do dai chuoi va noi dung vua nhap\n");
	printf("3. In ra chuoi dao nguoc\n");
	printf("4. In ra so luong chu cai trong chuoi\n");
	printf("5. In ra so luong chu so trong chuoi\n");
	printf("6. In ra so luong ky tu dac biet trong chuoi\n");
	printf("7. Thoat\n"); 
	int choice;
	int str[]= {};
	scanf("%d", &choice); 
	switch(choice){
		case 1:
			fflush(stdin);
			printf("Nhap vao chuoi ky tu\n");
			scanf("%s", &str);
			break;
		case 2:
			printf("Chuoi ban vua nhap co do dai %d\n",strlen(str));
			printf("Noi dung chuoi va nhap: %s\n",str);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:	
		exit(0); 
		default:
		printf("Vui long nhap dung\n");
			break; 
	} 
	} while(1==1); 
} 
