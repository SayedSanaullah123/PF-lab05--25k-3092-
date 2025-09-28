#include<stdio.h>
#include<string.h>
int main(){
	char user_name[20];
	char password[50];
	printf("      Instagram Login\n\nUser name = meer\nPassword =123123");
	printf("\nEnter User Name = ");
    scanf("%s",&user_name);
    
    if (strcmp(user_name, "meer")== 0){
    	printf("\nEnter  Password= ");
    	scanf("%s",&password);
	  if (strcmp(password,"123123")==0){
		printf("\nAccount Successfully  Login");
	} else {
		printf("\nIncorrect Password");
    } 
	}else {
		printf("User Name not Found");
	}
	
	return 0;
}
