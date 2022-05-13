#include<Person.cpp> 
using namespace std ;
class Coach : public Person {
	private :
		string positionOfCoach ;
		int numOfWin ;
		int numOfLose ;
	    int titleNumber ;
	    int experience ;
	    string oldClubs ;
	    double bounus ;
	public :
	     string getPosCoach () {
	     	return this->positionOfCoach ;
		 } 
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
		  string getClubs() {
		  	return this->oldClubs ;
		  } 
		  double getBonus() {
		  	return this->bounus ;
		  }
	    Coach() {
	    	positionOfCoach="" ;
	        numOfWin=0;
	       numOfLose=0;
	        titleNumber=0;
	    	experience ;
	    	oldClubs="" ;
	    	bounus=0;
		} 
		void input() {
			Person::input() ;
			cout<<"Position of Coach " ;
			getline(cin,positionOfCoach) ;
			cout<<"Num of Wins :" ;
			cin>>numOfWin ;
			cout<<"Num of Loses :" ;
			cin>>numOfLose ;
			cout<<"Number of Titles:" ;
			cin>>titleNumber ;
			cout<<"Experience :" ;
			cin>>experience ;
			cin.ignore() ;
			cout<<"Old Clubs :"  ;
			getline(cin,oldClubs ) ;
			cout<<"Bonus :" ;
			cin>>bounus ;
		} 
		void output() {
			Person::output() ;
			cout<<"Position of Coach "<<positionOfCoach<<"\t";
			cout<<"Num of Wins :"<<numOfWin<<"\t";
			cout<<"Num of Loses :"<<numOfLose <<"\t";
			cout<<"Number of Titles:"<<titleNumber <<"\t";
			cout<<"Experience :"<<xperience <<"\t";
			cout<<"Old Clubs :"<<oldClubs  <<"\t";
			cout<<"Bonus :"<<bounus <<"\t";	
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
			if( numOfWin>25) 
			return true ;
			else 
			return false  ;
		} 
		void xoa (Coach c[100 ] ,int &n , int vi_tri ) {
			for(int i= vi_tri ;i<n;i++  ) {
				c[i] =c[i+1] ;
			} 
			n--;
		} 
		void xoa_coach(Coach c[100] , int &n ) {
			for(int i =0;i<n;i++) {
				if(check==false) 
				xoa(c,n,i) ;
			}
		}
 		bool signingCondition () {
			if(check=true) 
			cout<<"Stay " ;
			else  
			cout<<"Khong dap ung duoc dieu kien """ ;
		      xoa_coach(c,n)  ;	
		}
		void riskOfTerminateContract() {
			if(check==false) {
				cout<<"Sa thai :" ;
				xoa_coach(c,n) ;
			}
		} 
		void oppRenewContract () {
			
		} 
		void valueBringingLastSeason () {
			if(numOfWin>30) 
			cout<<"............."
		}
		 
		  
		
		
};
