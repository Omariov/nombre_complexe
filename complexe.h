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
	void afficher();
	float module();
	void comparerrel(const complexe& c2);
	
	
};
