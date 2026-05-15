#include<unistd.h>

int ft_first_occurence(int *tab, int size, int nb)
{
     int i = 0;
    
     while(i < size)
     {
	 if(*tab == nb)
	 {
	    return (i);	 
	 }
       tab++;
      i++;       
     }
   return (-1);     
}	


int main(void)
{
   int arr[5] = {4, 7, 2, 7, 9};

   int result = ft_first_occurence(arr, 5, 7);

   char c = result + '0';

   write(1, &c, 1);
   write(1,"\n",1);

 return 0;   
}	
