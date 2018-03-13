/* Here I calculated the next even term on the basis of just the previous even term and the term 
 * before the previous even term. I went onto use this formula until my even term exceeds the range.
 * And keep on adding the even terms. 
 * Next Even Term = 3 * PresentEvenTerm + 2 * TermBeforePresentEvenTerm
 * Next TermBeforeEven = 2 * PresentEvenTerm + 1 * TermBeforePresentEvenTerm
 */


#include <bits/stdc++.h>
using namespace std;
#define range 4000000
int main()
{
	long long int termBeforeEven = 1;
	long long int eventerm  = 2;
	long long int sum = 0;

	while(eventerm <= range)
	{
		sum += eventerm;
		long long int dummy = termBeforeEven;
		termBeforeEven = 2*eventerm + dummy;
		eventerm = 3*eventerm + 2*dummy;
	}

	printf("%lld\n",sum);
}