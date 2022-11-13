#include<stdio.h>
#define N 20
void Merge(int a[], int p,  int q,  int r);
void MergeSort(int a[], int p,int r)
{ 
    int q;
    if (p<r )
    {
        q= (p+r)/2;
        MergeSort(a,p,q);
        MergeSort(a,q+1,r);
        Merge(a,p,q,r);
    }
}
void Merge(int a[], int p, int q, int r)
{ 
    int b[20],L1,R1,i;
    L1= p; R1= q+1; i=p;
    while ( (L1 <=q) && (R1<=r))
    { 
        if (a[L1] <a [R1])
        {
            b[i]= a[L1];
        L1= L1 +1;
        i= i+1; 
        }
        else 
        { 
            b[i]= a[R1];
            R1= R1 +1;
            i= i+1;
        }
    }
    while (L1<=q)
    {
         b[i]= a[L1];
        L1= L1 +1;
        i= i+1;
    }
    while (R1<=r)
    {
        b[i]= a[R1];
        R1= R1 +1;
        i= i+1;
    }
    for (i= p; i<=r; i++)
        a[i]= b[i];

}
int main()
{
    int a[N],i,j;
    printf("enter len of array");
    scanf("%d",&j);
    for(i=0;i<j;i++)
        scanf("%d ",&a[i]);
    MergeSort(a,0,j-1);
    for(i=0;i<j;i++)
        printf("%d ",a[i]);
}
