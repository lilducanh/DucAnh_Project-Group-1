#include<Coach.cpp> 
class Management:public Person {
	private :
		int expManage ;
		long long purAmountInTerm ;
		 int numberOfPlayerAndCoachBrought  ; 
		 int numOfTitleInTerm ;
		 string favTactics  ;
		 float TimeInTerm;
	    float bonus ;
	    
	
		 public :
		 	int getExp () {
		 		return expManage ;
			 } 
			 long long getpurAmountInTerm () {
			 	return purAmountInTerm ;
			 } 
			 int getnumberOfPlayerAndCoachBrought  () {
			 	return numberOfPlayerAndCoachBrought ;
			 } 
			 int getnumOfTitleInTerm () {
			 	return numOfTitleInTerm  ;
			 } 
			string getFavTactics () {
			 	return favTactics  ;
			 } 
			  float getTime() {
			  	return this->TimeInTerm ;
			   } 
			   float getBonus () {
			   	return this->bonus ;
			   }
			void setExpManage (int expManage) {
				this->expManage=expManage;
			} 
			void setPurchase (float purchase) {
				this->purAmountInTerm =purchase  ;
			} 
			void setNumberOfPlayerAndCoachBrought (int NumberOfPlayerAndCoachBrought  ) {
				this->numberOfPlayerAndCoachBrought=NumberOfPlayerAndCoachBrought ;
			} 
			void setNumOfTitleInTerm () {
				this-> numOfTitleInTerm= numOfTitleInTerm ;
			} 
			void setTactics (string Tactics) {
				this-> favTactics  = Tactics   ;
			} 
			void setTime (float Time) {
				this->TimeInTerm =Time  ;
			} 
			void setBonus (float bonus) {
				this->bonus=bonus ;
			}
		 	Managemet (  ) {
		  this->expManage = 0 ;
		  this->TimeInTerm =0 ;
		  this->purAmountInTerm = 0 ;
		  this->numberOfPlayerAndCoachBrought = 0  ; 
		  this->numOfTitleInTerm = 0;
		  this->favTactics=""  ;
		  this->bonus=0;
		  
		  
			 } 
		void input() {
			Person::input() ;
			cout<<"expManage ";
			cin>>this->expManage ;
			cout<<"Time in term :" ;
			cin>>this->TimeInTerm  ;
			cout<<"purAmountInTerm" ;
			cin>>this->purAmountInTerm ;
			cout<<"numberOfPlayerAndCoachBrought" ;
			cin>>this->numberOfPlayerAndCoachBrought;
			cout<<"numOfTitleInTerm " ;
			cin>>this->numOfTitleInTerm  ; 	
			cin.ignore() ;
 			cout<<"Favourite Tactics :" ;
			getline(cin,this->favTactics) ;
			cout<<"Bonus :" ;
			cin>>this->bonus;
			
 		} 
		void output () {
			Person::output() ;
			cout<<"Time in Term :"<<this->TimeInTerm ;		
			cout<<"expManage "<<this->expManage<<"\t" ;
			cout<<"purAmountInTerm"<<this->purAmountInTerm <<"\t" ;
			cout<<"numberOfPlayerAndCoachBrought"<<this->numberOfPlayerAndCoachBrought<<"\t" ;
			cout<<"numOfTitleInTerm " <<this->numOfTitleInTerm<<"\t" ;
			cout<<"Time in Term :"<<this->TimeInTerm<<"\t" ;	
			cout<<"Favourite Tactics :"<<this->favTactics<<"\t" ;	
	}			 
			string mission () { 
  		cin.ignore() ;
  		    string use ;
  			cout<<"Aim :" ;
  			getline(cin,use) ;
  		
		  } 
		  double calculateWage() {
		return getSalary()*this->getBonus()*850 ;
		cout<< calculateWage ();
		}  
			
		
 	bool signingCondition () {
			if(this->numberOfPlayerAndCoachBrought&&this->expManage>5) 
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
			if(this->numOfTitleInTerm=0) {
				cout<<"Sa thai :" ;
			} 
		}	
			void oppRenewContract () {
		     if(this->TimeInTerm>10&&this->numberOfPlayerAndCoachBrought&&this->numOfTitleInTerm>2)	 
		     cout<<"stay " ;
		     else 
		     cout<<"Khong dap ung duoc yeu cau :" ;
		     
		} 
		void valueBringingLastSeason () {
			if(this->TimeInTerm<1) 
			cout<<"............." ;
			else
			cout<<"purAmountInTerm"<<this->purAmountInTerm <<"\t" ;
			cout<<"numberOfPlayerAndCoachBrought"<<this->numberOfPlayerAndCoachBrought<<"\t" ;
			cout<<"numOfTitleInTerm " <<this->numOfTitleInTerm<<"\t" ; 	
		} 			 
					 
					 
					 
					 
					 } ;

