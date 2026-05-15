#include<unistd.h>

int ft_count_occurence(int *tab, int size, int nb)
{
    int i = 0;
    int count = 0;

    while(i < size)
    {
	if(*tab == nb)
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
    int arr[6] = {1, 5, 2, 5, 7, 5};
  
    int result = ft_count_occurence(arr, 6, 5);

    char c = result + '0';

    write(1, &c, 1);
    write(1,"\n",1);

  return 0;    
}	
