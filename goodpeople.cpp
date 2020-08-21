#include <iostream> // cout�� << ������ ���� 
#include <string> // string Ŭ������ ����ϱ� ���� ��� ����
using namespace std; // <iostream> ��� ���Ͽ� ����� �̸��� ����� �� std:: ����
#include "goodpeople.h" // goodpeople ��� ������ include �Ѵ�

int user_mind() { // ������ �Լ��� user_mind �Լ� �ۼ� (����ڿ��� �ý����� ��� ����� ������ ���� �Լ�)
	int n; // 1�� 0�� �Է� �޴� ���� 
	cout << "����Ͻðڽ��ϱ�? (��(1) �ƴϿ�(0)) : "; // ȭ�鿡 ��� 
	cin >> n; // ����ڰ� Ű���忡�� 0�̳� 1�� �Է� 
	if (n == 1)
		return 1; // n==1�̸� 1�� ��ȯ 
	else
		return 0; // n!=1�̸� 0�� ��ȯ
}

void Snack_nutrition::printing() { // ����ڰ� �Է��� ���������� ǥ���ϴ� �Լ� �ۼ�

	cout << "��ǰ ��ȣ : " << print_id() << endl; // ��ǰ�� ���� ���� �Լ� ȣ�� 
	cout << "��ǰ �̸� : " << print_product_name() << endl; // ��ǰ�� �̸� �Լ� ȣ�� 
	cout << "������ : " << print_manufacturer() << endl; // ������ �Լ� ȣ�� 
	cout << "���� : " << print_price() << endl; // ���� �Լ� ȣ�� 
	cout << "��Ʈ�� : " << Natrium << endl; // �Է¹��� ��Ʈ�� ��� 
	cout << "ź��ȭ�� : " << Carbohydrate << endl; // �Է¹��� ź��ȭ�� ��� 
	cout << "��� : " << Oligo << endl; // �Է¹��� ��� ��� 
	cout << "���� : " << Fat << endl; // �Է¹��� ���� ��� 
	cout << "�ݷ����׷� : " << Cholesterol << endl; // �Է¹��� �ݷ����׷� ��� 
	cout << "�ܹ��� : " << Protein << endl; // �Է¹��� �ܹ��� ��� 
}

