#include <iostream>
using namespace std;

int getFactor(int Num)
{
    int F = 1;                         //1
    for (int k = 2; k <= Num; k++)     //n
    {                                 
        F *= k;                        //n
    }
    return F;                          //1
}

int getFarctor(int Num)
{
    if (Num <= 0)                         //O(1)
        return 1;
    else
        return Num * getFactor(Num - 1);  //O(n) * O(1) = O(n)
}

 private long fibonaci(long d) {

        if (d < 2)
            return d;                                   //O(1)
        else
            return  fibonaci(d - 2) + fibonaci(d - 1); // (n-2) + (n-1) = O(n)
    }

  private long fibonaciIter(long d)
        {
            long fibo0 = 0;                 //1
            long fibo1 = 1;                 //1
            long tp=0;                      //1
            for (int k = 0; k < d; k++) {   //n
                tp = fibo0 + fibo1;         //n
                fibo0 = fibo1;              //n
                fibo1 = tp;                 //n
  
            }
            return tp;                      //1
        }


int main()
{
    getFactor(5);
}