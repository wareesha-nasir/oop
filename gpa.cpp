#include<iostream>
#include<conio.h>
using namespace std;
class gpa
{
	private:
		int credit[3];
		int subj;
		char grade;
	
	public:
	gpa()
	{}
	void calcgpa()
	{
	    double totalgradepoints=0;
		int gradepoint;
		cout<<"total subjects";
		cin>>subj;
		cout<<"***credit hours of the subjects are***"<<endl;
		for(int i=1;i<=3;i++)
		{
			cin>>credit[i];
		}
		double credithour=0;
		for(int i=1;i<=3;i++)
		{
			credithour=credithour+credit[i];
		}
		cout<<"total credit hour"<<credithour<<endl;
		for(int i=1;i<=3;i++)
		{
		cout<<"subject"<<i<<"    "credit[i]<<endl;
		}
		for(int i=1;i<=3;i++)
		{
			cout<<"subject"<<i<<"CREDIT HOUR "<<credit[i];
			cout<<"    "  "enter grade";
			cin>>grade;
			if(grade=='A')
			{
				
				gradepoint=credit[i]*4;
				cout<<gradepoint<<endl;
			}
			else if(grade=='B')
			{
				gradepoint=credit[i]*3;
				cout<<gradepoint<<endl;
			}
			else if(grade=='C')
			{
				gradepoint=credit[i]*2;
				cout<<gradepoint<<endl;
			}
			else if(grade=='D')
			{
				gradepoint=credit[i]*1;
				cout<<gradepoint<<endl;
			}
			else
			{
				cout<<"you are fail";
			}
			totalgradepoints=totalgradepoints+gradepoint;
			cout<<endl;
		}
		
		cout<<"\ntotal gradepoints are"<<totalgradepoints<<endl;
		//int credithour;//
		/*for(int i=1;i<=3;i++)
		{
			credithour=credit[i]+0;
		}*/
		//cout<<"total credit hour"<<credithour<<endl;//
		double gpa=0.0;
		gpa=totalgradepoints/credithour;
		cout<<endl<<"STUDENT: 1021-FESE-11-    "<<"Units:"<<credithour<<"   gradepoints:"<<totalgradepoints<<"    gpa"<<gpa;
	}
			
};
int main()
{
	gpa g1;
	g1.calcgpa();
	getch();
	
}
