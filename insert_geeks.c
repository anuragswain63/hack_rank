#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *ar) {
    int i,j,a,key;
    
    for(i=1;i<ar_size;i++){
        
        
        key=ar[i];
        j=i-1;
        
        while(ar[j]>key && j>=0)
        {
            ar[j+1]=ar[j];
            
            j=j-1;
            
             for(a=0;a<ar_size;a++)
            {

                printf("%d ",ar[a]);

            }
        
         printf("\n");
            
        }
        
       ar[j+1]=key;
          
       if(ar[j-1]>ar[i] && i!=1){
        
        
         for(a=0;a<ar_size;a++){
                
                printf("%d ",ar[a]);
                
            }
        printf("\n");
    
        }
    
    }
    
   
        
          for(a=0;a<ar_size;a++)
         {

             printf("%d ",ar[a]);

        }
        
   
      
        
      
}
      
      
    



int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}
