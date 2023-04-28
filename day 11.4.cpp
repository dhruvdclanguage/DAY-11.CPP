#include<iostream>

using namespace std;

class Maths{
		
	public:
		int a;
		
		int set(){
			a=15;
			return a;
		}  
};
class Square : public Maths{
	
	public:
		
		void sq(){
			
			int ans = set();
			
			cout<<"square : "<<ans*ans<<endl;
		}
};
class Cube : public Maths{
	
	public:
		
		void cu(){
			
			int ans = set();
			
			cout<<"cube : "<<ans*ans*ans<<endl;
		}		
};
int main(){
	
 Square obj1;
 Cube obj2;
 
 obj1.sq();
 obj2.cu();	
	return 0;
}
