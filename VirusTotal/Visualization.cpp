#include <iostream>
#include "Visualization.h"

// Реализация визуализации
class VisualizationImpl : public Visualization {
public:
    void show() override {
        std::cout << "Displaying Visual Data..." << std::endl;
        // Здесь может быть код для 3D визуализации или другой графики
    }
};
