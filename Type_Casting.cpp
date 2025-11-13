#include <iostream>
using namespace std;

int main() {
    int x = 10;
    float y = 2.5;
    float result = x + y;  // int (x) automatically converted to float
    cout << "Result = " << result;
    return 0;
}


//(type_name) value--syntex


#include <iostream>
using namespace std;
int main (){
    double pi = 3.1416;
    int int_pi = (int)pi;  // manually cast double → int
    cout<< "after casting:"<<int_pi;
    return 0;

}