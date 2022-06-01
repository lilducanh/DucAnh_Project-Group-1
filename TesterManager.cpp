#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
	static int  checkManagement=0;

class FootballClub {
	private:
		string idMembers;
		string contractTerm;
	public:
		bool checkDate(int day, int month, int year) {
		switch (month) {
			case 1 :
			case 3:
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 :
					if(day<1 || day > 31) {
						return false;
					}
					break;
			case 4 :
			case 6 :
			case 9 :
			case 11 :
				if(day < 1 || day > 30) {
					return false;
				}
				break;
			case 2 :
				if (year % 4 == 0) {
  					if (year % 100 == 0) {
   						 if (year % 400 == 0) {
							if(day < 1 || day > 29) {
								return false;
							}
					}else{
						if(day < 1 || day > 28) {
								return false;
					}}
				}else {
						if(day < 1 || day > 29) {
								return false;
							}
				}}else{
						if(day < 1 || day > 28) {
								return false;
				}}
					
				break;
			default :
				return false;
		}
		if(year <= 2022) {
			return false;
		} 
		return true;
		}
		void setMember(string idMembers){
			this->idMembers = idMembers;
		}
		string getMember(string idMembers){
			return this->idMembers;
		}
		void setcontract(string contractTerm){
			this->contractTerm = contractTerm;
		}
		string getcontract(string contractTerm){
			return this->contractTerm;
		}
	FootballClub(){
		this->idMembers = " ";
		this->contractTerm = " ";
	}
	void input(){
		cout<<"Enter the ID.Members: ";
		cin>>this->idMembers;
		for(int i=0;i<=10;i++){
			if(this->idMembers[i]>=97&&this->idMembers[i]<=122)
				this->idMembers[i]-=32;
		}
		cin.ignore();
		cout<<"Enter the ContractTerm(Format DD/MM/YYYY): \n\n";
		int day,month,year;
		do {
			cout << "Day : ";
			cin >> day;
			cout << "Month : ";
			cin >> month;
			cout << "Year : ";
			cin >> year;
			cout <<"\n-------------------------------------------------------------------\n\n";
		}while(checkDate(day,month,year)==false);
		string sday,smonth,syear;
		sday = to_string(day);
		smonth = to_string(month);
		syear = to_string(year);
		this->contractTerm = sday+'/'+smonth+'/'+syear;
	}
	void output(){
		cout<<"*ID of Members: "<<this->idMembers<<endl;
		cout<<"*Contract Term: "<<this->contractTerm<<endl;
	}
	virtual string mission() = 0;
	virtual long long calculateWage() = 0;
	virtual bool signingCondition() = 0;
	virtual void riskOfTerminateContract() = 0;
	virtual void oppRenewContract() = 0;
};

class Person : public FootballClub {
	private : 
		int idCardNumber ;
		string fullName ;
		int age ;
		long long salary  ;
	public :
		int getIDCardNumber ()  {
		  return this->idCardNumber ;
		} 
		string getFullName() {
		return this->fullName ;	
		} 
		int getAge() {
			return this->age ;
		} 
		int getSalary() {
			return this->salary ;
		} 
		
		void setIDCardNumber (int ID) {
			this->idCardNumber=ID ;
		} 
		void setFullName (string name) {
			this->fullName=name ;
		} 
		void setAge(float age) {
			this->age=age ;
		} 
		void setSalary(long long salary) {
			this->salary=salary ;
		} 

		Person() {
			this->idCardNumber=0;
			this->fullName="" ;
			this->age=0;
			this->salary=0;
		} 
		
