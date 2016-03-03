#include <iostream>
using namespace std;
int main(){
    char letter;

    cout << "Enter a letter:" << endl;
    cin >> letter;
    cout << "The ASCII code for your letter is " << (static_cast<int>(letter)) << endl;
 
 return 0;
 
}
 