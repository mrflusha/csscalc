
#include <iostream>
#include <cstdlib>
using namespace std;






int main ()
{
	double width,b, res;
	
	char exit = 'q';
	char type;


	bool ex = false;



	cout << "enter width:   ";
	cin>> width  ;
	


		/* code */


	if (width <= 10000 && width >= 2)
	{
					system("cls");
					system("clear");
		while ( ex == false)
		{
					system("cls");

					system("clear");
			cout << "\nentered px now:   \n" << b << endl;
					
			cin>> b ;
				if (b >= 1 && b <= width)
				{
					
					res = b / width * 100;
					cout << "\nCSS\n" << res << "vmax;\n" << "\n";
					cout << "\nType any for continue or q for exit...\n" << "\nenter px:   \n";
					cin >> type;
					if (type == exit)
					{
						ex = true;
						cout << "GG\n";
						break;
						
					}
				}else{
					ex = true;
					cout << "Unreal\nEnter px!  \n";
					
					break;
				}
			
		}
		
	}else{
		ex = true;
		cout << "Eject\n";
	}



	
	return 0;
}