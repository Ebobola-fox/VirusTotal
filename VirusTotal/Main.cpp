#include "VirusTotal.cpp"  // ����������� ����� �������
#include "Visualization.cpp"  // ����������� ����� ������������

int main() {
    // ������� � ������������ ������
    MyServiceImpl service;
    service.visualize();  // ����� ������ ������������ �� �������

    // ������� ������ ��� ������������
    VisualizationImpl visual;
    visual.show();  // ����������� ���������� ������

    return 0;
}
