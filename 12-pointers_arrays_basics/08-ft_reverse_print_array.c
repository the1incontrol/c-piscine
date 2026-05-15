#include<unistd.h>


void ft_reverse_print_array(int *tab, int size)
{
    int i = size - 1;
    
    while(i >= 0)
    {
        char c = tab[i] + '0';
	write(1, &c, 1);
	i--;
    }    
}	


int main(void)
{
    int arr[4] = {2, 3, 4, 5};

    ft_reverse_print_array(arr, 4);
    
    write(1,"\n",1);

  return 0;    
}
