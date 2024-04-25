#include<iostream>

class smart_array {

private:
	int* arr;
	int* arr2;
	int count = 0;
	size_t size_;

public:
	smart_array(size_t snz) {
		size_ = snz;
		arr = new int[size_];
	}
	smart_array(const smart_array& other) {
		for (int i = 0; i < size_; i++)
		{
			arr2[i] = other.arr[i];
		}
	}
	
	smart_array& operator=(const smart_array& other) {
		delete[] arr;
		arr2 = new int[size_];

		if (&other == this) {
			throw std::exception{ "Error" };
		}

		for (int i = 0; i < count; i++) {
			arr2[i] = other.arr[i];
		}
		return *this;
	}

	~smart_array() {
		delete[] arr2;
	}

	void add_element(int value) {
		if (count > size_) {
			throw std::string{ "Error" };
		}
		else
			arr[count] = value;
		count++;
	}

	int  get_element(int index) {
		if (index < 0 && index > count) {
			throw std::string{ "There is no element added at this index" };
		}
		return arr[index];
	}
};

int main() {
	try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	smart_array new_array(2);
	new_array.add_element(44);
	new_array.add_element(34);

	arr = new_array;
	}

	catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
	}

return 0;
}
