#include <stdio.h>
void tmultiplication(int a){
	int i,n,c=0;
	printf("la table de multiplications de %d est : \n",a);
	for(i = 0 ;i<=10;i++){
      printf("%d x %d = %d \n ",a,i,a*i);
      

	}
	printf("------------------------------------------------\n");
	printf("veuillez entrer la denominateur:\n");
	scanf("%d",&n);
	for(i = 0; i<=10; i++){
		if(a*i % n == 0&&a*i!=0){
			printf("%d x %d = %d \n ",a,i,a*i);
		c++;
		}else{
			i++;
		}
		
		
	}
	if(c==0){
		printf("aucun\n");
	} 
			
}

int main()
{
	start:;
    int N;
         printf("veuillez entrer la valeur de N:");
         scanf("%d",&N);
         tmultiplication(N);
         goto start;
    
     return 0;
}
