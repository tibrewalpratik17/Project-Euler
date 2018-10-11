/* In this problem, I check every factor of the number from 1 to square root of
 * the number and according check for the other factor to be prime or not.
 * The first larger number encountered is the answer.
 */


#include <bits/stdc++.h>
using namespace std;
#define number 600851475143
typedef long long int ll;

int main()
{
	ll sq = sqrt(number);
	ll answer = 0;
	for( ll i = 2; i <= sq; i++ )
	{
		if( number % i == 0 )
		{
			ll count = 0;
			for( ll j = 2; j <= sqrt(i); j++ )
			{
				if( i % j == 0)
					count++;
			}
			if( count == 0 )
				answer = max( answer, i );
			count = 0;
			for( ll j = 2; j <= sqrt(number/i); j++ )
			{
				if( (number/i) % j == 0)
					count++;
			}
			if( count == 0 )
			{
				answer = (number/i);
				break;
			}
		}
	}	
	cout<<answer<<endl;
}