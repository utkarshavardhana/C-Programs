#include <bits/stdc++.h>
using namespace std;

/*
  This program calculates the median from a stream of input numbers every single time a number is added.
  e.g.,
    Flow in stream : 5, 15, 1, 3 
	5  goes to stream  -->  median 5  (5) 
	15 goes to stream  -->  median 10 (5, 15) 
	1  goes to stream  -->  median 5  (5, 15, 1) 
	3  goes to stream  -->  median 4  (5, 15, 1, 3) 
*/

int main(){
	int n;
	cin>>n;
	priority_queue <int, vector<int> > mxHeap;
	priority_queue <int, vector<int>, greater<int> > mnHeap;
	
	if(n >= 2){
		int ele1, ele2;
		cin>>ele1;
		cout<<ele1<<endl;
		cin>>ele2;
		cout<< (ele1 + ele2) / 2 <<endl;
		if(ele1 > ele2){
			swap(ele1, ele2);
		}
		mxHeap.push(ele1);
		mnHeap.push(ele2);
	}
	
	for(int i = 3; i <= n; i++){
		int ele;
		cin>>ele;
		
		int mxt = mxHeap.top();
		int mnt = mnHeap.top();
		if(ele <= mxt){
			mxHeap.push(ele);
		}else{
			mnHeap.push(ele);
		}
		
		int mxsize = mxHeap.size();
		int mnsize = mnHeap.size();
		if(mxsize - mnsize > 1){
			int temp = mxHeap.top();
			mxHeap.pop();
			mnHeap.push(temp);
		}
		if(mnsize - mxsize > 1){
			int temp = mnHeap.top();
			mnHeap.pop();
			mxHeap.push(temp);
		}
		
		if(mxsize == mnsize){
			cout<< (mxHeap.top() + mnHeap.top()) / 2 <<endl;
		}else{
			if(mxsize > mnsize){
				cout<<mxHeap.top()<<endl;
			}else{
				cout<<mnHeap.top()<<endl;
			}
		}
	}
	
	return 0;
}
