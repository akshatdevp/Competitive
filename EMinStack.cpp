#include<bits/stdc++.h>
using namespace std;
class MinStack {
	public:

		stack<pair<int,int>> s;
		MinStack() {
		}

		void push(int x) {
			if(s.empty())
				s.push({x,x});
			else s.push({x,min(s.top().second,x)});
		}

		void pop() {
			s.pop();
		}

		int top() {
			return s.top().first;
		}

		int getMin() {
			return s.top().second;
		}
};


int main()
{

	MinStack* obj = new MinStack();
	obj->push(2);
	obj->push(1);
	obj->push(4);
	obj->push(12);
	obj->pop();
	int param_3 = obj->top();
	int param_4 = obj->getMin();
	cout<<param_3<<" "<<param_4<<endl;
	obj->pop();
	param_3 = obj->top();
	param_4 = obj->getMin();
	cout<<param_3<<" "<<param_4<<endl;
	return 0;

}