		void input () {
			FootballClub::input() ;
			cout<<"\nCardNumber : " ;
			cin>>this->idCardNumber;
			cin.ignore();
			cout<<"\nFull name : " ;
			getline(cin,this->fullName) ;
			cout<<"\nAge : " ;
			cin>>this->age ;
			cout<<"\nSalary : " ;
			cin>>this->salary ;
		} 
		void output() {
			FootballClub::output() ; 
			cout<<"\nCard Number : "<<this->idCardNumber<<"\n";
			cout<<"\nFull Name : " <<this->fullName <<"\n" ;
			cout<<"\nAge : " <<this->age<<"\n" ;
			cout<<"\nSalary : "<<this->salary<<"\n" ;
		} 
	   
}; 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Management:public Person {
	private :
		int expManage ;
		long long purAmountInTerm ;
		int qualityOfTransfer;
	public :
		int getExp () {
			return expManage ;
		} 
		long long getpurAmountInTerm () {
			return purAmountInTerm ;
		} 
		int getQualityOfTransfer() {
			return qualityOfTransfer ;
		}
			 
		void setExpManage (int expManage) {
			this->expManage=expManage;
		} 
		void setPurchase (float purchase) {
			this->purAmountInTerm =purchase  ;
		} 	
		void setQualityOfTransfer(int quality) {
		    this->qualityOfTransfer=quality ;
		}
		
		Managemet () {
			this->expManage = 0 ;
	    	this->qualityOfTransfer=0;
			this->purAmountInTerm = 0 ;
		} 
		
		// input chua hoan thien
		
		void input() {
			Person::input() ;
			cout<<"\nExperience of Manager : ";
			cin>>this->expManage ;
			cout<<"\nThe amount of money that manager needs to transfer : " ;
			cin>>this->purAmountInTerm ;
			do{ 
				cout<<"\nTransfer skill(1-10) : " ; 
				cin>>this->qualityOfTransfer;	
			}while(this->qualityOfTransfer<0||this->qualityOfTransfer>10); 	
 		} 
 		
 		// output chua hoan thien
 		
		void output () {
			Person::output() ;
			cout<<"\nExperience of Manager : "<<this->expManage<<"\n" ;
			cout<<"\nThe amount of money that manager needs to transfer : "<<this->purAmountInTerm <<"\n" ;	
			cout<<"\nTransfer skill(1-10) : "<<this->qualityOfTransfer<<"\n" ;	
		}			 
		
		// mission da hoan thien
		
		string mission () { 
  		    string mission ="Management and Transfers";
  		    return mission ;
  		} 
  		
  		// calculateWage chua hoan thien
		
		long long calculateWage() {
			
	       
		}  
			
		//signingCondition da hoan thien
		
 	    bool signingCondition () {
			if(this->expManage>5&&this->purAmountInTerm<10000000&&this->qualityOfTransfer>=5) 
			return true ;
			else  
			return false ;
		}  
		
		//riskOfTerminateContract chua hoan thien
		
		void riskOfTerminateContract() {
			
		}	
		
		// oppRenewContract chua hoan thien
		
		void oppRenewContract () {
		    
		} 
		
		//favTacTics da hoan thien	 
					 
		char favTacTics()	{
			char tactic;
			do {
		 		cout<<"Input the Favourite Tactics Of Manager (Pressing : P , Tiki Taka : T , SwingAttack : S)" ;
				//(Pressing : P , Tiki Taka : T , SwingAttack : S)
		 		cin>>tactic ;
		 		tactic=toupper(tactic) ;	 
		 	} while (tactic!='P'&&tactic!='T'&&tactic!='S') ;
			return tactic; 
		}		 	 
} ; 

