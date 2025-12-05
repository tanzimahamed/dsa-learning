#include <iostream>
#include <vector>
using namespace std;

int main() {

    
    // 1. Vector Declare with values
    
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print initial vector
    cout << "Initial Vector:\n";
    for (string car : cars) {
        cout << car << "\n";
    }

    
    // 2. Access elements
    
    cout << "\nAccess Elements:\n";
    cout << "cars[0] = " << cars[0] << "\n";     // using []
    cout << "cars.at(1) = " << cars.at(1) << "\n"; // using at()

    
    // 3. Change elements
    
    cars[0] = "Opel";          // change using []
    cars.at(1) = "Audi";       // change using at()

    cout << "\nAfter Changing Elements:\n";
    for (string car : cars) {
        cout << car << "\n";
    }

   
    // 4. Add elements (push_back)
 
    cars.push_back("Tesla");
    cars.push_back("Mini");

    cout << "\nAfter Adding Elements:\n";
    for (string car : cars) {
        cout << car << "\n";
    }

   
    // 5. Remove last element (pop_back)
    
    cars.pop_back(); // removes "Mini"

    cout << "\nAfter Removing Last Element:\n";
    for (string car : cars) {
        cout << car << "\n";
    }

    -
    // 6. Size of vector
   
    cout << "\nVector Size: " << cars.size() << "\n";

 -
    // 7. Check if empty
  
    cout << "Is Vector Empty? " << cars.empty() << " (1 = Yes, 0 = No)\n";


    // 8. Loop with normal for loop
  
    cout << "\nLoop Using Index:\n";
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }

   
    // 9. Loop Using range-based for
    
    cout << "\nLoop Using Range-based for:\n";
    for (string car : cars) {
        cout << car << "\n";
    }

    return 0;
}
