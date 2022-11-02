#include<stdio.h>
#include<stdlib.h>


   int main(){
            
            int ilk,ilk2,toplam=0,toplam2=0,karetoplam=0,fark;
			
			for(ilk=0;ilk<=100;ilk++)
			{
				toplam+=ilk;
				toplam2=toplam*toplam;
			}  
			
			    printf("Toplamin Karesi= %d\n\n",toplam2);
			 
			for(ilk2=0;ilk2<=100;ilk2++)
			{
                karetoplam=karetoplam+ilk2*ilk2;
					    
			}    
			    printf("Kareleri Toplami= %d\n\n",karetoplam);
			 
			 fark=toplam2-karetoplam;
			    
			    printf("Degerlerin Farki= %d",fark);
		
   
   
   
   
   }