class listManager:public Management {
//	public :
//     	int n;
//		vector<Management> vm ;
//		void inputList(vector<Management> vm,int &n) { //
//			for(int i=0 ; i<n ; i++) {
//				cout << "\nEnter the information of each candidate :"<<endl;	
//				cout<<"Candidate"<<i+1<<":"<<endl;	
//				Management mn ;
//				mn.input();
//				vm.push_back(mn);
//			}
//		} 
//		// nhap mot chuoi ung vien 
//		void outputList(vector<Management> vm,int &n) { //vector<Management> vm,int &n
//			cout << "\n-----------------------------\n";
//			for(int i=0 ; i<vm.size() ; i++) {
//				vm[i].output();
//			
//			}
//		} 
//	void chooseTheManager() {
//		for(int i=0 ; i<vm.size() ; i++) {
//			if(vm[i].signingCondition()==false) {
//				vm.erase(vm.begin()+i);
//				i--;
//			}
//		}
//		
//		if(vm.size()!=0) {
//			checkManager++;
//			for(int i=0 ; i<vm.size() ; i++) {
//			for(int j=i ; j<vm.size() ; j++) {
//				if(vm[i].getQualityOfTransfer()<vm[j].getQualityOfTransfer()) {
//					Management tmp = vm[i];
//					vm[i] = vm[j];
//					vm[j] = tmp;
//				}
//			}
//			}
//			while(vm.size()!=1) {
//			vm.pop_back();
//			}
//		} else {
//				cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!\n\nWe need to find other candidates\n\nEnter the number of candidates you have selected : ";
//			}
//		}
//		
//		void scriptOfOwner() {
//			cout << "Our team currently has no owner !!! \n\nYou need to enter the number of potential candidates for the position of team owner : ";
//		this->inputList(vm,n);
//		this->outputList(vm,n);
//		this->chooseTheManager();
//			while(checkManager==0) {
//				this->inputList(vm,n);
//				this->chooseTheManager();
//			}
//			cout << "\n\nWe reviewed each person's details and the fan vote took place !!!\n\nWe would like to announce the official owner of the team is Mr."<<vm[0].getFullName();
//		}
//}; 
	public: 
		int n;
		vector<Management>vm;
		
	void inputList(){
		cin>>n;
		cout << "\n\nEnter the information of each candidate : \n\n";
		for(int i=0;i<n;i++){
			cout<<"\n\nCandidate "<<i+1<<" : ";
		Management on;
			on.input();
			vm.push_back(on);
		}
	}
	void outputList(){
		cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "Detailed list of each candidate :\n\n";
		for(int i=0;i<vm.size();i++){
			vm[i].output();
		}
	}
	
	void chooseTheManagement() {
		for(int i=0 ; i<vm.size() ; i++) {
			if( vm[i].signingCondition()==false) {
				vm.erase(vm.begin()+i);
				i--;
			}
		}
		
		if(vm.size()!=0) {
			checkManagement++;
			for(int i=0 ; i<vm.size() ; i++) {
			for(int j=i ; j<vm.size() ; j++) {
				if(vm[i].getQualityOfTransfer() < vm[j].getQualityOfTransfer()) {
					Management tmp = vm[i];
					vm[i] = vm[j];
					vm[j] = tmp;
				}
			}
			}
			while(vm.size()!=1) {
			vm.pop_back();
			}
		} else {
				cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!\n\nWe need to find other candidates\n\nEnter the number of candidates you have selected : ";
			}
		}
		
		void scriptOfManager() {
			cout << "Our team currently has no owner !!! \n\nYou need to enter the number of potential candidates for the position of team owner : ";
			this->inputList();
			this->outputList();
			this->chooseTheManagement();
			while(checkManagement==0) {
				this->inputList();
				this->chooseTheManagement();
			}
			cout << "\n\nWe reviewed each person's details and the fan vote took place !!!\n\nWe would like to announce the official owner of the team is Mr."<<vm[0].getFullName();
		}
};
// chon condition = true   so sanh quality , chon cao nhat ,in 
int main() {
//	Management mou;
//	mou.input();
//	mou.output();
//    int n ;
//     vector<Management> vm ;
//    cout<<"Enter the number of candidates :" ;
//    cin>>n;
	listManager lm ;
   lm.scriptOfManager() ;
    	//lm.chooseTheManager() ;
//lm.scriptOfOwner() ;
 	
	return 0;
}
