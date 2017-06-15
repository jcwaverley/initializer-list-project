#include <iostream>
#include <iomanip>

// Initializing an array in a declaration
using namespace std;

int main()
{
    // use initializer list to initialize array n
	int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

	cout << "Element" << setw( 13 ) << "Value" << endl;

	// output each array element's value
	for (int i = 0; i < 10; ++i)
		cout << setw( 7 ) << i << setw (15 ) << n[ i ] << endl;
	
	cout << "Will make further modifications to this file by adding arrays/vectors" << endl;

        cout << endl;

	// output first 5 array element's value
	for (int i = 0; i < 5; ++i)
		cout << setw( 7 ) << i << setw (15 ) << n[ i ] << endl;

        
        return 0;
	 

} // end main
