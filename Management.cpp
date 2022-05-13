#include<Coach.cpp> 
using namespace std 
class Management:public Person {
	private :
		int expManage ;
		long long purAmountInTerm ;
		 int numberOfPlayerAndCoachBrought  ; 
		 int numOfTitleInTerm ;
		 string favTactics  ;
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
		 	Managemet (  ) {
		  expManage = 0 ;
		  purAmountInTerm = "" ;
		  numberOfPlayerAndCoachBrought = 0  ; 
		  numOfTitleInTerm = 0;
		  favTactics=""  ;
			 } 
		void input() {
			Person::input() ;
			cout<<"expManage ";
			cin>>expManage ;
			cout<<"purAmountInTerm" ;
			cin>>purAmountInTerm ;
			cout<<"numberOfPlayerAndCoachBrought" ;
			cin>>numberOfPlayerAndCoachBrought;
			cout<<"numOfTitleInTerm " ;
			cin>>numOfTitleInTerm  ; 	
		} 
		void output () {
			Person::output() ;
			cout<<"expManage "<<expManage<<"\t" ;
			cout<<"purAmountInTerm"<<expManage<<"\t" ;
			cout<<"numberOfPlayerAndCoachBrought"<<numberOfPlayerAndCoachBrought<<"\t" ;
			cout<<"numOfTitleInTerm " <<numOfTitleInTerm<<"\t" 			
	}			 
		string mission () { 
  		    string use ;
  			cout<<"Aim :" ;
  			getline(cin,this->use) ;
  			cout<<use ;
		  } 
		  double calculateWage() {
			float calculate=salary*bounus ;
			cout<<calculate ;	
		}  
			bool check  {
			if( numOfTitleInTerm>5) 
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
			if(check=true) 
			cout<<"Stay " ;
			else  
			cout<<"Khong dap ung duoc dieu kien """ ;
		      xoa_manage(c,n)  ;	
		} 
			void riskOfTerminateContract() {
			if(check==false) {
				cout<<"Sa thai :" ;
				xoa_manage(c,n) ;
			}
		} 
			void oppRenewContract () {
			
		} 
		void valueBringingLastSeason () {
			if(numOfWin>30) 
			cout<<"............."
		} 			 
					 
					 
					 
					 
					 } ;

