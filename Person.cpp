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
		void setId (int ID) {
			this->idCardNumber=ID ;
		} 
		void setName (string name) {
			this->fullName=name ;
		} 
		void setAge(float age) {
			this->age=age ;
		} 
		void setSalary(float salary) {
			this->salary=salary ;
		} 
		void setPosition (string position) {
			this->position=position ;
		}
	 Person() {
	 	this->idCardNumber=0;
	    this->fullName="" ;
	     this->age=0;
	 	this->salary=0;
	 	this->position="";
	 
	 } 
	 
	 void input () {
	 //	FootballClub::input() ;
	 	cout<<"CardNumber :" ;
	 	cin>>this->idCardNumber ;
	 	cin.ignore();
	 	cout<<"Full name :" ;
	 	getline(cin,this->fullName) ;
	 	cout<<"Age :" ;
	 	cin>>this->age ;
	 	cout<<"Salary :" ;
	 	cin>>this->salary ;
	 	cin.ignore() ;
	 	cout<<"Position :" ;
	 	getline(cin,this->position) ;
 	 } 
 	 void output() {
 	 //	FootballClub::output() ; 
 	 	cout<<"CardNumber :"<<this->idCardNumber<<"\t";
 	 	cout<<"Full Name :" <<this->fullName <<"\t" ;
 	 	cout<<"Age :" <<this->age<<"\t" ;
 	 	cout<<"Salary :"<<this->salary<<"\t" ;
 	 	cout<<"Position"<<this->position<<"\t" ;
	  } 
	   
}; 

