#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string id;
    float gpa;

public:
    // Constructor để khởi tạo sinh viên với các giá trị đầu vào
    Student(std::string name, std::string id, float gpa) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }

    // Getter cho thuộc tính name
    std::string getName() const {
        return name;
    }

    // Setter cho thuộc tính name
    void setName(const std::string& name) {
        this->name = name;
    }

    // Getter cho thuộc tính id
    std::string getId() const {
        return id;
    }

    // Setter cho thuộc tính id
    void setId(const std::string& id) {
        this->id = id;
    }

    // Getter cho thuộc tính gpa
    float getGpa() const {
        return gpa;
    }

    // Setter cho thuộc tính gpa
    void setGpa(float gpa) {
        this->gpa = gpa;
    }

    // Phương thức để hiển thị thông tin sinh viên
    void displayInfo() const {
        std::cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << std::endl;
    }
};

int main() {
    // Ví dụ sử dụng lớp Student
    Student student1("thitsavanh", "24112004", 3.5);
    student1.displayInfo();

    student1.setGpa(3.8);  // cập nhật GPA
    std::cout << "Updated GPA: " << student1.getGpa() << std::endl;

    return 0;
}