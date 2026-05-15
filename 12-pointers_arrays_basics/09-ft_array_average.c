#include<unistd.h>

int ft_array_average(int *tab, int size)
{ 
  int i = 0;
  int sum = 0;

   while(i < size)
   {
      sum = sum + *tab;
      tab++;
      i++;      
   }

  return (sum / size); 
}	


int main(void)
{
   int arr[3] = {2, 4, 6};

   int result;

  result = ft_array_average(arr, 3);
  char c = result + '0';

  write(1, &c, 1);
  write(1,"\n",1);

  return 0; 
}
