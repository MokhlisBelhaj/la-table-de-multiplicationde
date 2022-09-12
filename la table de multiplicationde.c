#include<stdio.h>
#include<math.h>
void tmultiplication(int a){
	int i,n,c=0,j,D=0;
	printf("la table de multiplications de %d est : \n",a);
	for(i = 1 ;i<=10;i++){
      printf("%d x %d = %d \n ",a,i,a*i); 

	}
	printf("------------------------------------------------\n");
	printf("veuillez entrer la denominateur:\n");
	scanf("%d",&n);
	
	

	
	for(j = 1; j<=10; j++){
		if((a*j) % n == 0){
			printf("%d \n ",a*j);
		  c++;
		}
	}
	if(c==0){
		printf("aucun\n");
	} 
			
}

int main()
{
	int N,d;
	do {
	   
         printf("veuillez entrer la valeur de N:");
         scanf("%d",&N);
         tmultiplication(N);
		printf("pour continer taper 1 \npour quiter taper 0 \n");	
		scanf("%d",&d);
		
	}while(d==1);
   
         printf( "bye");
    
     return 0;
}
