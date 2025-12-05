#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Arunima");
  myFunction("Tanzim");
  myFunction("Anja");
  return 0;
}


#include <iostream>
#include <string>
using namespace std;

int Min_of_two(int a , int b ){
    if (a< b){ return a ;}else { return b;}

}
int main(){
    cout<< Min_of_two(5,7)<<endl;
    return 0 ;

}