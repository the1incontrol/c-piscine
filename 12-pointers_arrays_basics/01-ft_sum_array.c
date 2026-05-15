#include<unistd.h>

int ft_sum_array(int *tab, int size)
{
    int sum = 0;
    int i = 0;

    while(i < size)
    {
        sum = sum + *tab;
        tab++;
        i++;
    }
    return sum;
}


int main(void)
{
    int arr[3] = {1, 2, 3};

    int result = ft_sum_array(arr, 3);
    
    char c = result + '0';
    
    write(1, &c, 1);
    write(1,"\n",1);
    
  return 0;
}