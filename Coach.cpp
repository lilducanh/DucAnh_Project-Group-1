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
	    float TimeInTerm ;
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
		  float getTime() {
			return this->TimeInTerm ;
		}
	    Coach() {
	    this->	positionOfCoach="" ;
	       this-> numOfWin=0;
	       this->numOfLose=0;
	        this->titleNumber=0;
	    	this->experience ;
	    	this->oldClubs="" ;
	    	this->bounus=0;
	    	this->TimeInTerm =" " ;
		} 
		void input() {
			Person::input() ;
			cout<<"Position of Coach " ;
			cout<<"Choose : HeadCoach,MentalCoach , HealCoach :" ;
			getline(cin,this->positionOfCoach) ;
			cout<<"Num of Wins :" ;
			cin>>this->numOfWin ;
			cout<<"Num of Loses :" ;
			cin>>this->numOfLose ;
			cout<<"Number of Titles:" ;
			cin>>this->titleNumber ;
			cout<<"Experience :" ;
			cin>>this->experience ;
			cin.ignore() ;
			cout<<"Old Clubs :"  ;
			getline(cin,this->oldClubs ) ;
			cout<<"Bonus :" ;
			cin>>this->bounus ;
			cout<<"Time in term :" ;
			cin>>this->TimeInTerm ;
		} 
		void output() {
			Person::output() ;
			cout<<"Position of Coach "<<this->positionOfCoach<<"\t";
			cout<<"Num of Wins :"<<this->numOfWin<<"\t";
			cout<<"Num of Loses :"<<this->numOfLose <<"\t";
			cout<<"Number of Titles:"<<this->titleNumber <<"\t";
			cout<<"Experience :"<<this->xperience <<"\t";
			cout<<"Old Clubs :"<<this->oldClubs  <<"\t";
			cout<<"Bonus :"<<this->bounus <<"\t";
			cout<<"Time in term :" <<this->TimeInTerm<<"\t"	
  		} 
  		string mission () { 
  		    string use ;
  			cout<<"Aim :" ;
  			getline(cin,this->use) ;
  			cout<<use ;
		  } 
		double calculateWage() {
			if(this->positionOfCoach='HeadCoach') {
				float calculateWage =salary*bonus*1000 ;
			}
			if(this->positionOfCoach='MentalCoach' ) {
					float calculateWage=salary*bonus*800 ;
			} 
			if(this->positionOfCoach='HealCoach')  {
				float calculateWage=salary*bonus*700 ;
			}
			return calculateWage() ;
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
 			// danh hieu 
			if(check=true&&this->titleNumber>10) 
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
			if(this->numOfWin>30&&this->TimeInTerm) {
				cout<<"Duoc gia han :" ;
			} 
			else 
			cout<<"Khong dap ung duoc yeu cau " ;
			xoa_coach(c,n) ;
		} 
		void valueBringingLastSeason () {
			if(this->this->TimeInTerm<1)  
			else 
			cout<<"Num of win :"<<this->numOfWin ;
			cout<<"Num of win :"<<this->numOfLose;
		}
		 
		  
		
		
};
