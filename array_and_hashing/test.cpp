#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    vector<int> vec = {5, 23, 89, 71, 9};

    vec.push_back(34);                  // 5, 23, 89, 71, 9, 34
    vec.insert(vec.begin()+ 2, 16);     // 5, 23, 16, 89, 71, 9, 34

    int value1 = vec[1];             // 23
    int value2 = vec.at(2);           // 16

    vec.erase(vec.begin() + 4);       // 5, 23, 16, 89, 71, 34
    vec.pop_back();                 // 5, 23, 16, 89, 9
    */

    struct Vehicle 
    {
        std::string Manufacturer;
        std::string ModelName;
        int32_t ModelYear;

        Vehicle(const std::string& manufacturer, const std::string& modelName, int32_t modelYear)
            : Manufacturer(manufacturer), ModelName(modelName), ModelYear(modelYear) {}
    };

    std::vector<Vehicle> vehicles;

    vehicles.push_back(Vehicle("Toyota", "Camry", 2022));
    vehicles.push_back(Vehicle("Honda", "Civic", 2021));
    vehicles.push_back(Vehicle("Ford", "F-150", 2020));

    vehicles.emplace_back("Chevrolet", "Silverado", 2019);
    vehicles.emplace_back("Nissan", "Altima", 2018);



    for (const auto& vehicle : vehicles) {
        std::cout << vehicle.Manufacturer << " " << vehicle.ModelName << " " << vehicle.ModelYear << std::endl;
    }

    size_t vectorSize = vec.size();
    size_t vectorCapacity = =vec.capacity();

    vec.resize(20, 0);
    vec.reserve(50);

    bool isVectorEmpty = vec.empty();
    vec.clear();

    return 0;


    }

// g++ -std=gnu++17 test.cpp -o test ; if ($?) { .\test }
