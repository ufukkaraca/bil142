#include <iostream>
#include "Shape.h"
using namespace std;
 
int main()
{
        Square square;
		Rectangle rectangle;
        Circle circle;
         
        square.enterValues();
        cout << "Perimeter of square is : "<< square.getPerimeter() <<  endl;
		cout << "Area of square is : "<< square.getArea() <<  endl;
        
		rectangle.enterValues();
        cout << "Perimeter of rectangle is : "<< rectangle.getPerimeter() <<  endl;
		cout << "Area of rectangle is : "<< rectangle.getArea() <<  endl;
		
		circle.enterValues();
        cout << "Perimeter of circle is : "<< circle.getPerimeter() <<  endl;
		cout << "Area of cirle is : "<< circle.getArea() <<  endl;
        
         
        return 0;
}