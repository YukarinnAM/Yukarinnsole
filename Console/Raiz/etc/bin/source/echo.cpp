#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	if(argc<2){
		printf("\n");
		exit(0);
	}else{
		printf(argv[1]);
		printf("\n");
		exit(0);
	}
}
