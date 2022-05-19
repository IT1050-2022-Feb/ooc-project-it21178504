#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"

class Apartment:public Property{
	private:
		int floorNo;
		int rooms;
	public:
	    Apartment();
		Apartment(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],int rm,int fn);
		void setDetails();
		void updateDetails();
		void removeDetails();
		void displayDetails();
		~Apartment();	
};

