#include<stdio.h>
	int main(){
		int arry[]= {2,52,12,34,52,66,5}; 
		int s,found=0;
		printf("enter number want to search in array\n");
		scanf("%d",&s);
	
		for (int i=0;i<7;i++){
			if (s==arry[i]){
				printf("arry %d found at Position %d",i+1,s);
				found=1;
				break;		
			}		
		
		}
			if (found ==1){
					
			}else{
				printf("Number NOT found\n");
				
			}
		
	}
