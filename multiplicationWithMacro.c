#include<stdio.h>
#define o(i,j)\
printf("%d*%d = %2d\n",i,j,i*j);
#define m(i)\
o(i,1) o(i,2) o(i,3) o(i,4) o(i,5) o(i,6) o(i,7) o(i,8) o(i,9)
#define i m(1) m(2) m(3) m(4) m(5) m(6) m(7) m(8) m(9)
int main()
{
    i
    return 0;
}
