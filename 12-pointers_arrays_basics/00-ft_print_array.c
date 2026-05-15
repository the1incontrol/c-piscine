#include<unistd.h>

void ft_print_array(int *tab, int size)
{
    int i = 0;

    while(i < size)
    {
        if(*tab >= 10)
        {
          char n1 = ((*tab) / 10) + '0';
          char n2 = ((*tab) % 10) + '0';

          write(1, &n1, 1);
          write(1, &n2, 1);
        }
        
        if(i < size - 1)
        {
            write(1,", ",2);
        }  
        tab++;
        i++;
    }
}


int main(void)
{
    int arr[3] = {10, 20, 30};

    ft_print_array(arr, 3);
    write(1,"\n",1);

    return 0;
}