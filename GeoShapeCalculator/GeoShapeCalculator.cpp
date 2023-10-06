#include <iostream>
#include <cmath>
using namespace std;
void lis(string arr[],int num){
	for(int i=0;i<num;i++){
		cout  << i+1  << " - " << arr[i] << endl;
	}
}
void invalid(){
	cout << "Invalid Process!" << endl;
}
int main(){
	char ent;
	float pi =3.14;
	int chc,shp;
	float r,h;
	float a,b,c;
	float s;
	float result=0;
	int cho;
	string met[] = {"By_the_base_and_the_height","By_the_diagonals"};
	string shapes[]={"Triangle_Shapes","Rectangular_Shapes","Circular_Shapes"};
	string opt[]={"The_Perimeter_Of_The Circle","The_Area_Of_The_Circle","The_Area_Of_The_Surface_Of_The_Cylinder","The_Volume_Of_The_Cylinder","The_Area_Of_The_Surface_Of_The_Sphere","The_Volume_Of_The_Sphere","The_Area_Of_The_Surface_Of_The_Cone","The_Volume_Of_The_Cone"};
	string opt1[]={"The_Perimeter_Of_The_Triangle","The_Area_Of_The_Triangle","The_Area_Of_The_Surface_Of_Triangular_Pyramid","The_Volume_Of_Triangular_Pyramid","The_Area_Of_The_Surface_Of_Square_Pyramid","The_Volume_Of_Sqaure_Pyramid","The_Area_Of_The_Surface_Of_Rectangular_Pyramid","The_Volume_Of_Rectangular_Pyramid","The_Area_Of_The_Surface_Of_Pentagonal_Pyramid","The_Volume_Of_Pentagonal_Pyramid","The_Area_Of_The_Surface_Of_Hexagonal_Pyramid","The_Volume_Of_Hexagonal_Pyramid","The_Area_Of_The_Surface_Of_Triangular_Prism","The_Volume_Of_Triangular_Prism"};
	string opt2[]={"The_Perimeter_Of_The_Square","The_Area_Of_The_Square","The_Perimeter_Of_Rectangular","The_Area_Of_Rectangular","The_Perimeter_Of_Parallelogram","The_Area_Of_Parallelogram","The_Perimeter_Of_The_Rhombus","The_Area_Of_The_Rhombus","The_Area_Of_The_Surface_Of_The_Cube","The_Volume_Of_The_Cube","The_Area_Of_The_Surface_Of_The_Rectangular_Prism","The_Volume_Of_The_Rectangular_Prism","The_Area_Of_The_Surface_Of_The_Parallelogram_Prism","The_Volume_Of_The_Parallelogram_Prism","The_Area_Of_The_Surface_Of_The_Rhombus","The_Volume_Of_The_Rhombus"};
	do{	
	cout << "The options : " << endl << endl;
	lis(shapes,3);
	cout << "Choose your option : ";
	cin >> shp;
	cout << "The options : " << endl << endl;
    if(shp==1){
    lis(opt1,14);
	cout << endl;
	cout << "Choose your option : ";
    cin >> chc;	
    switch(chc){
		case 1:
	    case 2:
			cout << "Enter the 1st edge of the triangle : ";
			cin >> a;
			cout << "Enter the 2nd edge of the triangle : ";
			cin >> b;
			cout << "Enter the 3rd edge of the triangle : ";
			cin >> c;
			if((a+b)>=c&&(a+c)>=b&&(b+c)>=a){
			if(chc==1){
			result = a + b + c;
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			s = (a+b+c) / 2;
			result =  sqrt(s * (s-a) * (s-b)* (s-c));
			cout << opt1[chc-1] << " = " << result << endl;	
			}
		}else{
			invalid();
		}
			break;
		case 3:
		case 4:
			cout << "Enter the 1st edge of the triangle : ";
			cin >> a;
			cout << "Enter the 2nd edge of the triangle : ";
			cin >> b;
			cout << "Enter the 3rd edge of the triangle : ";
			cin >> c;
			if((a+b)>=c&&(a+c)>=b&&(b+c)>=a){
			if(chc==3){
			s = (a+b+c) / 2;
			cout << "Enter the slant height : ";
			cin >> h;
			result = sqrt(s * (s-a) * (s-b)* (s-c)) + (a + b + c) * h;
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			cout << "Enter the pyramid height : ";
			cin >> h;
			s = (a+b+c) / 2;
			result = (sqrt(s * (s-a) * (s-b)* (s-c)) * h) / 3;
			cout << opt1[chc-1] << " = " << result << endl;	
			}
		}else{
			invalid();
		}
			break;
		case 5:
		case 6:
			
			if(chc==5){
			cout << "Enter the 1st edge of the square (also a side of the triangle) : ";
			cin >> a;
			cout << "Enter the slant height : ";
			cin >> h;
			result =  (2 * a * h) + (a * a);
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			cout << "Enter the 1st side of the square (also a side of the triangle) : ";
			cin >> a;
			cout << "Enter the height : ";
			cin >> h;
			result =  (a * a * h) / 3;
			cout << opt1[chc-1] << " = " << result << endl;	
			}
			break;	
		case 7:
		case 8:
			float d,s1;
			if(chc==7){
			cout << "Enter the 1st edge of the triangle : ";
			cin >> a;
			cout << "Enter the 2nd edge of the triangle : ";
			cin >> b;
			cout << "Enter the 3rd edge of the triangle (the 1st side of the rectangular) : ";
			cin >> c;
			cout << "Enter the 3rd edge of the triangle (the 2nd side of the rectangular) : ";
			cin >> d;
			if((a+b)>=c&&(a+c)>=b&&(b+c)>=a && (a+b)>=d&&(a+d)>=b&&(b+d)>=a){
			cin >> d;
			s = (a+b+c) / 2;
			s1 = (a+b+d) / 2;
			result =  2 * sqrt(s * (s-a) * (s-b)* (s-c)) + 2 * sqrt(s1 * (s1-a) * (s1-b)* (s1-d)) + (c * d);
			cout << opt1[chc-1] << " = " << result << endl;
		}else{
			invalid();
		}
			}else{
			cout << "Enter the 1st edge of the rectangular : ";
			cin >> c;
			cout << "Enter the 2nd edge of the rectangular : ";
			cin >> d;
			cout << "Enter the pyramid height : ";
			cin >> h;
			result =  (c * d * h) / 3;
			cout << opt1[chc-1] << " = " << result << endl;	
			}
			break;
		case 9:
		case 10:
			cout << "Enter an edge of the pentagon : ";
			cin >> b;
			cout << "Enter the apothem of the pentagon : ";
			cin >> a;
			cout << "Enter the slang height : ";
			cin >> h;
			if(chc==9){
			result =  ((5 * b ) * (a + h)) / 2;
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			result =  (5 * b * a * h) / 6;
			cout << opt1[chc-1] << " = " << result << endl;	
			}
			break;	
		case 11:
		case 12:
			cout << "Enter an edge of the hexagon : ";
			cin >> b;
			cout << "Enter the apothem of the hexagon : ";
			cin >> a;
			cout << "Enter the slang height : ";
			cin >> h;
			if(chc==11){
			result =  (3 * b ) * (a + h);
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			result =  (5 * b * a * h) / 6;
			cout << opt1[chc-1] << " = " << result << endl;	
			}
			break;	
		case 13:
		case 14:
			cout << "Enter the 1st edge of the triangle : ";
			cin >> a;
			cout << "Enter the 2nd edge of the triangle : ";
			cin >> b;
			cout << "Enter the 3rd edge of the triangle : ";
			cin >> c;
			cout << "Enter the height : ";
			cin >> h;
			if((a+b)>=c&&(a+c)>=b&&(b+c)>=a){
			if(chc==13){
			s = (a+b+c) / 2;
			result = 2 * sqrt(s * (s-a) * (s-b)* (s-c)) + (a + b + c) * h;
			cout << opt1[chc-1] << " = " << result << endl;
			}else{
			s = (a+b+c) / 2;
			result = (sqrt(s * (s-a) * (s-b)* (s-c)) * h);
			cout << opt1[chc-1] << " = " << result << endl;	
			}
			}else{
			invalid();
		}
			break;	
		default:
			invalid();
			break;
	}
	}else if(shp==2){
	lis(opt2,16);
	cout << endl;
	cout << "Choose your option : ";
    cin >> chc;	
    switch(chc){
		case 1:
	    case 2:
			cout << "Enter the edge of the square : ";
			cin >> a;
			if(chc==1){
            result = 4 * a;
            cout << opt2[chc-1] << " = " << result << endl;
		}else{
			result = a * a;
            cout << opt2[chc-1] << " = " << result << endl;
		}
		break;
	    case 3:
	    case 4:
			cout << "Enter the 1st edge of the rectangular : ";
			cin >> a;
		    cout << "Enter the 2nd edge of the rectangular : ";
			cin >> b;
			if(chc==3){
            result = 2 * (a+b);
            cout << opt2[chc-1] << " = " << result << endl;
		}else{
			result = a * b;
            cout << opt2[chc-1] << " = " << result << endl;
		}
		break;
		case 5:
	    case 6:
		case 7:
		case 8:	
		if(chc==5 ||chc==7){
		if(chc==5){
		cout << "Enter the 1st edge of the parallelogram : ";
		cin >> a;
		cout << "Enter the 2nd edge of the parallelogram : ";
		cin >> b;
	    }else{
	    cout << "Enter the 1st edge of the rhombus : ";
		cin >> a;
		cout << "Enter the 2nd edge of the rhombus : ";
		cin >> b;	
		}
            result = 2 * (a+b);
            cout << opt2[chc-1] << " = " << result << endl;
		}else{
		cout << "The solutions methods : " << endl;
		lis(met,2);
		cout << "Choose your solution method : ";
		cin >> cho;
		if(cho==1){
		if(chc==6){
		cout << "Enter the edge of the parallelogram : ";
		cin >> a;
		cout << "Enter the height of the parallelogram : ";
		cin >> b;
	    }else{
	    cout << "Enter the edge of the rhombus : ";
		cin >> a;
		cout << "Enter the height of the rhombus : ";
		cin >> b;
	}
			result = a * b;
            cout << opt2[chc-1] << " = " << result << endl;
    }else if(cho==2){
		if(chc==6){
		cout << "Enter the 1st diagonal of the parallelogram : ";
		cin >> a;
		cout << "Enter the 2nd diagonal of the parallelogram : ";
		cin >> b;
		}else{
		cout << "Enter the 1st edge of the rhombus : ";
		cin >> a;
		cout << "Enter the 2nd edge of the rhombus : ";
		cin >> b;
	}
			result = (a * b) / 2;
            cout << opt2[chc-1] << " = " << result << endl;
    }else{
    	invalid();
	}
		}
		break;
	case 9:
	case 10:
			cout << "Enter the edge of the cube : ";
			cin >> a;
			if(chc==9){
            result = 6 * a * a;
            cout << opt2[chc-1] << " = " << result << endl;
		}else{
			result = a * a * a;
            cout << opt2[chc-1] << " = " << result << endl;
		}
		break;
	case 11:
	case 12:
			cout << "Enter the 1st edge of the rectangular : ";
			cin >> a;
		    cout << "Enter the 2nd edge of the rectangular : ";
			cin >> b;
			cout << "Enter the height of the prism: ";
			cin >> h;
			if(chc==11){
            result = (2 * a * b) + (2 * a * h) + (2 * b * h);
            cout << opt2[chc-1] << " = " << result << endl;
		}else{
			result = a * b * h;
            cout << opt2[chc-1] << " = " << result << endl;
		}
		break;	
	case 13:
	case 14:
		if(chc==13){
		cout << "Enter the 1st edge of the parallelogram (that has the height): ";
		cin >> a;
		cout << "Enter the 2nd edge of the parallelogram : ";
		cin >> b;
		cout << "Enter the height of the parallelogram : ";
		cin >> c;
		cout << "Enter the height of the prism: ";
		cin >> h;
		result = (2 * a * c) + (2 * a * h) + (2 * b * h);
        cout << opt2[chc-1] << " = " << result << endl;
	}else{
		 cout << "Enter the 1st edge of the parallelogram (that has the height): ";
		cin >> a;
		cout << "Enter the height of the parallelogram : ";
		cin >> c;
		cout << "Enter the height of the prism: ";
		cin >> h;
		result = a * c * h;
        cout << opt2[chc-1] << " = " << result << endl;
	}
		
		break;	
	case 15:
	case 16:
	    if(chc==13){
		cout << "Enter the 1st edge of the rhombus (that has the height): ";
		cin >> a;
		cout << "Enter the 2nd edge of the rhombus : ";
		cin >> b;
		cout << "Enter the height of the rhombus : ";
		cin >> c;
		cout << "Enter the height of the prism: ";
		cin >> h;
		result = (2 * a * c) + (2 * a * h) + (2 * b * h);
        cout << opt2[chc-1] << " = " << result << endl;
	}else{
		 cout << "Enter the 1st edge of the rhombus (that has the height): ";
		cin >> a;
		cout << "Enter the height of the rhombus : ";
		cin >> c;
		cout << "Enter the height of the prism: ";
		cin >> h;
		result = a * c * h;
        cout << opt2[chc-1] << " = " << result << endl;
	}
		
		break;	
	default:
			invalid();
			break;
	}
	}else if(shp==3){
	lis(opt,8);
	cout << endl;
	cout << "Choose your option : ";
    cin >> chc;
	switch(chc){
		case 1:
	    case 2:
			cout << "Enter the radius : ";
			cin >> r;
			if(chc==1){
			result = 2 * pi * r;
			cout << opt[chc-1] << " = " << result << endl;
			}else{
			result =  pi * r * r;
			cout << opt[chc-1] << " = " << result << endl;	
			}
			break;
		case 3:
		case 4:
			cout << "Enter the radius : ";
			cin >> r;
			cout << "Enter the height : ";
			cin >> h;
			if(chc==3){
			result = (2 * pi * r * r) + (2 * pi * r * h);
			cout << opt[chc-1] << " = " << result << endl;
			}else{
			result =  pi * r * r * h;
			cout << opt[chc-1] << " = " << result << endl;	
			}
			break;
		case 5:
		case 6:
			cout << "Enter the radius : ";
			cin >> r;
			if(chc==5){
			result =  4 * pi * r * r;
			cout << opt[chc-1] << " = " << result << endl;
			}else{
			result =  (4 * pi * r * r * r) / 3;
			cout << opt[chc-1] << " = " << result << endl;	
			}
			break;
		case 7:
		case 8:
			cout << "Enter the radius : ";
			cin >> r;
			cout << "Enter the height : ";
			cin >> h;
			if(chc==7){
			result =  (pi * r * r) + (pi * r * sqrt((r * r)+(h * h)));
			cout << opt[chc-1] << " = " << result << endl;
			}else{
			result =  (pi * r * r * h) / 3;
			cout << opt[chc-1] << " = " << result << endl;	
			}
			break;	
		default:
			invalid();
			break;
	}
}else{
	invalid();
}
cout << "Do you want to close the program (Y / N) : ";
cin >> ent;
}while(ent!='Y');
cout << endl << "See you again :)" << endl;
}
