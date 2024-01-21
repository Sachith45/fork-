#include<stdio.h>
#include<unistd.h>

int main(){
	//printf("PARENT");
	int pro1=fork();
	if(pro1==0){
		printf("CHILD1\n");
		printf("CHILD1 id %d\n",getpid());
		printf("CHILD1's parent id %d\n\n",getppid());
	}
	else{
		int pro2=fork();
		if(pro2==0){
			printf("CHILD2\n");
			printf("CHILD2 id %d\n",getpid());
			printf("CHILD2's parent id %d\n\n",getppid());
		}
		else{
			printf("PARENT\n");
			printf("PARENT id %d\n\n",getpid());
			sleep(1);
		}
	}
	return 0;
}
