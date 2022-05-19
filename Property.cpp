#include<iostream>
#include<cstring>
using namespace std;
#include "RegisteredCustomer.h"
#include"Property.h"

Property::Property(){
			propertyID=0;
			strcpy(propertyType," ");
			strcpy(province," ");
			strcpy(town," ");
			price=0;
			strcpy(status," ");
		}
		
Property::Property(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10]){
		    propertyID=pID;
		    strcpy(propertyType,pType);
		    strcpy(province,prv);
		    strcpy(town,twn);
		    price=p;
		    strcpy(status,s);
		    
		    cout<<"\n\nProperty ID: "<<propertyID<<"Property object created";
		}
		
void Property::addRegisteredCustomer(RegisteredCustomer* rCus){
			rc=rCus;
		}
		
void Property::setDetails(){}
void Property::updateDetails(){}
void Property::displayDetails(){}
void Property::removeDetails(){}
void Property::reserve(){}

Property::~Property(){
			cout<<"\n\nProperty ID: "<<propertyID<<"Property object deleted";
		}
