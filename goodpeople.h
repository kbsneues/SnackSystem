#include <iostream> // cout과 << 연산자 포함 
#include <string> // string 클래스를 사용하기 위한 헤더 파일
using namespace std; // <iostream> 헤더 파일에 선언된 이름을 사용할 때 std:: 생략 

class base_info { // base_info 클래스 작성 ( 상품의 기본 정보 제공 )
	string Manufacturer, Product_name, Price; // 제조사, 제품 이름, 가격 변수 생성 
	int list; // 상품 고유 숫자 (0번 부터)
public:
	base_info() { cout << "기본생성자입니다."; } // 기본생성자 함수 작성 
	base_info(string Manufacturer, string Product_name, string Price, int list) { // 생성자 함수 작성 
		this->Manufacturer = Manufacturer;
		this->Product_name = Product_name;
		this->Price = Price;
		this->list = list;
	}
	string print_manufacturer() { return Manufacturer; } // (문자열) 제조사를 반환하는 함수
	string print_product_name() { return Product_name; } // (문자열) 제품이름을 반환하는 함수
	string print_price() { return Price; } // (문자열) 가격을 반환하는 함수 
	int print_id() { return list; } // (정수) 상품 고유 숫자를 반환하는 함수 

	virtual void printing() = 0; // 가상 함수 선언 (자식클래스(Snack_nutrition) 에 접근)
};

class Snack_nutrition : public base_info { // Snack_nutrition 클래스 작성 
	string Natrium, Carbohydrate, Oligo, Fat, Cholesterol, Protein; // (순서대로) 나트륨, 탄수화물, 당류, 지방, 콜레스테롤, 단백질을 표현하는 변수
public:
	Snack_nutrition(string Manufacturer, string Product_name, string Price, string Natrium,
		string Carbohydrate, string Oligo, string Fat, string Protein, string Cholesterol,int list) : base_info(Manufacturer, Product_name, Price, list)
	{ // Snack_nutrition 클래스의 생성자 함수 작성 (영양 정보 저장)
		this->Natrium = Natrium; this->Carbohydrate = Carbohydrate; this->Oligo = Oligo; this->Cholesterol = Cholesterol;
		this->Fat = Fat; this->Protein = Protein;
	}

	void printing(); // 최종적인 영양정보를 알려주는 함수  
	friend int user_mind(); // 프렌드 함수 선언. 유저가 시스템을 계속 사용할 것인지 물어보는 함수 

	string print_Natrium() { return Natrium; } // (문자열) 나트륨 을 반환하는 함수
	string print_Carbohydrate() { return Carbohydrate; } // (문자열) 탄수화물 을 반환하는 함수
	string print_Oligo() { return Oligo; } // (문자열) 당류 을 반환하는 함수
	string print_Cholesterol() { return Cholesterol; } // (문자열) 콜레스테롤 을 반환하는 함수 
	string print_Fat() { return Fat; } // (문자열) 지방 을 반환하는 함수 
	string print_Protein() { return Protein; } // (문자열) 단백질 을 반환하는 함수 
};