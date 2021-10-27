#include<iostream>
#include<math.h>
using namespace std;

class complexe
{
    int rel;
    int img;

    public:

	complexe(int x,int y);
	complexe(const complexe& c);
	void afficher() const;
	float module() const;
	void comparerrel(const complexe& c2) const;
	
	friend ostream& operator<<(ostream& ,const complexe&);
	friend istream& operator>>(istream& ,complexe&);
	complexe operator+(const complexe &z); 
	complexe& operator=(complexe &z );
	
	
};
