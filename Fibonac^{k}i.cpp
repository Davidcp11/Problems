#include <iostream>
#include <deque>


using namespace std;

deque<long long>fib;
deque<long long>soma;

int main()
{

    long long quant, j, contador, aux, k, N;
    cin>> quant;
    for(int i=0; i<quant; i++)
    {
        cin >> j, fib.push_back(j);
        cin >> j, fib.push_back(j);
    }
    while(fib.size()!=0)
    {
        k=fib.front();
        fib.pop_front();
        N=fib.front();
        fib.pop_front();
        if(N<=k)
            cout<<N-1<<endl;
        else
        {
            for(int i=0; i<k; i++)
                {soma.push_back(i);}
            contador=k+1;
            soma.push_back((long long)k*(long long)(k-1)/2);
            if(N==contador)
                cout<<soma.back()<<endl;
            else do{
                aux=2*(soma.back()) - soma.front();
                soma.push_back((2*(soma.back()) - soma.front()+1000007)%1000007);
                soma.pop_front();
                contador+=1;
            } while(contador!=N);
            long long aux2=soma.back()%1000007;
            cout<<aux2<<endl;
            soma.clear();
        }

    }
    return 0;
}
