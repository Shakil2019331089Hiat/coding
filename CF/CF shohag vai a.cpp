#include <iostream>

using namespace std;

int main()
{
    int cas;

    cin >> cas;

    while (cas --)
    {
        int len;
        cin >> len;
        long long ara[len];
        long long prdct;
        long long maxu = 0;
        
        for(int i = 0; i<len; i++)
        {
            cin >> ara[i];

            if(i>0)
            {
                prdct = ara[i]*ara[i-1];
                maxu = max(maxu,prdct);
            }
        }
        cout << maxu << endl;
    }
    return 0;
}