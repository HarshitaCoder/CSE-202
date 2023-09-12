#include <iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:                 //another way of initialization
		rectangle(int y=34):l(y),b(3){  //parameter constructor
			
		}
		rectangle( rectangle &r){   //copy constructor 
			//cout<<"copy constructor: "<<endl;
			l=r.l;
			b=r.b;
		}
		int area(){
			return(l*b);
		}
};
int main(){
	
	rectangle r1(2);
	rectangle r2(r1);
	cout<<"\n"<<r2.area();
	cout<<"\nArea is: "<<r1.area();
} 