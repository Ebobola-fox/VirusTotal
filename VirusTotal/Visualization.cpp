#include <iostream>
#include "Visualization.h"

// ���������� ������������
class VisualizationImpl : public Visualization {
public:
    void show() override {
        std::cout << "Displaying Visual Data..." << std::endl;
        // ����� ����� ���� ��� ��� 3D ������������ ��� ������ �������
    }
};
