#include "complexe.cpp"
 
int main()
{
	complexe c1(3,4);
	complexe c2(5,7);
	complexe c3(c1);
	complexe c4;
	
//	
//	c1.afficher();
//	c2.afficher();
//	c3.afficher();
//	cout<<endl;
//	cout<<"le module est:  "<<c1.module();
//	cout<<endl;
//	c1.comparerrel(c2);
//	cout<<endl;
//	c1.operator+(c2); //  c1+c2;
//	c1.afficher();
//	cout<<endl;
	
//	cin>>c4;
//	cout<<c4;

	//c4.operator=(c1);  
	c4=c1;
	
	c4.afficher();
	
	
	
	
	
	return(0);
	
}
