#include <iostream>
using namespace std;

void map();

int main ()
{
	map();
}

void map ()
{
	char mapping [10][10] = 
	{
		"+======+",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"+======+",		
	};
	
	for ( int i = 0; i < 10; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			cout << mapping[i][j];
		}
	}
}
