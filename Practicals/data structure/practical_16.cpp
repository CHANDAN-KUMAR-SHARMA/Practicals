/*	Practical_16 :reverse the order of the elements in the stack using additional stack
	
	author : Chandan Kumar Sharma
	year   : 2018 (3rd semester ) 
*/
#include <cstdlib>
#include <iostream>
#include <stack>

using  std::stack;

class ReverseStack {
private:
	stack<int> stack_; // additional stack
public:
	ReverseStack(stack<int> stack_copy) :stack_(stack_copy) {}; 	//initiallization list 
	int GetButton() {
		int tmp1 = stack_.top();
		stack_.pop();
		if (stack_.empty()) {
			return tmp1;
		}
		int tmp2 = GetButton();
		stack_.push(tmp1);
		return tmp2;
	}

	void Reverse() {
		if (stack_.empty())
			return;
		int tmp = GetButton();
		Reverse();
		stack_.push(tmp);
		return;
	}

	stack<int> get_stack() {
		return stack_;
	}
};

void test_reverse_stack() {
	stack<int> data;
	data.push(23);
	data.push(34);
	data.push(22);
	data.push(12);
	ReverseStack reverse_stack(data);
	reverse_stack.Reverse();
	stack<int> reverse = reverse_stack.get_stack();
	std::cout << "origin stack:" << std::endl;
	while (!data.empty()) {
		std::cout << "top is " << data.top() << std::endl;
		data.pop();
	}
	std::cout << "reverse stack:" << std::endl;
	while (!reverse.empty()) {
		std::cout << "top is " << reverse.top() << std::endl;
		reverse.pop();
	}
}


int main()
{
	test_reverse_stack();
	return 0;
}
