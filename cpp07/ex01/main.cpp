# include "iter.hpp"

template <typename T>void	k(T a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	char s[5] = "vahe";
	int arr[7] = {1,2,3,4,5,6,7};
	float  arr_[4] = {1.2f,2.6f,3.4f,4.2f};
	::iter(s,5, &k<char>);
	::iter(arr,7, &k<int>);
	::iter(arr_,4, &k<float>);
	return (0);
}

