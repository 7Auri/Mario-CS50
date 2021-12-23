#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int sayi= get_int("Yükseklik Giriniz:\n");
  if(sayi<9){
      for (int i = 0; i < sayi; i++) { 
          for (int j = sayi-i; j >1; j--) { 
              
               printf(" ");}
          for(int k=0;k<i+1;k++){
              printf("#");
          }     
               printf("\n"); 
  
    }
   }
  }
