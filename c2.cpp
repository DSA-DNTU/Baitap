#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;        // con trỏ cấp phát động
    int capacity;     // dung lượng hiện tại của mảng
    int length;       // số phần tử thực tế trong mảng

    // Hàm mở rộng mảng khi đầy
    void resize() {
        int newCapacity = capacity * 2;
        int* newData = new int[newCapacity];
        // Sao chép dữ liệu cũ sang mảng mới
        for (int i = 0; i < length; i++) {
            newData[i] = data[i];
        }
        // Giải phóng mảng cũ
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    // Constructor khởi tạo ban đầu
    DynamicArray() {
        capacity = 2;   // dung lượng ban đầu nhỏ để dễ thử nghiệm
        length = 0;
        data = new int[capacity];
    }

    // Thêm phần tử vào cuối mảng
    void add(int element) {
        if (length == capacity) {
            resize(); // nếu đầy thì mở rộng
        }
        data[length++] = element;
    }

    // Lấy phần tử tại chỉ số index
    int get(int index) {
        if (index >= 0 && index < length) {
            return data[index];
        } else {
            cout << "Index out of bounds!" << endl;
            return -1; // giá trị lỗi
        }
    }

    // Trả về số lượng phần tử
    int size() {
        return length;
    }

    // Destructor để giải phóng bộ nhớ
    ~DynamicArray() {
        delete[] data;
    }
};
int main() {
    DynamicArray arr;

    arr.add(10);
    arr.add(20);
    arr.add(30); // sẽ tự mở rộng dung lượng tại đây

    cout << "Size: " << arr.size() << endl;
    cout << "Element at index 1: " << arr.get(1) << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr.get(i) << " ";
        
    }

    return 0;
}