#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int main()
{
    queue<int> e;
    deque<int> f;
    int N;
    cin>>N;
    e.push(N);

    while(N)
    {
        cin>>N;
        e.push(N);
    }
    N=e.front();
    while(N)
    {
        for(int i=1; i<=N; i++)
        {
            f.push_back(i);
        }
        cout<<"Discarded cards: ";
        while(f.size()!= 2)
        {
           cout<<f.front()<<", ";
           f.pop_front();
           f.push_back(f.front());
           f.pop_front();
        }
        cout<<f.front()<<endl;
        f.pop_front();
        cout<< "Remaining card: "<<f.front()<<endl;
        f.pop_front();
        e.pop();
        N=e.front();
    }
    return 0;
}
