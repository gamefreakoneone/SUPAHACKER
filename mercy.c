    #include <stdio.h>
    int prime(int n);
    int sum();

    void main()
    {
        int i,j,n;
        printf("Prime numbers do you want?");
        scanf("%d",&n);
        prime(n);
    }

    int prime(int n)
    {
        int a[n],count=2,flag,b,i,j;
        a[0]=1;
        a[1]=2;
        for(b=3;count<n;b++)
        {
            for(i=2;i<=b/2;i++)
            {
                if(b%i==0)
                {
                    flag=0;
                    break;
                }
                
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d \t",a[i]);
        }
    }