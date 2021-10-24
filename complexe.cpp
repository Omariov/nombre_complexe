#include "complexe.h"


complexe::complexe(int x=0,int y=0)
{
	this->rel=x;
	this->img=y;
	
}

complexe::complexe(const complexe& c)
{
	this->rel=c.rel;
	this->img=c.img;	
}

void complexe::afficher()
{
	cout<<endl<<rel<<" +i"<<img;
}

float complexe::module()
{
	return (float)sqrt(pow(rel,2)+pow(img,2));
}

void complexe::comparerrel(const complexe& c2)
{
	if(this->rel<c2.rel)
	{
		cout<<"1";
	}
	else{
	cout<<"0";
	}
}

