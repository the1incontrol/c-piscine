#include<unistd.h>

int ft_array_contains(int *tab, int size, int nb)
{
    int i = 0;

    while(i < size)
    {
       if(*tab == nb)
       {
	  return (1);     
       }	
      tab++;
     i++;     
    }
  return 0;    
}


int main(void)
{
    int arr[4] = {4, 7, 2, 9};
   
    int result = ft_array_contains(arr, 4, 7);

    char c = result + '0';

    write(1, &c, 1);
    write(1,"\n",1);

  return 0;    
}	
