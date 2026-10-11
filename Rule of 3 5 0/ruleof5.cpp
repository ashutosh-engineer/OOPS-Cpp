#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>

// A class that owns a resource should define all five special member functions.
class Buffer {
public:
	explicit Buffer(std::size_t size)
		: size_(size), data_(size ? new int[size]{} : nullptr) {
		std::cout << "constructor\n";
	}

	// 1. Destructor
	~Buffer() {
		delete[] data_;
		std::cout << "destructor\n";
	}

	// 2. Copy constructor: deep copy
	Buffer(const Buffer& other)
		: size_(other.size_), data_(size_ ? new int[size_] : nullptr) {
		std::copy(other.data_, other.data_ + size_, data_);
		std::cout << "copy constructor\n";
	}

	// 3. Copy assignment: deep copy
	Buffer& operator=(const Buffer& other) {
		if (this != &other) {
			Buffer copy(other);
			swap(copy);
		}
		std::cout << "copy assignment\n";
		return *this;
	}

	// 4. Move constructor: take ownership of the resource
	Buffer(Buffer&& other) noexcept
		: size_(other.size_), data_(other.data_) {
		other.size_ = 0;
		other.data_ = nullptr;
		std::cout << "move constructor\n";
	}

	// 5. Move assignment: release ours and take ownership of another
	Buffer& operator=(Buffer&& other) noexcept {
		if (this != &other) {
			delete[] data_;
			size_ = other.size_;
			data_ = other.data_;
			other.size_ = 0;
			other.data_ = nullptr;
		}
		std::cout << "move assignment\n";
		return *this;
	}

	void set(std::size_t index, int value) { data_[index] = value; }
	int get(std::size_t index) const { return data_[index]; }

private:
	void swap(Buffer& other) noexcept {
		std::swap(size_, other.size_);
		std::swap(data_, other.data_);
	}

	std::size_t size_{};
	int* data_{};
};

Buffer createBuffer() {
	Buffer temporary(2);
	temporary.set(0, 42);
	return temporary; // move may be elided; otherwise move constructor runs
}

int main() {
	Buffer original(2);
	original.set(0, 10);

	Buffer copied(original);              // copy constructor
	Buffer copyAssigned(1);
	copyAssigned = original;             // copy assignment

	Buffer moved(std::move(original));   // move constructor
	Buffer moveAssigned(1);
	moveAssigned = createBuffer();      // move assignment

	std::cout << "moved value: " << moved.get(0) << '\n';
	std::cout << "assigned value: " << moveAssigned.get(0) << '\n';
}
