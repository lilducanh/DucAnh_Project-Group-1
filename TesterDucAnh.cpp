#include<iostream>
using namespace std;

class FootballClub {
	private:
		string idMembers;
		string contractTerm;
	public:
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
		cout<<"--------------------------------------------------"<<endl;
		cout<<"==============ENTER THE PROLIFE FOOTBALL CLUB============="<<endl;
		cout<<"Enter the ID.Members: ";
		cin>>this->idMembers;
		cin.ignore();
		cout<<"Enter the ContractTerm: ";
		getline(cin,this->contractTerm);
	}
	void output(){
		cout<<"--------------------------------------------------"<<endl;
		cout<<"=============OUTPUT THE PROLIFE FOOTBALL CLUB============="<<endl;
		cout<<"*ID of Members: "<<this->idMembers<<endl;
		cout<<"*Contract Term: "<<this->contractTerm<<endl;
	}
	virtual string mission() = 0;
	virtual double calculateWage() = 0;
	virtual bool signingCondition() = 0;
	virtual void riskOfTerminateContract() = 0;
	virtual void oppRenewContract() = 0;
	virtual bool valueBringingLastSeason() = 0;
};

class Person {
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
	 	
 	 } 
 	 void output() {
 	 //	FootballClub::output() ; 
 	 	cout<<"CardNumber :"<<this->idCardNumber<<"\t";
 	 	cout<<"Full Name :" <<this->fullName <<"\t" ;
 	 	cout<<"Age :" <<this->age<<"\t" ;
 	 	cout<<"Salary :"<<this->salary<<"\t" ;
 	 	
	  } 
	   
}; 

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
		
		 	Managemet (  ) {
		  this->expManage = 0 ;
	      this->qualityOfTransfer=0;
		  this->purAmountInTerm = 0 ;
			 } 
		void input() {
			Person::input() ;
			cout<<"expManage ";
			cin>>this->expManage ;
			cout<<"purAmountInTerm" ;
			cin>>this->purAmountInTerm ;
			cout<<"Quality of Transfer  (1-10) : " ; 
			do { 
				cout<<"Quality of Transfer  (1-10) : " ; 
				cin>>this->qualityOfTransfer;	
			} while (this->qualityOfTransfer<0||this->qualityOfTransfer>10)  ;
			   	
 		} 
		void output () {
			Person::output() ;
			cout<<"expManage "<<this->expManage<<"\t" ;
			cout<<"purAmountInTerm"<<this->purAmountInTerm <<"\t" ;	
			cout<<"Quality of Transfer "<<this->qualityOfTransfer<<"\t" ;	
	}			 
			string mission () { 
  		    string mission ="Management and Transfers";
  		    return mission ;
  		    
		  } 
		  long long calculateWage() {
	       
		}  
			
		
 	    bool signingCondition () {
			if(this->expManage>5&&this->purAmountInTerm<10000000&&this->qualityOfTransfer>=5) 
			return true ;
			else  
			return false ;
		}  
		
		void riskOfTerminateContract() {
			
		}	
			void oppRenewContract () {
		    
		     
		} 
	bool valueBringingLastSeason () {
		 	
		} 			 
					 
	string favTacTics()	{
		char tactic;
		 do {
		 	cout<<"Input the Favourite Tactics Of Manager (Pressing : P , Tiki Taka : T , SwingAttack : S)" ;//(Pressing : P , Tiki Taka : T , SwingAttack : S)
		 cin>>tactic ;
		 tactic=toupper(tactic) ;	 
		 } while (tactic!='P'&&tactic!='T'&&tactic!='S') ;
		 return tactic;
		 
	}		 	 
					 
					 
					 } ; 
 class Coach : public Person {					
	private :
		int numOfWin ;
		int numOfLose ;
	    int titleNumber ;
	    int experience ;
	   
	    
	public :
	
		  int getWins () {
		  	return this->numOfWin ;
		  } 
		  int getLose() {
		  	return this->numOfLose ;
		  } 
		  int getTitle () {
		  	return this->titleNumber ;
		  } 
		  int getExp() {
		  	return this->experience ;
		  } 
		  
		  
		  
		 
		
      	void setWins (int Wins) {
			this->numOfWin=Wins;
		} 
		void setLoses(int Loses) {
			this->numOfLose=Loses ;
		} 
		void setTitle (int Title) {
			this->titleNumber=Title ;
		} 
		void setExperience (float Exp) {
			this->experience=Exp ;
		} 
	
		
		 Coach() {
	   
	       this-> numOfWin=0;
	       this->numOfLose=0;
	        this->titleNumber=0;
	    	this->experience="" ;
	    	
	    	
		} 
		void input() {
			Person::input() ;
		
			cout<<"Num of Wins :" ;
			cin>>this->numOfWin ;
			cout<<"Num of Loses :" ;
			cin>>this->numOfLose ;
			cout<<"Number of Titles:" ;
			cin>>this->titleNumber ;
			cout<<"Experience :" ;
			cin>>this->experience ;
			cin.ignore() ;
			

		} 
		void output() {
			Person::output() ;
		
			cout<<"Num of Wins :"<<this->numOfWin<<"\t";
			cout<<"Num of Loses :"<<this->numOfLose <<"\t";
			cout<<"Number of Titles:"<<this->titleNumber <<"\t";
			cout<<"Experience :"<<this->experience <<"\t";
		
  		} 
  		string mission () { 
  	     string mission="Coach and Win matchs" ;
  	     return mission ;
		  } 
		  
	long long  calculateWage() {
		//kn >10 tra them khoang 1000000+ so tran thang ; 
		// thua= -tien khong bonus -
		//dung value bringlastseason;	
		//neu thang nhieu hon thua - tinh so thang va nguoc lai 
		 if(this->experience >10&&valueBringingLastSeason()==true) {
		 	calculateWage=5000000*this->numOfWin*100000;
		 } 
		 if(this->experience<10&&valueBringingLastSeason()==true) 
		 calculateWage=3500000*this->numOfWin*600000;
		 if(valueBringingLastSeason()==false) {
		calculateWage=3500000*this->numOfLose-200000;
		 }
		 }  
 		bool signingCondition () {
			if(this->numOfWin>30&&this->experience>5) 
			return true ;
			else  
			return false ;
           
		} 
		void SingingCondition () {
			if(signingCondition()==true) {
				cout<<"Dieu kien de ki hop dong :Dap ung duoc dieu kien " ;
			} 
			else {
				cout<<"Dieu kien de ki hop dong: Khong dat yeu cau " ;
			}
		}
		void riskOfTerminateContract() {
			if(this->numOfLose>40) {
				cout<<"Sa thai :" ;

			} 
		}
		
		void oppRenewContract () {
			if(this->numOfWin>30) {
				cout<<"Duoc gia han :" ;
			} 
			else 
			cout<<"Khong dap ung duoc yeu cau " ;

		} 
		bool valueBringingLastSeason () {
		if(this->numOfWin>this->numOfLose) 
		return true ;
		else 
		return false ;
		}
};
