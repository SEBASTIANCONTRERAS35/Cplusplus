#include <iostream>
#include "SerVivo.h"
using namespace std;
class Planta: public SerVivo{
	public:
		void alimentarse(){
			cout<<"La planta se alimenta con la fotosintesis"<<endl;
		}
};
