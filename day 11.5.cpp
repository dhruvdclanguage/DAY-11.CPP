#include<iostream>

using namespace std;

class A{
	
	public :
		
		int emp_id;
		char emp_name[50];
		char emp_role[70];
		int emp_salary;
		int emp_experience;
		char emp_comp_name[80];
		char emp_address[100];
		char emp_email[50];
		char  emp_contact[11];
		
	public :
	 
	    void setter1(){
	    	
	    	cout<<"Enter The Id :";
	    	cin>>emp_id;
	    	
	    	cout<<"Enter The Name :";
	    	cin>>emp_name;
	    	
	    	cout<<"Enter The Role :";
	    	cin>>emp_role;
	    	
		}		
};
class B : public A{
	
	public :
		
		void setter2(){
			
			cout<<"Enter The salary :";
			cin>>emp_salary;
			
			cout<<"Enter The Experience :";
			cin>>emp_experience;
		}
};
class C : public B{
	
	public :
		
		void setter3(){
			
			cout<<"Enter The Company Name :";
			cin>>emp_comp_name;
			
			cout<<"Enter The Address :";
			cin>>emp_address;
		}
		
		void getter1(){
			
			cout<<emp_name<<endl;
			cout<<emp_role<<endl;
			cout<<emp_salary<<endl;
		}
};
class D : public C{
	
	public :
		
		void setter4(){
			
			cout<<"Enter The Email :";
			cin>>emp_email;
			
			cout<<"Enter The Contact :";
			cin>>emp_contact;
		}
		
		void getter2(){
			
			cout<<emp_id<<endl;	
			cout<<emp_experience<<endl;
			cout<<emp_comp_name<<endl;
			cout<<emp_address<<endl;
			cout<<emp_email<<endl;		
			cout<<emp_contact<<endl;
		}
};
int main(){
	
	D obj;
 	
  obj.emp_id;
  obj.emp_name;
  obj.emp_role;
  obj.emp_salary;
  obj.emp_experience;
  obj.emp_comp_name;
  obj.emp_address;
  obj.emp_email;
  obj.emp_contact;
  obj.setter1();
  obj.setter2();
  obj.setter3();
  obj.getter1();
  obj.setter4();
  obj.getter2();
  
	return 0;
}
