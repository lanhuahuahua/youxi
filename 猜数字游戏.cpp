#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(){
	int a=rand()%100+1;
	int b;
	while(1){
	printf("������������ֵ��\n");
	scanf("%d",&b);
	
		if(b<a) 
		printf("��С��\n");
		else if(b=a){
		
		printf("������\n");
		break;}
		else if(b>a)
		printf("������\n"); 
	} 
}
void lan(){
	printf("----lanhuahuahua�Ĳ�������Ϸ----\n");
	printf("--------------------------------\n");
	printf("----1.������Ϸ------------------\n");
	printf("----2.�˳���Ϸ------------------\n");
} 
int main(){
	int choice;
	lan();
	srand((unsigned int)time(NULL));
	while(1)
	{
	printf("���������ѡ��\n");
	scanf("%d",&choice); 
	if(choice==1)
	{
		game(); 
	}
	 else if(choice==2)
	 {
	 	printf("�����˳�lanhuahuahua�Ĳ�������Ϸ��\n");
	 	break;
	}
	else if(choice!=1&&choice!=2)
	{
	printf("����ţ���𣿣����������룺\n");
	continue;
	} 
}
return 0;
}
