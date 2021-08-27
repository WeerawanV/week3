#include<stdio.h>
int main (){
	int a,b,c;
	scanf_s("%d %d %d" ,&a ,&b ,&c);
	if(a<b && a<c){
		if(b<c){
		printf("%d" ,a+b);
		}
		else{
			printf("%d" ,a+c);
		}
	}
	else if(b<a && b<c){
		if(a<c){
			printf("%d" ,b+a);
		}
		else{
			printf("%d" ,b+c);
		}
	}
	else if(c<a && c<b){
		if(a<b){
			printf("%d" ,c+a);
		}
		else{
			printf("%d" ,c+b);
		}
	}
	return 0;
	}
