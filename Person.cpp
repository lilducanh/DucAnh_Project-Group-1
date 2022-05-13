#include<iostream>
using namespace std ;
class Person {
	private : 
	int idCardNumber ;
	 string fullName ;
	 int age ;
	 int salary  ;
	 string position ;
	public :
		int getID ()  {
		  return this->idCardNumber ;
		} 
		string getName() {
		return this->fullName ;	
		} 
		int getAge() {
			return this->age ;
		} 
		int getSalary() {
			return this->salary ;
		} 
		string getPosition () {
			return this->position ;
		}
	 Person() {
	 	idCardNumber=0;
	    fullName="" ;
	     age=0;
	 	salary=0;
	 	position="";
	 } 
	 
	 void input () {
	 //	FootballClub::input() ;
	 	cout<<"CardNumber :" ;
	 	cin>>idCardNumber ;
	 	cin.ignore();
	 	cout<<"Full name :" ;
	 	getline(cin,fullName) ;
	 	cout<<"Age :" ;
	 	cin>>age ;
	 	cout<<"Salary :" ;
	 	cin>>salary ;
	 	cin.ignore() ;
	 	cout<<"Position :" ;
	 	getline(cin,position) ;
 	 } 
 	 void output() {
 	 //	FootballClub::output() ; 
 	 	cout<<"CardNumber :"<<idCardNumber<<"\t";
 	 	cout<<"Full Name :" <<fullName <<"\t" ;
 	 	cout<<"Age :" <<age<<"\t" ;
 	 	cout<<"Salary :"<<salary<<"\t" ;
 	 	cout<<"Position"<<position<<"\t" ;
	  } 
	   
}; 
//class PersonList:public Person {
//	public : 
//	void inputl(Person p[],int &n) { 
//	for(int i= 0 ;i<n;i++) {
//		p[i].input() ;
//	}
//} 
//    void outputl(Person p[] ,int n) {
//    	for(int i = 0 ; i<n ; i ++) 
//    	p[i].output() ;
//	}
//	
//}; 
int main() {
	Person p ;
    // p.input() ;
    // p.output() ;
	p.getName() ;

 }
