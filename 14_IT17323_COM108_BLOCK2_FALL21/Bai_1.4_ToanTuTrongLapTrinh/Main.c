#include <stdio.h>
/*
		* 4 Loại toán tử trong lập trình
		*  1. Toán tử số học:
		*  (+ - * / % ++ --)
		*      +: Tính tổng của 2 số hoặc dùng để cộng chuỗi
		*      -: Phép trừ của 2 số
		*      *: Phép nhân của 2 số
		*      %: Phép chia lấy dư của 2 số
		*      ++: Tăng lên 1 đơn vị
		*      --: Giảm 1 đơn vị
		*  2. Toán tử so sánh:
		*  (> < >= <= == !=)
		*      >: Lớn hơn
		*      <: nhỏ hơn
		*      >=: lớn hơn hoặc bằng
		*      <=: nhỏ hơn hoặc bằng
		*      ==: so sánh bằng
		*      !=: so sánh khác
		*  3. Toán tử Logic:
		* (&& || !)
		*      &&: Yêu cầu các mệnh đề phải luôn đúng
		*      ||: Yêu cầu 1 trong các mệnh đề dúng là được
		*      !: Lấy giá trị phủ định của mệnh đề.
		*  4. Toán tử gán:
		* (= += -= *= /= %=)
		*      +=: Cộng tiếp với vế bên phải các phép còn lại tương tự
		*/
int main()
{
	//Phần 1: Toán tử số học - Postfix và Prefix
	int a = 5,b = 5;
	//a++;// 6 vì tăng lên 1 đơn vị
	//--a;// 5 vì giảm đi 1 đơn vị
	//a--;// 4 vì giảm đi đơn vị
	printf_s("%d \n", a);

	//Phần 2: Toán tử so sánh
	printf_s("%d \n", 5 > 6);//= 0 Sai False
	printf_s("%d \n", 5 < 6);//= 1 Đúng True
	printf_s("%d \n", 5 != 6);//= 1 Đúng True
	printf_s("%d \n", 5 >= 6);//= 0 Sai False
	printf_s("%d \n", 5 <= 6);//= 1 Đúng True
	printf_s("%d \n", 5 == 6);//= 0 Sai False

	//Phần 3: Toán tử Logic
	printf_s("%d \n", (5 > 3) && (10 > 11));//= 0 Sai False
	printf_s("%d \n", (5 > 3) || (10 > 11));//= 1 Đúng True
	printf_s("%d \n", !(5 > 3) || (10 > 11));//= 0 Sai False

	//Phần 4: Toán tử gán
	int c = 10;
	c += 5;// Viết tường minh hơn c = 10 + 5;
	printf_s("%d", c);

}