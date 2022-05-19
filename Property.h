#include<iostream>
#include<cstring>
using namespace std;
#include "RegisteredCustomer.h"


class Property{
	protected:
		int propertyID;
		char propertyType[10];
		char province[20];
		char town[20];
		double price;
		char status[10];
		
		RegisteredCustomer* rc;
		
	public:
		Property();
		Property(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10]);
		void addRegisteredCustomer(RegisteredCustomer* rCus);
		void setDetails();
		void updateDetails();
		void displayDetails();
		void removeDetails();
		void reserve();
		~Property();
};

