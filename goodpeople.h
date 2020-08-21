#include <iostream> // cout�� << ������ ���� 
#include <string> // string Ŭ������ ����ϱ� ���� ��� ����
using namespace std; // <iostream> ��� ���Ͽ� ����� �̸��� ����� �� std:: ���� 

class base_info { // base_info Ŭ���� �ۼ� ( ��ǰ�� �⺻ ���� ���� )
	string Manufacturer, Product_name, Price; // ������, ��ǰ �̸�, ���� ���� ���� 
	int list; // ��ǰ ���� ���� (0�� ����)
public:
	base_info() { cout << "�⺻�������Դϴ�."; } // �⺻������ �Լ� �ۼ� 
	base_info(string Manufacturer, string Product_name, string Price, int list) { // ������ �Լ� �ۼ� 
		this->Manufacturer = Manufacturer;
		this->Product_name = Product_name;
		this->Price = Price;
		this->list = list;
	}
	string print_manufacturer() { return Manufacturer; } // (���ڿ�) �����縦 ��ȯ�ϴ� �Լ�
	string print_product_name() { return Product_name; } // (���ڿ�) ��ǰ�̸��� ��ȯ�ϴ� �Լ�
	string print_price() { return Price; } // (���ڿ�) ������ ��ȯ�ϴ� �Լ� 
	int print_id() { return list; } // (����) ��ǰ ���� ���ڸ� ��ȯ�ϴ� �Լ� 

	virtual void printing() = 0; // ���� �Լ� ���� (�ڽ�Ŭ����(Snack_nutrition) �� ����)
};

class Snack_nutrition : public base_info { // Snack_nutrition Ŭ���� �ۼ� 
	string Natrium, Carbohydrate, Oligo, Fat, Cholesterol, Protein; // (�������) ��Ʈ��, ź��ȭ��, ���, ����, �ݷ����׷�, �ܹ����� ǥ���ϴ� ����
public:
	Snack_nutrition(string Manufacturer, string Product_name, string Price, string Natrium,
		string Carbohydrate, string Oligo, string Fat, string Protein, string Cholesterol,int list) : base_info(Manufacturer, Product_name, Price, list)
	{ // Snack_nutrition Ŭ������ ������ �Լ� �ۼ� (���� ���� ����)
		this->Natrium = Natrium; this->Carbohydrate = Carbohydrate; this->Oligo = Oligo; this->Cholesterol = Cholesterol;
		this->Fat = Fat; this->Protein = Protein;
	}

	void printing(); // �������� ���������� �˷��ִ� �Լ�  
	friend int user_mind(); // ������ �Լ� ����. ������ �ý����� ��� ����� ������ ����� �Լ� 

	string print_Natrium() { return Natrium; } // (���ڿ�) ��Ʈ�� �� ��ȯ�ϴ� �Լ�
	string print_Carbohydrate() { return Carbohydrate; } // (���ڿ�) ź��ȭ�� �� ��ȯ�ϴ� �Լ�
	string print_Oligo() { return Oligo; } // (���ڿ�) ��� �� ��ȯ�ϴ� �Լ�
	string print_Cholesterol() { return Cholesterol; } // (���ڿ�) �ݷ����׷� �� ��ȯ�ϴ� �Լ� 
	string print_Fat() { return Fat; } // (���ڿ�) ���� �� ��ȯ�ϴ� �Լ� 
	string print_Protein() { return Protein; } // (���ڿ�) �ܹ��� �� ��ȯ�ϴ� �Լ� 
};