int main() {
	base_info* product[10]; // base_info Ŭ������ ����Ű�� ������ �迭 ���� (�ִ� 10�� ����) 

	string Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Cholesterol, Protein; // (�������) ������, ��ǰ �̸�, ����, ��Ʈ��, ź��ȭ��, ���, ����, �ݷ����׷�, �ܹ��� ���� ���� 
	int list = 0; // ��ǰ ���� ���� 0���� �ʱ�ȭ 

	cout << "-------------- <���� ������������ �ý����� �����մϴ�> ----------------" << endl << endl; // ȭ�鿡 ��� 

	while (1) { // ���ѷ��� ���� 
		int num; // ����ڰ� 1~3 �� �ϳ��� �Է��ϴ� ���� 
		cout << "��ǰ ����� 1��, ��ǰ ��ȸ�� 2��, ����� 3�� �Դϴ�. ���Ͻô� ��ȣ�� �Է����ּ��� (1~3) : "; // ȭ�鿡 ���
		cin >> num; // ����ڰ� Ű���忡�� 1~3�� �ϳ��� �Է� 

		if (num == 1) { // num == 1 (��ǰ ���) �� �� �۵� 

			cout << "���� ���� ���� : �������� 1��, �ڽ����� 2�� (1~2) : "; // ȭ�鿡 ��� 
			int packaging; // ����ڰ� 1~2�� �ϳ��� �Է��ϴ� ���� 
			cin >> packaging; // ����ڰ� Ű���忡�� 1~2�� �ϳ��� �Է�  
			cin.ignore(); // ignore() �Լ��� ����Ͽ� �Է� ��Ʈ�� ���ۿ��� ���ڵ��� ����  
			if (packaging == 1) { // packaging == 1 (������) �� �� �۵� 
				cout << "��ǰ �̸� --> "; getline(cin, Product_name); // Ű���忡�� ��ǰ �̸� �Է� 
				cout << "������ --> "; getline(cin, Manufacturer); // Ű���忡�� ������ �Է� 
				cout << "���� --> "; getline(cin, Price); // Ű���忡�� ���� �Է� 
				cout << "��Ʈ�� (������ mg �Դϴ�) --> "; getline(cin, Natrium); // Ű���忡�� ��Ʈ�� �Է� 
				cout << "ź��ȭ�� (������ g �Դϴ�) --> "; getline(cin, Carbohydrate); // Ű���忡�� ź��ȭ�� �Է� 
				cout << "��� (������ g �Դϴ�) --> "; getline(cin, Oligo); // Ű���忡�� ��� �Է� 
				cout << "���� (������ g �Դϴ�) --> "; getline(cin, Fat); // Ű���忡�� ���� �Է� 
				cout << "�ݷ����׷� (������ g �Դϴ�) --> "; getline(cin, Cholesterol); // Ű���忡�� �ݷ����׷� �Է� 
				cout << "�ܹ��� (������ g �Դϴ�) --> "; getline(cin, Protein); // Ű���忡�� �ܹ��� �Է� 
				cout << "���� ���´� ������ �Դϴ�." << endl; // ȭ�鿡 ��� 
				cout << endl; // �� �ٲ� 
				Snack_nutrition* p = new Snack_nutrition(Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Protein,Cholesterol, list); // Snack_nutrition Ŭ���� Ÿ���� ��ü �Ҵ� 
				product[list] = p; // �ּ� ���� product[list] �� ���� (list ���� 0����)
				list++; // list ���� 1 ���� ��Ų�� 
				int x = user_mind(); // user_mind �Լ� (����ڿ��� �ý����� ����ؼ� ����� ������ ���� �Լ�) ȣ�� 
				if (x == 1) continue; // x�ǰ��� 1�̸� ����Ѵ� 
				else break; // x�� ���� 0�̸� ������ Ż���Ѵ� 
			}

			else if (packaging == 2) { // packaging == 2 (�ڽ���) �� �� �۵� 
				cout << "��ǰ �̸� --> "; getline(cin, Product_name); // Ű���忡�� ��ǰ �̸� �Է� 
				cout << "������ --> "; getline(cin, Manufacturer); // Ű���忡�� ������ �Է� 
				cout << "���� --> "; getline(cin, Price); // Ű���忡�� ���� �Է� 
				cout << "��Ʈ�� (������ mg �Դϴ�) --> "; getline(cin, Natrium); // Ű���忡�� ��Ʈ�� �Է� 
				cout << "ź��ȭ�� (������ g �Դϴ�) --> "; getline(cin, Carbohydrate); // Ű���忡�� ź��ȭ�� �Է� 
				cout << "��� (������ g �Դϴ�) --> "; getline(cin, Oligo); // Ű���忡�� ��� �Է� 
				cout << "���� (������ g �Դϴ�) --> "; getline(cin, Fat); // Ű���忡�� ���� �Է� 
				cout << "�ݷ����׷� (������ g �Դϴ�) --> "; getline(cin, Cholesterol); // Ű���忡�� �ݷ����׷� �Է� 
				cout << "�ܹ��� (������ g �Դϴ�) --> "; getline(cin, Protein); // Ű���忡�� �ܹ��� �Է� 
				cout << "���� ���´� �ڽ��� �Դϴ�." << endl << endl; // ȭ�鿡 ��� 
				Snack_nutrition* p = new Snack_nutrition(Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Protein, Cholesterol, list); // Snack_nutrition Ŭ���� Ÿ���� ��ü �Ҵ� 
				product[list] = p; // �ּ� ���� product[list] �� ���� (list ���� 0����)
				list++; // list ���� 1 ���� ��Ų�� 
				int x = user_mind(); // user_mind �Լ� (����ڿ��� �ý����� ����ؼ� ����� ������ ���� �Լ�) ȣ�� 
				if (x == 1) continue; // x�ǰ��� 1�̸� ����Ѵ� 
				else break; // x�� ���� 0�̸� �����Ѵ�
			}

			else // packaging �� 1,2 �� �ƴ� �ٸ� ���ڰ� �ԷµǾ��� �� �۵��Ѵ�  
				cout << "�����Դϴ�. ���ڴ� 1~2 �� �ϳ��� �Է��ϼ���!" << endl; // ȭ�鿡 ��� 
		}

		else if (num == 2) { // num == 2 (��ǰ ��ȸ) �� �� �۵�  

			for (int i = 0; i < list; i++) { // �Է��ߴ� ������ ������ ����Ѵ� 
				product[i]->printing(); // printing() �Լ��� ����Ų��
			}
			break; // �ý����� �����Ѵ�
			cout << endl << endl; // �ٹٲ� 
		}

		else if (num == 3) { // num == 3 (����) �� �� �۵� 
			break; // �ý����� �����Ѵ�. 
		}

		else // num �� ���� 1~3�� �ƴ� �ٸ� ���ڰ� �ԷµǾ��� �� �۵��Ѵ� 
			cout << "���� �Դϴ�.... ���ڴ� 1~3 �� �ϳ��� �Է��ϼ���!" << endl; // ȭ�鿡 ��� 
	}

}