#include <stdio.h>
int main()
{
  char arr1[100]={"0"};
  char arr2[100]={"exit"};
  int flag=1;
  while(flag)
  {
      printf("enter your command>");
      scanf("%[^\n]%*c",arr1);
      if (strcmp(arr1,arr2)==0)
      {flag=0; break;}
      printf("your command>%s\n",arr1);
  }
printf("\nGood Bye :)\n" );

return 0;
}
