#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    
    for ( int number = 0;  number <= 100; number += 5 )
    {
        
        cout << setw(5) << number;
	if ( number == 50 ) cout << endl;
	
    }
	
    cout << endl << endl;
    
    return 0;

}
