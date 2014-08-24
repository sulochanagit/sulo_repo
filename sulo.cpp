#include<stdio.h>

int ret(int k){
	if(k > 10 ){
		k++;
	}
	
	return k;
}
int main(){

printf("hello world \n");
ret(10);
return 0;
}
