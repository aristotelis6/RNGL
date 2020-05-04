#include "math.h"


double power(double base, int exp)
{
    if(exp==1)return base;
    if(exp==0||base==1)return 1;
    if(base==0)return 0;
    if(base==-1)
    {
        switch(exp%2)
        {
            case 0:return abs(base);
            case 1:return base;
        }
    }
    double res=1;
    for(int i=0;i<exp;i++)
    {
        res=res*base;
    }
}

double abs(double num)
{
    if(num<0)return num*-1;
    if(num>=0)return num;
}
float abs(float num)
{
    if(num<0)return num*-1;
    if(num>=0)return num;
}
int abs(int num)
{
    if(num<0)return num*-1;
    if(num>=0)return num;
}