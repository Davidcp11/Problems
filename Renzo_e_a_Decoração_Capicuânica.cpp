#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int quant, n, ni, b, contador;
    deque<int> num;

    cin >> quant;
    while (quant--)
    {
        cin>>n;
        ni = n;
        contador = 0;
        for (b = 2; b <= 16; b++)
        {
            do
            {
                num.push_back(n % b);
                n = (n - n % b) / b;
            } while (n);
            for (;;)
            {
                if (num.front() == num.back() && num.size() > 1)
                {
                    num.pop_back();
                    num.pop_front();
                }
                else
                    break;
            }
            if (num.size() <= 1)
            {
                if (contador == 0)
                    cout << b;
                else
                    cout << " " << b;
                contador += 1;
            }
            num.clear();
            n = ni;
        }
        if (contador == 0)
            cout << "-1";
        cout << "\n";
    }
    return 0;
}
