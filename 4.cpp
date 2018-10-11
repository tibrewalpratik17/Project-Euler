/* Multiply all 3 digit numbers pairwise and check for each product if it is
 * a palindrome or not. If palindrome, then save the maximum and display.
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll answer = 0;
	for( ll i = 100; i <= 999; i++ )
	{
		for( ll j = 100; j <= 999; j++ )
		{
			ll product = i * j;
			ll duplicate = product;
			ll reverse = 0;
			while(duplicate != 0)
			{
				reverse = ( duplicate % 10 ) + reverse * 10;
				duplicate = duplicate/10;
			}
			if( reverse == product)
				answer = max( answer, product );
		}
	}
	cout<<answer<<endl;
}