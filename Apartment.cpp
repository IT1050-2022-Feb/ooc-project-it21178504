#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"Apartment.h"


Apartment::Apartment(){
	    	floorNo=0;
	    	rooms=0;
		}
		
Apartment::Apartment(int pID,char pType[10],char prv[20],char twn[20],double p,char s[10],int rm,int fn):Property(pID,pType,prv,twn,p,s){
			floorNo=fn;
			rooms=rm;
			
			cout<<"\n\nProperty ID: "<<pID<<" Apartment object created";
	    }
	    
void Apartment::setDetails(){
}
void Apartment::updateDetails(){
}
void Apartment::removeDetails(){
}
void Apartment::displayDetails(){
}
Apartment::~Apartment(){
			cout<<"\n\nProperty ID: "<<propertyID<<" Apartment object deleted";
		}
