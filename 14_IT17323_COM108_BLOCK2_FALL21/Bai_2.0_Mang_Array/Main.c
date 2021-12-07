#include <stdio.h>
/*
 *  Mảng - ARRAY
 *	1. Mảng dùng để lưu trữ 1 tập giá trị có cùng kiểu dữ liệu
 *	2. Mảng trong lập trình là mảng tĩnh không co giãn
 *	3. Để truy xuất và gán phần tử trong mảng cần biết index và index luôn bắt đầu từ 0
 */

int main()
{
	//Khai báo biến lưu trữ được 1 giá trị
	int a = 99;
	a = 5;

	//Phần 1: Cách dùng và khởi tạo
	// <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	// <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];

	int arrNumbers[] = { 99,5,55 };//Khởi tạo 1 mảng số nguyên có sẵn 3 giá trị.
	int arrYears[4];//Khởi tạo 1 mảng số nguyên có kích thước là 4
	//Các bạn có thể tạo ra các mảng có các kiểu dữ liệu khác nhau

	//Phần 2: Truy xuất và gán giá trị thông qua index (Vị trí trong mảng luôn bắt đầu từ 0)
	//arrYears = 2021; Lỗi vì không xác định được giá trị sẽ lưu vào đâu
	arrYears[0] = 2021;//[0] = Index 0 hay còn gọi là vị trí thứ 0
	arrYears[1] = 2022;
	arrYears[2] = 2023;
	arrYears[3] = 2024;
	arrYears[0] = 2030;//Ghi đè lại giá trị tại index 0

	//Truy xuất giá trị trong mảng gàn vào đâu thì lấy ra vậy
	printf_s("INDEX 0 = %d,\n", arrYears[0]);// = 2030
	printf_s("INDEX 1 = %d,\n", arrYears[1]);
	printf_s("INDEX 2 = %d,\n", arrYears[2]);
	printf_s("INDEX 3 = %d,\n", arrYears[3]);

	printf_s("=================================\n");
	//Cách để in tất cả các phần tử trong mảng ra màn hình bằng vòng lặp.
	//Index không âm
	for (int i = 0; i < 4; ++i)
	{
		printf_s("INDEX %d = %d,\n",i, arrYears[i]);
	}
}