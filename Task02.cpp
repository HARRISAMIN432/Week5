#include<iostream>
using namespace std ;
string pyramidVolume(float length , float breadth , float height) ;
int main()
{
    float length , breadth , height ;
    string volume ;
    cout << "Enter the length of the pyramid (in meters): " ;
    cin >> length ;
    cout << "Enter the width of the pyramid (in meters): " ;
    cin >> breadth ;
    cout << "Enter the height of the pyramid (in meters): " ;
    cin >> height ;
    volume = pyramidVolume(length,breadth,height) ;
    cout << "The volume of the pyramid is: " << volume ;
}

string pyramidVolume(float length , float breadth , float height) 
{
    float volume ;
    string Volume , unit ;
    volume = length*breadth*height / 3 ;
    Volume = to_string(volume);
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): " ;
    cin >> unit ;
    if (unit == "millimeters") 
  {
    return Volume + "cubic millimeters" ;
  }  
    if (unit == "centimeters") 
  {
    return  Volume + "cubic centimeters" ;
  }  
    if (unit == "meters") 
  {
    return  Volume + " cubic meters" ;
  }  
    if (unit == "kilometers") 
  {
    return  Volume + "cubic kilometers" ;
  }  
}
