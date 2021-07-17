// bubble sort
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,arr[10],temp;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
            	temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
			}
            
        }
    }

    printf("\n Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
}
