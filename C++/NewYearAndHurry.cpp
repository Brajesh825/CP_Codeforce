#include <iostream>
using namespace std;

int main(){
	int noOfProblems,timeToGetToParty,solvingTime,problemSolved=0,timeTaken=0;
	cin>>noOfProblems>>timeToGetToParty;

	solvingTime=240 - timeToGetToParty;

	for (int i = 1; i <=noOfProblems ; ++i)
		{
			timeTaken+=5*i;
			if(timeTaken<=solvingTime){
				problemSolved++;
			}else{
				break;
			}
		}	
	cout<<problemSolved;
}