//array deletion
#include <stdio.h>
int main() 
{
  int ar[20],n,ele,i;
  printf("Enter the number of elements : \n");
  scanf("%d",&n);
  printf("Enter the elements : \n");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("Enter the element to be deleted : \n");
  scanf("%d",&ele);
  //logic
  if(ele>=n+1)
    printf("Deletion not possible! \n");
  for(i=ele-1;i<n-1;i++)
    ar[i]=ar[i+1];
  //result
  printf("resultand array : \n");
  for(i=0;i<n-1;i++)
    printf("%d",ar[i]);
    
  
  return 0;
}