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

void complexe::afficher() const
{
	cout<<endl<<rel<<" +i"<<img;
}

float complexe::module() const
{
	return (float)sqrt(pow(rel,2)+pow(img,2));
}


void complexe::comparerrel(const complexe& c2) const
{
	if(this->rel<c2.rel)
	{
		cout<<"1";
	}
	else{
	cout<<"0";
	}
}

complexe complexe::operator+(const complexe &z ) 
{
	this->rel+=z.rel;
	this->img+=z.img;
	
	return *this;	
}

complexe& complexe::operator=( complexe &z ) 
{
	this->rel=z.rel;
	this->img=z.img;
	
	return *this;
	
}





ostream& operator<<(ostream& o ,const complexe& c)
{
	o<<c.rel<<" +i"<<c.img<<endl;
	return o;
}


istream& operator>>(istream& i ,complexe& c)
{
	cout<<"donner un rel: ";
	cin>>c.rel;
	cout<<"donner un img: ";
	cin>>c.img;	
	return i;
	
}


























