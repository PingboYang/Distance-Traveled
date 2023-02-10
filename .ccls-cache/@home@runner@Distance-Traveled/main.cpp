#include <iostream>
#include <iomanip>
using namespace std;

void travelData();
int main() {
  travelData();
}

void travelData(){
  int speed;
  int traveledHour;
  int hour;
  int traveledDistance;
    cout<<"\nEnter the car's speed in mph: ";
    cin>>speed;
    while(speed<0){
      cout<<"\nThe car's speed not accept negative: ";
      cin>>speed;
    }
    cout<<"\nEnter hours the car has traveled: ";
    cin>>traveledHour;
    while(traveledHour<1){
      cout<<"\nThe hours of the car has traveled can not less than 1: ";
      cin>>traveledHour;
    }
    cout<<"\nHour"<<setw(40)<< "Distance Traveled";
    cout<<"\n----------------------------------------------";
    for(hour=1; hour<=traveledHour; hour++){
      traveledDistance=speed*hour;
      cout<<"\n"<<hour<<setw(40)<<traveledDistance;
    }
    
  }
