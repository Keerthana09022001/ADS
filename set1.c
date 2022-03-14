#include<stdio.h>
#include<stdlib.h>
int a[10],b[10],c[20],i,n,m,choice;
void main()
{
    printf("\nEnter the size of first array :\n");
    scanf("%d",&n);
    printf("\nEnter the elements in first array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the size of 2nd array :\n");
    scanf("%d",&m);
    printf("\nEnter the elements in 2nd array:\n");
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    while(1)
    {
        printf("\nMENU\n");
        printf("\n1.Union\n2.Intersection\n3.Differnce\n4.Exit\n");
        printf("e\Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:if(n==m)
            {
                setUnion();
            }
            else{
                    printf("must be same length");
        }
        break;
           case 2:if(n==m)
            {
                setIntersection();
            }
            else{
                    printf("must be same length");
       }
       break;
       case 3:if(n==m)
            {
                setDifference();
            }
            else{
                    printf("must be same length");
       }
       break;
       case 4:
        exit(0);
        break;
       default:
        printf("Invalid choice");
    }

    }



}
void setUnion()
{
    printf("after union:\t");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]||b[i];
        printf("%d",c[i]);
    }

}
void setIntersection()
{
    printf("after intersection:\t");
    for(i=0;i<n;i++)
    {
         c[i]=a[i]&&b[i];
        printf("%d",c[i]);
    }
}
void setDifference()
{
    printf("after differnce:\t");
    for(i=0;i<n;i++)
    {
         c[i]=!a[i]&&b[i];
        printf("%d",c[i]);
    }
}
