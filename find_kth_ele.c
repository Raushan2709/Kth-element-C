// using bubble algorithm.
#include<stdio.h>
int main()
{
    int k;
    printf("enter the kth elements :\n");
    scanf("%d",&k);
    int n;
    printf("enter the no of elements :\n");   
    scanf("%d",&n);
     printf("enter the elements :\n");
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    printf("\n%d",ar[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j+1];             // this loop is executed for finding kth element entered  by user
                ar[j+1]=ar[j];
                ar[j]=temp;
            }
        }
    }
    printf("\nThe %dth term is:  %d",k,ar[k-1]);
    return 0;
}