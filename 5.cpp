/* Since 2520 is divisible by all numbers from 1 to 10, we iterate from 11 to 20
 * and the numbers which do not evenly divide this number is multiplied with this 
 * number to give the answer. 
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll answer = 2520;
	for( int i = 11; i <= 20; i++)
	{
		if( answer % i != 0 )
			answer = answer * i;
	}
	answer = answer/8;
	cout<<answer<<endl;
}