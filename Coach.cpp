#include<Person.cpp> 
using namespace std ;
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
