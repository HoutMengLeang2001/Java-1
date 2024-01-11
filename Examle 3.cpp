#include<iostream>
#include<iomanip>
using namespace std;
int main(){
		int id;
		string name;
		string gender;
		float score1,score2,score3,score4,total;
		
		cout<<"\n========================[input information of students]========================\n"<<endl;
		cout<<"\t\n==> Input ID        = ";cin>>id;
		cout<<"\t\n==> Input Name      = ";cin.ignore(); getline(cin,name);
		cout<<"\t\n==> Input Gender    = ";cin>>gender;
		cout<<"\t\n==> Input Score1    = ";cin>>score1;
		cout<<"\t\n==> Input Score2    = ";cin>>score2;
		cout<<"\t\n==> Input Score3    = ";cin>>score3;
		cout<<"\t\n==> Input Score4    = ";cin>>score4;
		
		cout<<"\n========================[output information of students]========================\n"<<endl;
//		cout<<"\tID\tName\tGender\tScore1\tScore2\tScore3\tScore4\n"<<endl<<"\t"<<id<<"\t"<<name<<"\t"
//			<<gender<<"\t"<<score1<<"\t"<<score2<<"\t"<<score3<<"\t"<<score4;
		cout<<setw(10)<<"ID"<<setw(12)<<"Name"<<setw(14)<<"Gender"<<setw(14)<<"Score1"<<setw(14)<<"Score2"
		<<setw(14)<<"Score3"<<setw(14)<<"Score4"<<endl<<endl;
		
		cout<<setw(10)<<id<<setw(12)<<name<<setw(14)<<gender<<setw(14)<<score1<<setw(14)<<score2<<setw(14)
		<<score3<<setw(14)<<score4<<endl<<endl;
	return 0;
}
