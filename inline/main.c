#include <stdio.h>    
// inline char* chooseParity(int i) 
char* chooseParity(int i) 
{  
    return (i % 2 > 0) ? "奇" : "偶";  
}   
  
int main()  
{  
    int i = 0;  
    for (i=1; i < 10; i++) 
    {  
        printf("i:%d    奇偶性:%s\n", i, chooseParity(i));      
    }  
} 