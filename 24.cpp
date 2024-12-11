#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string brand;
    string model;

public:

Device(const string& brand, const string& model)
  : brand(brand), model(model) {}

void info() const {
    cout << "Бренд " << brand << ", Модель " << model << endl;
}
};

class Smartphone : public Device {
private:
    string operatingSystem;

public:

Smartphone(const string& brand, const string& model, const string& operatingSystem)
    : Device(brand, model), operatingSystem(operatingSystem) {}

void info() const {
    Device::info();
    cout << "ОС " << operatingSystem << endl;
    }

void installApp(const string& appName) const {
    cout << "Завантаження программи " << appName << " на " << brand << " " << model << " (" << operatingSystem << ")" << endl;
}
};

int main() {

Smartphone phone("Apple", "iPhone 14", "iOS 17");
phone.info();
phone.installApp("Instagram");

}
