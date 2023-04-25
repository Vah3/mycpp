# include "MutantStack.hpp"

/*int main(void)
{
	MutantStack<int> ob;
	ob.push(6);
	int *it0 = &ob.top();
	ob.push(78);
	int *it1 = &ob.top();
	std::cout << it0 << std::endl;
	std::cout << *(it1 - 1) << std::endl;
	ob.foo();
//	MutantStack<int>::iterator it = ob.begin();
	std::list<int> a;
	a.push_back(5);
	a.push_back(15);
	std::cout << *a.end() << std::endl;
	return (0);
}
*/

int main()
{
	{
		MutantStack<int> mstack_;
		mstack_.push(5);
		MutantStack<int> mstack;
		mstack = mstack_;
		mstack.push(17);
		std::cout << *mstack.rbegin() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
		std::cout << std::endl;	
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}
	return 0;
}

