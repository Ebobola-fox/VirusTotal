#include "VirusTotal.cpp"  // Подключение файла сервиса
#include "Visualization.cpp"  // Подключение файла визуализации

int main() {
    // Создаем и регистрируем сервис
    MyServiceImpl service;
    service.visualize();  // Вызов метода визуализации из сервиса

    // Создаем объект для визуализации
    VisualizationImpl visual;
    visual.show();  // Отображение визуальных данных

    return 0;
}
