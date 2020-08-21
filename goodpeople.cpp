#include <iostream> // cout과 << 연산자 포함 
#include <string> // string 클래스를 사용하기 위한 헤더 파일
using namespace std; // <iostream> 헤더 파일에 선언된 이름을 사용할 때 std:: 생략
#include "goodpeople.h" // goodpeople 헤더 파일을 include 한다

int user_mind() { // 프렌드 함수인 user_mind 함수 작성 (사용자에게 시스템을 계속 사용할 것인지 묻는 함수)
	int n; // 1과 0을 입력 받는 변수 
	cout << "계속하시겠습니까? (예(1) 아니오(0)) : "; // 화면에 출력 
	cin >> n; // 사용자가 키보드에서 0이나 1을 입력 
	if (n == 1)
		return 1; // n==1이면 1을 반환 
	else
		return 0; // n!=1이면 0을 반환
}

void Snack_nutrition::printing() { // 사용자가 입력한 영양정보를 표현하는 함수 작성

	cout << "상품 번호 : " << print_id() << endl; // 상품의 고유 숫자 함수 호출 
	cout << "상품 이름 : " << print_product_name() << endl; // 상품의 이름 함수 호출 
	cout << "제조사 : " << print_manufacturer() << endl; // 제조사 함수 호출 
	cout << "가격 : " << print_price() << endl; // 가격 함수 호출 
	cout << "나트륨 : " << Natrium << endl; // 입력받은 나트륨 출력 
	cout << "탄수화물 : " << Carbohydrate << endl; // 입력받은 탄수화물 출력 
	cout << "당류 : " << Oligo << endl; // 입력받은 당류 출력 
	cout << "지방 : " << Fat << endl; // 입력받은 지방 출력 
	cout << "콜레스테롤 : " << Cholesterol << endl; // 입력받은 콜레스테롤 출력 
	cout << "단백질 : " << Protein << endl; // 입력받은 단백질 출력 
}

