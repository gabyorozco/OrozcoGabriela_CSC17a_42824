#include <iostream>
using namespace std;
int main ()
{
const int NUM_MEN = 10;
int fish[NUM_MEN], count;

cout << "Enter the number of fish caught by fishermen.\n";

for (count=0; count < NUM_MEN; count++)
{
    cout << "fishermen" << (count+1) << ":";
    cin >> fish[count];
}
return 0;
}
