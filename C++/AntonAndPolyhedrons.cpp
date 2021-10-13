#include <iostream>
using namespace std;

int countFaces(string polygon)
{
	if(polygon =="Tetrahedron") {
		return 4;
	}
	else if(polygon =="Cube") {
		return 6;
	}
	else if(polygon =="Octahedron") {
		return 8;
	}
	else if( polygon =="Dodecahedron" ) {
		return 12;
	}
	else {
		return 20;
	}
}


int main(){
	int n,noOfFaces=0;
	cin>>n;

	while(n--)
	{
		string polygon;
		cin>>polygon;

		noOfFaces+=countFaces(polygon);
	}
	cout<<noOfFaces;
}