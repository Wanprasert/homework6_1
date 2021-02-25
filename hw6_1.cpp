#include<iostream>
#include<string>
using namespace std;
int main()
{
	int ps;
	float w, h, bmi, total;
	string n, bmi1;	
	cout <<"Enter number of Person : ";
	cin >>ps;
	cout <<"-----------------------------------"<<endl;
	for(int i=1;i<=ps;i++)
	{
		cout <<"Enter name "<<i<< "   : ";
		cin >>n;
		cout <<"Enter weight "<<i<< " : ";
		cin >>w;
		cout <<"Enter height "<<i<< " : ";
		cin >>h;
		total = (float)h/100;
		bmi = w/(total*total);

		if(bmi<16)
		{
			bmi1 ="Severe Thinness";
		}
		else if(bmi>=16&&bmi<17)
		{
			bmi1="Moderdate Thinness";
		}
		else if(bmi>=17&&bmi<18.5)
		{
			bmi1="Mild Thinness";
		}
		else if(bmi>=18.5&&bmi<25)
		{
			bmi1="Normal";
		}
		else if(bmi>=25&&bmi<30)
		{
			bmi1="Overweight";
		}
		else if(bmi>=30&&bmi<35)
		{
			bmi1="Obese Class |";
		}
		else if(bmi>=35&&bmi<40)
		{
			bmi1="Obese Class ||";
		}
		else if(bmi>=40)
		{
			bmi1="Obese Class |||";
		}

		cout <<"BMI" <<i<< " = "<<bmi<<endl;
		cout <<"Your Category of BMI is "<<bmi1<<endl;
		cout <<"-----------------------------------"<<endl;
	}	
	return(0);
}