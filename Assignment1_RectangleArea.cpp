#include <iostream>

using namespace std;

int main()
{
	
    // Title
        cout<<"Area of Rectangles"<<endl<<endl;

    //Input
        int rec1length, rec1width, rec2length, rec2width;

        cout<<"Enter the Length of the first rectangle: "<<endl;
        cin >> rec1length;
        cout<<"Enter the Width of the first rectangle: "<<endl;
        cin >> rec1width;

        int area1;
        area1 = rec1length * rec1width;

        cout<<"The Area of the first Rectangle is: "<<area1<<endl;

        cout<<endl<<"Enter the Length of the first rectangle: "<<endl;
        cin >> rec2length;
        cout<<"Enter the Width of the first rectangle: "<<endl;
        cin >> rec2width;

        int area2;
        area2 = rec2length * rec2width;

        cout<<"The Area of the Second Rectangle is: "<<area2<<endl<<endl;


        if (area1 > area2)
        {
            cout<<"The 1st rectangle has the greater area.";
        }
        else if (area1 < area2)
        {
            cout<<"The 2nd rectangle has the greater area.";
        }
        else
        {
            cout<<"The areas are the same.";
        }
        


    return 0;
}

