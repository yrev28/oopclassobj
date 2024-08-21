#include <iostream>
#include <string>
using namespace std;

class car {     
  public:            
    string carmake;        
    string carmodel;
    int carmodelyear;
};

int main() {
  car specs;
  
  specs.carmake = "honda";
  specs.carmodel = "civic";
  specs.carmodelyear=2012;
 
  cout << specs.carmake << "\n"; 
  cout << specs.carmodel<<"\n";
  cout<<specs.carmodelyear<<"\n";
  
  return 0;
}
