#include<Coach.cpp> 
using namespace std 
class Management:public Person {
	private :
		int expManage ;
		long long purAmountInTerm ;
		 int numberOfPlayerAndCoachBrought  ; 
		 int numOfTitleInTerm ;
		 string favTactics  ;
		float TimeInTerm ;
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
			void setExp () {
				this->expManage=expManage;
			} 
			void setPurchase () {
				this->purAmountInTerm =purAmountInTerm  ;
			} 
			void setNumberOfPlayerAndCoachBrought () {
				this->numberOfPlayerAndCoachBrought=numberOfPlayerAndCoachBrought ;
			} 
			void setNumOfTitleInTerm () {
				this-> numOfTitleInTerm= numOfTitleInTerm ;
			} 
			void setTactics () {
				this-> favTactics  = favTactics   ;
			} 
			void setTime () {
				this->TimeInTerm =TimeInTerm  ;
			}
		 	Managemet (  ) {
		  this->expManage = 0 ;
		  this->TimeInTerm="" ;
		  this->purAmountInTerm = "" ;
		  this->numberOfPlayerAndCoachBrought = 0  ; 
		  this->numOfTitleInTerm = 0;
		  this->favTactics=""  ;
		  
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
  		    string use ;
  			cout<<"Aim :" ;
  			getline(cin,this->use) ;
  			cout<<use ;
		  } 
		  double calculateWage() {
		double calculateWage=salary*bonus*850 ;
		return calculateWage ();
		}  
			bool check  {
			if( this->numOfTitleInTerm>5) 
			return true ;
			else 
			return false  ;
		} 
		void xoa (Manage m[100 ] ,int &n , int vi_tri ) {
			for(int i= vi_tri ;i<n;i++  ) {
				m[i] =m[i+1] ;
			} 
			n--;
		} 
		void xoa_manage(Manage m[100] , int &n ) {
			for(int i =0;i<n;i++) {
				if(check==false) 
				xoa(m,n,i) ;
			}
		}
 		bool signingCondition () {
			if(check=true&&this->TimeInTerm&&this->numOfTitleInTerm>3) 
			cout<<"Stay " ;
			else  
			cout<<"Khong dap ung duoc dieu kien """ ;
		      xoa_manage(c,n)  ;	
		} 
			void riskOfTerminateContract() {
			if(check==false&&this->numberOfPlayerAndCoachBrought<70&&this->numOfTitleInTerm=0) {
				cout<<"Sa thai :" ;
				xoa_manage(c,n) ;
			}
		} 
			void oppRenewContract () {
		     if(this->TimeInTerm>10&&this->numberOfPlayerAndCoachBrought&&this->numOfTitleInTerm>2)	 
		     cout<<"stay " ;
		     else 
		     cout<<"Khong dap ung duoc yeu cau :" ;
		     xoa_manage(c,n) ;
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

