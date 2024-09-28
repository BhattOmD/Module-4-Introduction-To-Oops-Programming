#include<iostream>
#include<cmath>
using namespace std;
const double CostPerHour = 18.50;
const double CostPerMinute = .40; 
const double CostOfDinner = 20.70;
class event
{
	private:
	string eventName;
    string customerfirstname;
    string customerlastname;
    int numberofguests;
    int numberofminutes;
    
	public :
		void details()
		{
						
			cout<<"\nEnter the event name =";
			cin>>eventName;
			cout<<"\nEnter the customer first name =";
			cin>>customerfirstname;
			cout<<"\nEnter the customer last name =";
			cin>>customerlastname;
			cout<<"\nEnter the number of guests =";
			cin>>numberofguests;
			cout<<"\nEnter the number of minutes =";
			cin>>numberofminutes;
		}
		void cost()
		{
			int numberofServers = ceil((double)numberofguests/ 20);
  			
			 double cost1=(numberofminutes/60)*CostPerHour;
			 double cost2=(numberofminutes%60)*CostPerMinute;
			 double costforoneserver = cost1 + cost2;      
			
			double totalfoodcost=numberofguests*CostOfDinner;
			double averagecost= totalfoodcost/numberofguests;
			double totalcost= totalfoodcost + (costforoneserver*numberofServers);     
        	double depositamount=totalcost*0.25;
        	cout<<"\n\n====================== Event Estimantion for : "<<customerfirstname <<" "<<customerlastname<<"  =========\n";
			cout<<"Number of services ="<<numberofServers<<"\n";
        	cout<<"cost of services= "<<costforoneserver*numberofServers<<"\n";
        	cout<<"The cost of food is ="<<totalfoodcost<<"\n";;
			cout<<"Average cost per person ="<<averagecost<<"\n";
			cout<<"Total cost is ="<<totalcost<<"\n";
			cout << "Please deposit a 25% deposit to reserve the event\n";
        	cout << "The deposit needed is: " << depositamount << "\n";
			}
};
int main()
{
	cout<<"*****Event Managementment system*****\n";
	event e1;
	e1.details();
	e1.cost();
	return 0;
}
