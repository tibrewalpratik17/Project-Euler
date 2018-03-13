/* Here I use the concept of Arithmetic Progession series
 * First I compute the summation of the multiples of the first number below the range
 * Then I do the same for the second number
 * Then I find out the first common factor of both the numbers and find the sum of it's multiples
 * below the range
 * I add the first 2 sums and subtract the common
 * Formula for A.P. series = ( ( first_term + last_term ) * number_of_terms )/2
 */


#include <bits/stdc++.h>
using namespace std;
#define first_number 3
#define second_number 5
#define range 1000
int main()
{
	int terms1 = ((range-1)/first_number);
	int last1  = terms1*first_number;
	int sum1   = ((first_number+last1)*terms1)/2;

	int terms2 = ((range-1)/second_number);
	int last2  = terms2*second_number;
	int sum2   = ((second_number+last2)*terms2)/2;
	
	int common = first_number*second_number;
	int termscommon = ((range-1)/common);
	int lastcommon = common*termscommon;
	int sumcommon = ((common+lastcommon)*termscommon)/2;
	
	int answer = sum1+sum2-sumcommon;
	printf("%d\n",answer);
}