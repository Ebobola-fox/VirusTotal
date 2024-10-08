#ifndef SERVICE_H
#define SERVICE_H

// Интерфейс для сервиса
class MyService {
public:
    virtual void registerService() = 0;  // Чисто виртуальная функция для регистрации сервиса
    virtual void visualize() = 0;  // Виртуальная функция для визуализации
};

#endif  // SERVICE_H
