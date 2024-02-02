/* 指標+函數 亂數陣列 排序 (jowlin591128) */
#include <thread>
#include <time.h>
#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[])
 {
 
    int array[6]; 
    int len = sizeof(array)/sizeof(int);     
    int temp;     
    
    srand(time(NULL)); 
    
    for (int i=0; i<len; i++)
	{
        array[i] =  rand() % 100;
       
    }
    
    for (int i=0; i<len; i++)
	{
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;    
    
    for (int j=0; j<len-1; j++) 
	{ 
        printf("\n");
        for (int i=j+1; i<len; i++) 
		{ 
            printf("\n");
            if( array[j] < array[i] ) 
			{                                   
                temp = array[j];      
                array[j] = array[i];  
                array[i] = temp;      
            }
            
            for (int k=0; k<len; k++) 
			{                
                if (k==j) 
				{
                    printf(" ");
                }
                if (k==i)
				{
                    printf(" ");
                }
                
                printf("%d",array[k]);                
            
                if (k==j) 
				{
                    printf(" ");
                }
                if (k==i) 
				{
                    printf(" ");
                }
                printf(" ");
                
            }
   
        }
        
    }
    return 0;
}