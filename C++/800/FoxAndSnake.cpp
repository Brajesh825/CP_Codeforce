#include <iostream>
using namespace std;

void drawSnake(int height,int width)
{
	bool flag=false;

	for (int i = 0; i < height; ++i)
		{
			bool localFlag=false;
			for (int j = 0; j < width; ++j)
			{
				if(i%2==0){
					cout<<"#";
				}
				else{
					if(j==width-1 && flag==false &&localFlag==false){
						cout<<"#";
						flag=true;
					}else if(j==0 && flag==true){
						cout<<"#";
						flag=false;
						localFlag=true;
					}
					else
						cout<<".";
				}
			}
			cout<<endl;
		}	
}

int main(int argc, char const *argv[])
{
	int height,width;
	cin>>height>>width;

	drawSnake(height,width);
	return 0;
}