#include <iostream>
using namespace std;

//pg 384. CheckPoint 7.6, What is the output of the following code?//

int main(int argc, char** argv) {

    int values[5], count;

    for (count = 0; count < 5; count++)
        values[count] = count + 1;

    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    
    return 0;
}

