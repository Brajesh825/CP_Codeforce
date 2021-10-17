#include <iostream>
using namespace std;

int main()
{
	string num1,num2;
	int length;
	cin>>num1>>num2;
	length=num1.length();
	int arr[length];

	int flag=0;

	for(int i = length-1; i >= 0; --i) {
		if(num1[i]=='0' && num2[i]=='0'){
			if (flag){
				arr[i]=1;
				flag=0;
			}else{
				arr[i]=0;
			}
		}
		else if(num1[i]=='1' && num2[i]=='0'){
			if(flag){
				arr[i]=0;
				flag=1;
			}else{
				arr[i]=1;
			}
		}
		else if(num1[i]=='0' && num2[i]=='1'){
			if(flag){
				arr[i]=0;
				flag=1;
			}else{
				arr[i]=1;
			}
		}
		else if(num1[i]=='1' && num2[i]=='1'){
			if(flag){
				arr[i]=1;
				flag=1;
			}else{
				arr[i]=0;
				flag=1;
			}
		}
	}

	for (int i = 0; i < length; ++i)
	{
		cout<<arr[i];
	}

}