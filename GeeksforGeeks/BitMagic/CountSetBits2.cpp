#include<bits/stdc++.h>
using namespace std;


    int get_left_set_bit_pos(int n) {
        int pos = -1;
        while(n) {
            pos++;
            n >>= 1;
        }
        return pos;
    }

    int countSetBits(int n)
    {
        int cnt = 0;
        int x = get_left_set_bit_pos(n);
        while(n) {
            cnt += x*(1<<x)/2 + n-(1<<x)+1;
            n = n & ~(1<<x);

            // setting x to left most set bit position of latest n
            while(n && x > 0) {
                if(n & (1<<x))
                    break;
                x--;
            }
        }
        return cnt;
    }

int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 {
	       int n;
	       cin>>n;
	       cout << countSetBits(n) << endl;
	  }
	  return 0;
}