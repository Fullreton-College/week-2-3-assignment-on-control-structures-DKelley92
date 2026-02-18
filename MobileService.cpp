#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double plan_a_price = 39.99;
const double plan_b_price = 59.99;
const double plan_c_price = 79.99;

const double plan_a_GB = 2.0;
const double plan_b_GB = 8.0;

const double add_cost_per_GB = 8.00;

int main()
{

//Title
    cout<<"Monthly Bill Calculator and Savings"<<endl<<endl;

//Body

    string customername;
    char plan;
    int gb_used;
    double total_bill = 0.0;

//Input

    cout<<"Enter customer name: ";
    getline(cin, customername);

    cout<<"Enter plan purchased (a, b, or c): ";
    cin>> plan;

    cout<<"Enter gigabytes used: ";
    cin>> gb_used;

    plan = toupper(plan);

//Calculations for Total Bill

    switch(plan)
    {
        case'A':
            total_bill = plan_a_price;
            if (gb_used > plan_a_GB)
                {
                    total_bill += (gb_used - plan_a_GB) * add_cost_per_GB;
                }
            break;

        case 'B':
                total_bill = plan_b_price;
            if (gb_used > plan_b_GB)
                {
                    total_bill += (gb_used - plan_b_GB) * add_cost_per_GB;
                }
            break;

        case 'C':
                total_bill = plan_c_price;
            break;

        default:
                cout<<"Invalid Plan Selected."<<endl;
                return 1;
            }

//Output

    cout<<fixed<<setprecision(2);
    cout<<"Monthly Bill"<<endl<<endl;

    cout<<"Customer Name: "<<customername<<endl;
    cout<<"Plan Purchased: "<<plan<<endl;
    cout<<"Data Used: "<<gb_used<<"GB"<<endl;
    cout<<"Total Amount Due: $"<<total_bill<<endl<<endl;

//Savings

    if (plan == 'A')
        {
            double costwithb = plan_b_price;

            if (gb_used > plan_b_GB)
                {
                    costwithb += (gb_used - plan_b_GB) * add_cost_per_GB;
                }
            
            double costwithc = plan_c_price;

            if (costwithb < total_bill)
                {
                    cout<<"You would save $"<<(total_bill - costwithb)
                        <<"by switching to Plan B"<<endl;
                }

            if (costwithc < total_bill)
                {
                    cout<<"You would save $"<<(total_bill - costwithc)
                        <<"by switching to Plan C"<<endl;
                }
        }

    else if (plan == 'B')
        {
            double costwithc = plan_c_price;

            if (costwithc < total_bill)
                {
                    cout<<"You would save $"<<(total_bill - costwithc)
                        <<" by switching to Plan C"<<endl;
                }
        }    

return 0;
}