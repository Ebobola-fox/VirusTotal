#ifndef SERVICE_H
#define SERVICE_H

// ��������� ��� �������
class MyService {
public:
    virtual void registerService() = 0;  // ����� ����������� ������� ��� ����������� �������
    virtual void visualize() = 0;  // ����������� ������� ��� ������������
};

#endif  // SERVICE_H
