#include <iostream>
#include "Service.h"

// Реализация сервиса
class MyServiceImpl : public MyService {
public:
    MyServiceImpl() {
        std::cout << "Service Created!" << std::endl;
        registerService();  // Автоматическая регистрация сервиса
    }

    // Реализация функции регистрации
    void registerService() override {
        std::cout << "Service Registered Successfully!" << std::endl;
    }

    // Простая функция визуализации
    void visualize() override {
        std::cout << "Visualizing Service Data..." << std::endl;
    }
};
