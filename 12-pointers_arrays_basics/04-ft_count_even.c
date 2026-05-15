#include<unistd.h>

int ft_count_even(int *tab, int size)
{
   int i = 0;
   int count = 0;
   while(i < size)
   {
       if(*tab % 2 == 0)
       {
	  count++;     
       }
      tab++;
     i++;       
   }
  return count;   
}


int main(void)
{
   int arr[5] = {1, 2, 4, 7, 8};
   
   int result = ft_count_even(arr, 5);

   char c = result + '0';

   write(1, &c, 1);
   write(1,"\n",1);

 return 0;   
}	
