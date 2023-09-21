#include<iostream>

class Numbers
{
public:
	int m_one, m_two;

	void set(int one,int two)
	{
		m_one = one;
		m_two = two;
	}
	void print()
	{
		std::cout << "Numbers(" << m_one << ", " << m_two << ")" << std::endl;
	}
};

int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3

	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4

	n1.print();
	n2.print();

	return 0;
}