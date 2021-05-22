#include <stdio.h>
#include <stdlib.h>

/*main function. calles other functions and prints stuff to screen
 * if you are reading this then this is the file you want to compile*/

int main(){
	int hasUsedBefore;

	printf("thankyou for running a wullie-coin node\n");
	printf("If you are using this you have probibaly read the guide on how to use this\n");	
	printf("If not colse the node read it and ccme back after\n");	
	printf("if you have run a node on this computer before or have copied the config file press 1 if not then press 0\n");
	scanf("%d", &hasUsedBefore);

	return 0;
}
int chekingUserConfig(hasUsedBefore){

	if(hasUsedBefore == 0){
		printf("generating new config file\n");
	
	}
	else if(hasUsedBefore == 1){
		printf("loading config file\n");
	}

	else{
	
		printf("unknowen command\n");
	}
	

	return 0;
}



