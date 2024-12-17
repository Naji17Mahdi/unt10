#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

unsigned int f ( unsigned int  );

main()
{
	unsigned int a;
	
	cin>>a;
	cout<<f ( a );
	
}

unsigned int f ( unsigned int b )
{
	int i;
	unsigned int multi = 1;
	
	for ( i = 1 ; i <= b ; i++ )
	{
		multi *= i;
	}
	return multi;
}
