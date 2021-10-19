#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        for(int i=1;i<=k;i++)
        {
            if(n==m)
            {
                break;
            }
            else if(n>m)
            {
                m++;
            }
            else if(m>n)
            {
                n++;
            }
        }
        printf("%d\n",abs(n-m));
    }
	return 0;
}

