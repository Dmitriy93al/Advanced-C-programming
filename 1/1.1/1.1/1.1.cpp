#include<iostream>

class smart_array {
private:

	int* arr;
	int count = 0;
	size_t size_;

public:
	smart_array(const smart_array&) = delete;
	smart_array& operator=(const smart_array&) = delete;

	smart_array(size_t snz) {
		size_ = snz;
		arr = new int[size_];
	}
	~smart_array() {
		delete[] arr;
	}

	void add_element(int value) {
		if (count > size_) {
			throw std::exception{ "Error" };
		}
		else
			arr[count] = value;
		count++;
	}

	int  get_element(int index)
	{
		if (index < 0 || index > count) {
			throw std::exception{ "There is no element added at this index" };
		}
		return arr[index];
	}
};


int main()

try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	arr.add_element(14);
	arr.add_element(15);
	std::cout << arr.get_element(1) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;

	return 0;
}