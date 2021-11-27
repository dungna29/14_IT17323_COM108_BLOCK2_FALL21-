#include <stdio.h>
/*
 *  3 Loại vòng lặp: for, while, do...while dùng để lặp lại 1 đoạn code nào đó để thực 1 hành động.
 *	Từ khóa: + break: dùng để ngắt vòng lặp
 *			 + continue: bỏ qua đoạn code phía sau và tiến hành lặp sang vàng vòng lặp mới tiếp theo
 *
 * Lưu ý:   + Biết điều kiện vòng lặp phải đúng.
 *			+ Điểm bắt đầu chạy
 *			+ Bước nhẩy sẽ giúp tăng đến điểm dừng vòng lặp
 */
int main()
{
	//Phần 1: In ra câu dưới đây 5 lần
	printf_s("Toi khuong muon chep code \n");
	printf_s("Toi khuong muon chep code \n");
	printf_s("Toi khuong muon chep code \n");
	printf_s("Toi khuong muon chep code \n");
	printf_s("Toi khuong muon chep code \n");
	printf_s("===========================\n");

	//Phần 2: Vòng lặp for: for + tab
	for (int i = 0; i < 5; i++)
	{
		//i = 1
		printf_s("Toi khuong muon chep code %d \n",i);
		
	}
	/*
	 * + int i = 0: Điểm bắt đầu của vòng lặp
	 * + i < 5: Điều kiện để dừng vòng lặp
	 * + i++: Bước nhẩy của i để đạt được điều kiện dừng
	 * + Vòng lặp không có điều kiện dừng hoặc ko đạt được điều kiện dừng gọi là vòng lặp vô hạn
	*/
	printf_s("===========================\n");

	//Phần 3: Vòng lặp While: whi + tab
	int i = 0;
	while (i < 5)
	{
		printf_s("Toi khuong muon chep code %d \n", i);
		i++;
	}

	//Phần 4: Vòng lặp do...While: do + tab
	do
	{
		//Khi điều kiện vòng lặp sai thì sẽ thực hiện 1 lần.
		printf_s("9>10 la sai \n");
	}
	while (9>10);//= false
}