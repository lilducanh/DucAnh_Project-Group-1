#include<Coach.cpp> 
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

