#include <iostream>

using namespace std;

int main()
{
	// 1 0 ? 1 0
	// ? ? ? 0 1

	int cas;
	cin >> cas;
	while(cas--)
	{
		char first[5], second[5];
		int first_first_cnt = 0;
		int first_second_cnt = 0;
		int second_first_cnt = 0;
		int second_second_cnt = 0;
		int flag = 0;
		int count = 0;

		for(int i = 0; i < 5; i++)
		{
			cin >> first[i] >> second[i];
		}

		for(int i = 0; i < 5; i++)
		{
			
			if(first[i] == '1' || first[i] == '?')
			{
				first_first_cnt ++ ;
				
			}
			if(first_first_cnt - first_second_cnt > 5 - i)
			{
				cout << 2*i + 1 << endl;
				flag = 1;
				break;
			}
			if(second[i] == '1')
			{
				first_second_cnt ++ ;
				
			}
			if(first_first_cnt - first_second_cnt > 4 - i)
			{
				cout << 2*i + 2 << endl;
				flag = 1;
				break;
			}


			if(first[i] == '1')
			{
				second_first_cnt ++ ;
				//cout << "sfc " << second_first_cnt << endl;
			}
			if(second_second_cnt - second_first_cnt > 4 - i)
			{
				cout << 2*i + 1 << endl;
				flag = 1;
				break;
			}
			if(second[i] == '1' || second[i] == '?')
			{
				second_second_cnt ++ ;
				//cout << "ssc " << second_second_cnt << endl;
			}
			if(second_second_cnt - second_first_cnt > 4 - i)
			{
				cout  << 2*i + 2 << endl;
				flag = 1;
				break;
			}
		}

		if(!flag)
			cout << "10"<< endl;


	}

	return 0;
}