#include <iostream>

using namespace std;
int main()
{

//Title
  cout<<"Software Store | Quantity Discount"<<endl<<endl;

//Body

  double packageprice = 200.0;
  int units;
  double discount = 0.0;
  double totalcost;

  cout<<"Enter the Number of packages purchased: "<<endl;
  cin >> units;

  if (units >= 10 && units <=19) //20% Discount
    {
      discount = .20;
      totalcost = units * packageprice * (1-discount);
    }
  else if (units >= 20 && units <=40) //30% Discount
    {
      discount = .30;
      totalcost = units * packageprice * (1-discount);
    }
  else if (units >= 50 && units <=90) //40% Discount
    {
      discount = .40;
      totalcost = units * packageprice * (1-discount);
    }
  else if (units >= 100) //50% Discount
    {
      discount = .50;
      totalcost = units * packageprice * (1-discount);
    }
  else //No Discount
    {
      totalcost = units * packageprice;
    }


  cout<<endl<<"Total Cost: $"<<totalcost<<endl;


  return 0;

}
