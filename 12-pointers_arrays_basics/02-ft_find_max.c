#include<unistd.h>

int ft_find_max(int *tab, int size)
{
    int i = 0;
    int max = *tab;

    while(i < size)
    {
        if(*tab > max)
        {
            max = *tab;
        }
        tab++;
       i++; 
    }
    return max;
}


int main(void)
{
    int arr[4] = {4, 3, 9, 7};
    int result = ft_find_max(arr, 4);

    char c = result + '0';
    write(1, &c, 1);
    write(1,"\n",1);

  return 0;  
}