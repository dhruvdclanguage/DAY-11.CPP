#include<iostream>

using namespace std;

class Mother{
	
	private:
		char name[50];
		int age;
	
	public:
	   void set_value(char n[]){
	   	
	   	cout<<n<<"NAME : ";
	   	cin>>name;
	   	
	   	cout<<n<<"AGE : ";
	   	cin>>age;
	   }	
};
class Zebra : public Mother{
	
	public:
		void PlaceOfOrigin(){
			
			cout<<"From China"<<endl<<endl;
		}
};
class Dolphin : public Mother{
	
	public:
		void PlaceOfOrigin(){
			
			cout<<"From India"<<endl<<endl;
		}	
};
int main(){
	
	Zebra obj1;
	Dolphin obj2;
	
	obj1.set_value("Zebra ");
	obj1.PlaceOfOrigin();
	
	obj2.set_value("Dolphin ");
	obj2.PlaceOfOrigin();
	
	return 0;
}
