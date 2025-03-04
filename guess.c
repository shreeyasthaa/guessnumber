//number guessing game
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,i,value,a;
	printf("\t\t\t***Welcome to the guessing game!!***");
	printf("\n\n The following are some of the rules of the game:");
	printf("\n 1. The player must guess only 1 number from 1 to 100");
	printf("\n 2. The player musnt cheat");
	printf("\n 3. The guessed number may only be entered once.");
	printf("\n Alright let the games begin!!");
    srand(time(NULL));
	value=rand()%100+1;
	again:
	printf("\n\nPlease select the difficulty level: ");
	printf("\n1. Easy (10 chances)");
	printf("\n2. Medium(5 chances)");
	printf("\n3. Difficult(3 chances)");
	printf("\n\n Enter your choice: ");
	scanf("%d",&a);
	switch(a){
		case 1: 
		  printf("Great! You have selected easy. Lets start the game!\n");
		  for(i=0;i<10;i++){
		  	printf("\nEnter your guess: ");
		    scanf("%d",&num);
		    if(num==value){
		    	printf("Congratulations! you have guessed the number");
		    	exit(0); 
			}
			else if(num<value){
				printf("Incorrect! The number is greater than %d",num);
			}
			else{
				printf("Incorrect! The number is lesser than %d",num);
			}
		    if(i==9){
		    	printf("Youre out of tries!! Better luck next timee");
			}
		  }
		  break;
		case 2:
		  printf("Great! You have selected medium. Lets start the game!\n");
		    for(i=0;i<5;i++){
		  	printf("\nEnter your guess: ");
		    scanf("%d",&num);
		    if(num==value){
		    	printf("Congratulations! you have guess the number");
		    	exit(0); 
			}
			else if(num<value){
				printf("Incorrect! The number is greater than %d",num);
			}
			else{
				printf("Incorrect! The number is lesser than %d",num);
			}
		    if(i==4){
		    	printf("Youre out of tries!! Better luck next timee");
			}
		  }
		  break;
		case 3:
		printf("Great! You have selected difficult. Lets start the game!\n");
		  for(i=0;i<3;i++){
		  	printf("\nEnter your guess: ");
		    scanf("%d",&num);
		    if(num==value){
		    	printf("Congratulations! you have guessed the number");
		    	exit(0); 
			}
			else if(num<value){
				printf("Incorrect! The number is greater than %d",num);
			}
			else{
				printf("Incorrect! The number is lesser than %d",num);
			}
		    if(i==2){
		    	printf("\nYoure out of tries!! Better luck next timee");
			}
		  }
		break;
		default:
		printf("Invalid choice! Please select between 1 to 3 to start the game\n");
		goto again;	
	}
	return 0;
}
