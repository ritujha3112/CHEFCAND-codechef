#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int res = n-x;
	    if(res<=0){
	        cout<<"0"<<endl;
	    }
	    else if(res%4==0){
	        cout<<res/4<<endl;
	    }
	    else{
	        cout<<res/4+1<<endl;
	    }
	}
	return 0;
}