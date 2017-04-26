#include <iostream>

using namespace std;

struct years_end
{
    int year;
    char name[20];
};

int main()
{
    years_end s1, s2, s3;
    s1.year = 2001;
    s3.year = 2003;

    years_end * p2 = &s2;
    p2->year = 2002;

    // 创建1个结构体数组
    years_end trio[3];
    trio[0].year = 2020;
    strcpy(trio->name, "song");
    // 数组名是1个指针
    cout << "trio->year: " << trio->year << endl;
    (trio + 1)->year = 2021;
    cout << "trio[1].year: " << trio[1].year << endl;
    cout << "&trio->name: " << &trio->name << endl;

    // 创建1个指针数组
    const years_end * arp[3] = {&s1, &s2, &s3};
    cout << "arp[1]->year: " << arp[1]->year << endl;
    cout << "(*arp[2]).year: " << (*arp[2]).year << endl;

    cout << "sizeof(arp): " << sizeof(arp) << endl;
    cout << "arp[0]: " << arp[0] << endl;

    // 创建1个指向指针数组的指针
    const years_end ** ppa = arp;
    // 首先ppa是一个指针
    // const type * ppa = arp;
    // 其次这个指针指向的类型是一个years_end类型的指针
    // const (years_end *) * ppa = arp;

    cout << "arp: " << arp << endl;
    cout << "&arp: " << &arp << endl;
    cout << "&arp[0]: " << &arp[0] << endl;
    // ppa是1个指针,指向指针数组arp[0]的地址
    cout << "ppa: " << ppa << endl;

    cout << "&s1: " << &s1 << endl;
    // ppa指针的值为:&s1这个指针
    cout << "*ppa: " << *ppa << endl;

    // 声明另外一个作用和ppa一样的指针(用auto类型避免类型声明错误)
    auto ppb = arp;

    cout << "(*ppa)->year: " << (*ppa)->year << endl;
    cout << "(*(ppb + 1))->year: " << (*(ppb + 1))->year << endl;

    return 0;
}