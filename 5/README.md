# Xác định yêu cầu bài toán
- Nhập vào n phần tử của mảng A với duy nhất 1 số bị lặp lại 2 lần
- In ra số bị lặp lại đó mà không sử dụng một mảng phụ nào khác 
# Giải thuật của bài toán
- Nhập vào dãy số theo đúng yêu cầu của đề bài
- Thiết lập một cờ k = 0 ở đầu mỗi vòng lặp i từ (1,n-1)
- Dùng vòng lặp j từ (i+1, n) để thực hiện phép so sánh giữa A[i] và A[j] xem có số bị lặp không
- Nếu tìm được A[i] == A[j] thiết lập cờ k = 1 và dùng break để thoát vòng lặp
- Nếu k == 1 thì in ra số bị lặp đó