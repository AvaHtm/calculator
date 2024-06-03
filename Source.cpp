#include<iostream>
#include<cstring>//for pow function
using namespace std;
struct calculator{
	int leftvalue , rightvalue;
	char Operator;
	void start()
	{
		cout<<"enter :";
		cin>>leftvalue>>Operator>>rightvalue;
	}
	int calculate()
	{
		int result;
		if(Operator=='+')
		{
			result=leftvalue+rightvalue;
			cout<<"+:"<<result<<endl;
		}
		else if(Operator=='-')
		{
			result=leftvalue-rightvalue;
			cout<<"-:"<<result<<endl;
		}
		else if(Operator=='^')
		{
			result=pow(leftvalue,rightvalue);
			cout<<"^:"<<result<<endl;
		}
		else
		{
		    cout << "Bad operator"<<endl;
            result = 0;
		}
		return result;
	}
};
int main()
{
	calculator c;
	c.start();
	int result=c.calculate();
	return 0;
}
