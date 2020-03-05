#include <iostream>
#include "Shape.h"
#define PI 3.1415926535897
using namespace std;
 
 
void Shape::enterValues(void) // Degistirilmeyecek
{
	cout << "Enter an integer number for x coordinate of center: ";
    cin  >> centerX;
	cout << "Enter an integer number for y coordinate of center: ";
    cin  >> centerY;
	cout << "Enter an integer number for length of segment: ";
    cin  >> segment;
}

int Shape::getPerimeter(void) // Degistirilmeyecek
{
	return segment;
}

//SQUARE FUNCTIONS

int Square::getPerimeter(void){
	return 4*segment;
}

int Square::getArea(void){
	return segment*segment;
}

//We don't need an overriden getValues function for a square as one segment is enough for calculations.

//RECTANGLE FUNCTIONS

int Rectangle::getPerimeter(void){
	return (2*segment+2*segment2);
}

int Rectangle::getArea(void){
	return segment*segment2;
}

void Rectangle::enterValues(void){
	Shape::enterValues();
	cout << "Enter an integer number for length of the shorter segment: ";
    cin  >> segment2;
}

//Circle FUNCTIONS

double Circle::getPerimeter(void){
	return 2*PI*segment;
}

double Circle::getArea(void){
	//the surface area of the Circle is 6*singular_area
	return PI*segment*segment;
}

//We don't need a seperate enterValues function for the Circle.