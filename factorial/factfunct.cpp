#include<cassert>

int fact(int n)
{
int i, r1, r2;
assert(n>=0);
if (n==0) return(1);
else
{
    r1=1;
    for(i=1;i<=n;i++)
    {
        r2 = r1*i;
        assert (r2>=r1);
        r1=r2;
    }
}
return(r2);
}
