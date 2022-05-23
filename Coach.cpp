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
		void setPositionOfCoach(string Position) {
			this->positionOfCoach=Position ;
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
		void setOldClubs(string Oldclubs) {
			this->oldClubs=Oldclubs ;
		} 
		void setBonus (double bonus) {
			this->bounus=bonus ;
		} 
		void setTime () {
			this->TimeInTerm=TimeInTerm ;
		} 
	    Coach() {
	    this->	positionOfCoach="" ;
	       this-> numOfWin=0;
	       this->numOfLose=0;
	        this->titleNumber=0;
	    	this->experience ;
	    	this->oldClubs="" ;
	    	this->bounus=0;
	    	//this->TimeInTerm ="" ;
		} 
		void input() {
			Person::input() ;
			cout<<"Position of Coach " ;
			cout<<"Choose : HeadCoach or AssistantCoach:" ;
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
			cout<<"Experience :"<<this->experience <<"\t";
			cout<<"Old Clubs :"<<this->oldClubs  <<"\t";
			cout<<"Bonus :"<<this->bounus <<"\t";
			cout<<"Time in term :" <<this->TimeInTerm<<"\t"	;
  		} 
  		string mission () { 
  		cin.ignore() ;
  		    string use ;
  			cout<<"Aim :" ;
  			getline(cin,use) ;
  		
		  } 
		double calculateWage() {
			while(1){
				char chon;
				char loai;
				cout << "\nHeadCoach Or AssistantCoach(H/C): ";
				cin >> loai;
				loai = toupper(loai);
				if(loai == 'H'){
				return getSalary()*this->bounus*1000;
				cout<<calculateWage( ) ;
				}else{
				return getSalary()*this->bounus*800;
				}
			
			}
			return calculateWage() ;
		
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
		void valueBringingLastSeason () {
			if(this->TimeInTerm<1)   
			{
				cout<<"..." ;
			}
			else 
			cout<<"Num of win :"<<this->numOfWin ;
			cout<<"Num of win :"<<this->numOfLose;
		}
};
