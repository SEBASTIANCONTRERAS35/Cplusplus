#include <iostream>
#include "Animal.h"
using namespace std;
class Herbivoro:public Animal{
	public :
		void alimentarse(){
			cout<<"Animal herbivoro se alimenta de hiervas"<<endl;
		}
};
