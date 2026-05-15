#include<unistd.h>

int ft_find_min(int *tab, int size)
{
   int i = 0;
   int min = *tab;

   while(i < size)
   {
      if(*tab < min)
      {
	 min = *tab;     
      }
     tab++;
     i++;     
   }
  return min;   
}


int main(void)
{
   int arr[5] = {7, 2, 9, 1, 5};
  
   int result = ft_find_min(arr, 5);
  
   char c = result + '0';

   write(1, &c, 1);
   write(1,"\n",1);

 return 0;  
}

