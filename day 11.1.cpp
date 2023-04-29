#include<iostream>

using namespace std;

class mother{
	
	public:
		 void display (){
		 
		     cout<<"My name is Shila"<<endl;
		     cout<<"I am the mother of mona"<<endl;
			 
		 }
	
};
class daugther : public mother{
	
	public:
		 void display (){
		 	 
		 	 cout<<"My name is mona"<<endl;
		 	 cout<<"I am the daugther of shila"<<endl;
		 }
		 
};

int main(){

	daugther obj;
	
	obj.mother::display();
	obj.daugther::display();
	
	return 0;
}
