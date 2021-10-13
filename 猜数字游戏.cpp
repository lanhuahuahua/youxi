#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(){
	int a=rand()%100+1;
	int b;
	while(1){
	printf("请输入你猜想的值：\n");
	scanf("%d",&b);
	
		if(b<a) 
		printf("它小了\n");
		else if(b=a){
		
		printf("它对了\n");
		break;}
		else if(b>a)
		printf("它大了\n"); 
	} 
}
void lan(){
	printf("----lanhuahuahua的猜数字游戏----\n");
	printf("--------------------------------\n");
	printf("----1.继续游戏------------------\n");
	printf("----2.退出游戏------------------\n");
} 
int main(){
	int choice;
	lan();
	srand((unsigned int)time(NULL));
	while(1)
	{
	printf("请做出你的选择：\n");
	scanf("%d",&choice); 
	if(choice==1)
	{
		game(); 
	}
	 else if(choice==2)
	 {
	 	printf("您已退出lanhuahuahua的猜数字游戏！\n");
	 	break;
	}
	else if(choice!=1&&choice!=2)
	{
	printf("您是牛马吗？！请重新输入：\n");
	continue;
	} 
}
return 0;
}
