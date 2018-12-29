#include<string.h>
#include<stdio.h>

void rev(char ch[], int r[])
{
    int len = strlen(ch)-1;
    for(int i = 0; i<=len; i++)
    {
        r[len-i] = ch[i] - '0';
    }
}

int main()
{
    int i,j,k;
    char s1[250], s2[250];
    int res[500], s1Rev[250], s2Rev[250];

    while(scanf("%s",s1)+scanf("%s",s2)==2)
    {

        for(i=0; i<250; i++)
        {
            s1Rev[i] = 0;
            s2Rev[i] = 0;
        }
        for(i=0;i<500; i++)
        {
            res[i] = 0;
        }

        rev(s1, s1Rev);
        rev(s2, s2Rev);

        int l1 = strlen(s1), l2 = strlen(s2);

        for(i = 0; i<l2; i++)
        {
            for(j = 0; j<l1; j++)
            {
                k = i+j;
                res[k] +=  s1Rev[j] * s2Rev[i];
                res[k+1] += res[k] / 10;
                res[k] = res[k] % 10;
            }
        }
        for(i=499; i>=0 && !res[i]; i--);
        if(i==-1)
        {
            printf("0");
        }
        for(;i>=0; i--)
        {
            printf("%d", res[i]);
        }
        printf("\n");
    }
}
