//12002523	fuwutu	1284	Accepted	164K	32MS	C++	557B	2013-08-18 12:33:13
#include <cstdio>

int main()
{
    int p;
    while (scanf("%d", &p) != EOF)
    {
        int n = p - 1;
        int count = n;
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                do
                {
                    n /= i;
                } while (n % i == 0);
                count = count / i * (i - 1);
            }
        }
        if (n != 1)
        {
            count = count / n * (n - 1);
        }
        printf("%d\n", count);
    }
    return 0;
}
