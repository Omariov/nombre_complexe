#include "complexe.cpp"
 
int main()
{
	complexe c1(3,4);
	complexe c2(5,7);
	
	
	c1.afficher();
	c2.afficher();
	cout<<endl;
	cout<<"le module est:  "<<c1.module();
	cout<<endl;
	c1.comparerrel(c2);
	cout<<endl;
	return(0);
	
}