int main() {
	base_info* product[10]; // base_info 클래스를 가리키는 포인터 배열 선언 (최대 10개 까지) 

	string Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Cholesterol, Protein; // (순서대로) 제조사, 제품 이름, 가격, 나트륨, 탄수화물, 당류, 지방, 콜레스테롤, 단백질 변수 선언 
	int list = 0; // 상품 고유 숫자 0으로 초기화 

	cout << "-------------- <과자 영양정보관리 시스템을 시작합니다> ----------------" << endl << endl; // 화면에 출력 

	while (1) { // 무한루프 설정 
		int num; // 사용자가 1~3 중 하나를 입력하는 변수 
		cout << "상품 등록은 1번, 상품 조회는 2번, 종료는 3번 입니다. 원하시는 번호를 입력해주세요 (1~3) : "; // 화면에 출력
		cin >> num; // 사용자가 키보드에서 1~3중 하나를 입력 

		if (num == 1) { // num == 1 (상품 등록) 일 때 작동 

			cout << "과자 포장 형태 : 봉지형은 1번, 박스형은 2번 (1~2) : "; // 화면에 출력 
			int packaging; // 사용자가 1~2중 하나를 입력하는 변수 
			cin >> packaging; // 사용자가 키보드에서 1~2중 하나를 입력  
			cin.ignore(); // ignore() 함수를 사용하여 입력 스트림 버퍼에서 문자들을 제거  
			if (packaging == 1) { // packaging == 1 (봉지형) 일 때 작동 
				cout << "상품 이름 --> "; getline(cin, Product_name); // 키보드에서 상품 이름 입력 
				cout << "제조사 --> "; getline(cin, Manufacturer); // 키보드에서 제조사 입력 
				cout << "가격 --> "; getline(cin, Price); // 키보드에서 가격 입력 
				cout << "나트륨 (단위는 mg 입니다) --> "; getline(cin, Natrium); // 키보드에서 나트륨 입력 
				cout << "탄수화물 (단위는 g 입니다) --> "; getline(cin, Carbohydrate); // 키보드에서 탄수화물 입력 
				cout << "당류 (단위는 g 입니다) --> "; getline(cin, Oligo); // 키보드에서 당류 입력 
				cout << "지방 (단위는 g 입니다) --> "; getline(cin, Fat); // 키보드에서 지방 입력 
				cout << "콜레스테롤 (단위는 g 입니다) --> "; getline(cin, Cholesterol); // 키보드에서 콜레스테롤 입력 
				cout << "단백질 (단위는 g 입니다) --> "; getline(cin, Protein); // 키보드에서 단백질 입력 
				cout << "포장 형태는 봉지형 입니다." << endl; // 화면에 출력 
				cout << endl; // 줄 바꿈 
				Snack_nutrition* p = new Snack_nutrition(Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Protein,Cholesterol, list); // Snack_nutrition 클래스 타입의 객체 할당 
				product[list] = p; // 주소 값을 product[list] 에 저장 (list 값은 0부터)
				list++; // list 값을 1 증가 시킨다 
				int x = user_mind(); // user_mind 함수 (사용자에게 시스템을 계속해서 사용할 것인지 묻는 함수) 호출 
				if (x == 1) continue; // x의값이 1이면 계속한다 
				else break; // x의 값이 0이면 루프를 탈출한다 
			}

			else if (packaging == 2) { // packaging == 2 (박스형) 일 때 작동 
				cout << "상품 이름 --> "; getline(cin, Product_name); // 키보드에서 상품 이름 입력 
				cout << "제조사 --> "; getline(cin, Manufacturer); // 키보드에서 제조사 입력 
				cout << "가격 --> "; getline(cin, Price); // 키보드에서 가격 입력 
				cout << "나트륨 (단위는 mg 입니다) --> "; getline(cin, Natrium); // 키보드에서 나트륨 입력 
				cout << "탄수화물 (단위는 g 입니다) --> "; getline(cin, Carbohydrate); // 키보드에서 탄수화물 입력 
				cout << "당류 (단위는 g 입니다) --> "; getline(cin, Oligo); // 키보드에서 당류 입력 
				cout << "지방 (단위는 g 입니다) --> "; getline(cin, Fat); // 키보드에서 지방 입력 
				cout << "콜레스테롤 (단위는 g 입니다) --> "; getline(cin, Cholesterol); // 키보드에서 콜레스테롤 입력 
				cout << "단백질 (단위는 g 입니다) --> "; getline(cin, Protein); // 키보드에서 단백질 입력 
				cout << "포장 형태는 박스형 입니다." << endl << endl; // 화면에 출력 
				Snack_nutrition* p = new Snack_nutrition(Manufacturer, Product_name, Price, Natrium, Carbohydrate, Oligo, Fat, Protein, Cholesterol, list); // Snack_nutrition 클래스 타입의 객체 할당 
				product[list] = p; // 주소 값을 product[list] 에 저장 (list 값은 0부터)
				list++; // list 값을 1 증가 시킨다 
				int x = user_mind(); // user_mind 함수 (사용자에게 시스템을 계속해서 사용할 것인지 묻는 함수) 호출 
				if (x == 1) continue; // x의값이 1이면 계속한다 
				else break; // x의 값이 0이면 종료한다
			}

			else // packaging 이 1,2 가 아닌 다른 숫자가 입력되었을 때 작동한다  
				cout << "오류입니다. 숫자는 1~2 중 하나만 입력하세요!" << endl; // 화면에 출력 
		}

		else if (num == 2) { // num == 2 (상품 조회) 일 때 작동  

			for (int i = 0; i < list; i++) { // 입력했던 과자의 정보를 출력한다 
				product[i]->printing(); // printing() 함수를 가리킨다
			}
			break; // 시스템을 종료한다
			cout << endl << endl; // 줄바꿈 
		}

		else if (num == 3) { // num == 3 (종료) 일 때 작동 
			break; // 시스템을 종료한다. 
		}

		else // num 의 값이 1~3이 아닌 다른 숫자가 입력되었을 때 작동한다 
			cout << "오류 입니다.... 숫자는 1~3 중 하나만 입력하세요!" << endl; // 화면에 출력 
	}

}