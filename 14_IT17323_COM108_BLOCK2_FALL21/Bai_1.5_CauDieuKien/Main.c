#include <stdio.h>
/// Câu lệnh if
///	Hay còn gọi là câu điều kiện hoặc câu lệnh rẽ nhánh
int main()
{
	//Phần 1: Cách sử dụng: if + tab
	// if (1) // 1 = true
	// { Mở lệnh
	// 					//Body code thực thi 1 hành động hoặc nhiều khi thỏa mãn IF
	// } Đóng

	//Ví dụ: Viết 1 chương trình nhập điểm thi và thông báo kết quả.
	double diemThiC;
	printf_s("Moi ban nhap diem C: ");
	scanf_s("%lf", &diemThiC);
	// if (diemThiC>=5)
	// {
	// 	printf_s("Chuc mung ban qua mon");
	// 	return;//Khi gặp return thì sẽ kết thúc hàm hiện tại
	// }
	// printf_s("Chuc mung ban da mat 759K");

	//Phần 2. Câu lệnh else
	// if (1)
	// {
	//
	// }
	// else
	// {
	// 	//Thực thi hành động khi if không thỏa mãn
	// }
	// if (diemThiC >= 5)
	// {
	// 	printf_s("Chuc mung ban qua mon");
	// }else
	// {
	// 	printf_s("Chuc mung ban da mat 759K");
	// }

	/*
	 * Phần 3: Else IF dùng để nối nhiều điều kiện lại với nhau
	 */
	// if (1)
	// {
	// 	
	// }else if (1)
	// {
	// 	//Vẫn phải thỏa mãn điều kiện giống như if
	// }else if (1)
	// {
	// 	//Vẫn phải thỏa mãn điều kiện giống như if
	// }else
	// {
	// 	//khi không thỏa mãn các trường hợp trên sẽ vào else
	// }
	// if (diemThiC>=8)
	// {
	// 	printf_s("Thuong 1 con iphone 13");
	// }else if (diemThiC >= 6)
	// {
	// 	printf_s("Thuong 1 con iphone 11");
	// }else if (diemThiC >= 5)
	// {
	// 	printf_s("Thuong 1 con iphone 8");
	// }else
	// {
	// 	printf_s("Thuong 1 con cuc gach");
	// }

	/*
	 * Viết 1 chương trình nhập điểm trung bình môn C sau đó đánh giá điểm trung bình thông qua các trường hợp sau:
	 *  1. 9 -> 10 = Xuat Sac
	 *	2. 8 -> 8.9 = Gioi
	 *	3. 6 -> 7.9 =  Kha
	 *	4. 5 -> 5.9 = Trung Binh
	 *	5. Nhỏ hơn 5 học lại.
	 */
	if (diemThiC >=9 && diemThiC <=10)
	{
		printf_s("Xuat sac");
	}else if (diemThiC >= 8)
	{
		printf_s("Giỏi");
	}else if (diemThiC >= 6)
	{
		printf_s("Kha");
	}else if (diemThiC >= 5)
	{
		printf_s("Kha");
	}else
	{
		printf_s("Chuc mung hoc lai");
	}
}