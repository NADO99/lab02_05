#include<iostream>
#include<algorithm>
#include<vector>
bool compare(int a, int b) {
	return (a > b);
}
int main(void) {
	int num;
	std::vector<int> v;
	while (std::cin>>num) {
		v.push_back(num);
	}
	std::sort(v.begin(), v.end(), compare);
	std::cout << std::endl <<"ordered array" << std::endl;
	for (auto i : v) {
		std::cout << i << " ";
	}
	system("pause");
	return 0;
}