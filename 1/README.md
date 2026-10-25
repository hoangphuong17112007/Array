# Xác định yêu cầu của bài toán
- Nhập vào một mảng nums là các số nguyên 
- Nhập vào target à tổng cần tìm

# Phương pháp giải 
- Cho duyệt mảng nums từ phần tử i=0 đến n-1 sau đó duyệt mảng j = i+1 đến n để tránh tràn mảng đồng thời có thể duyệt từ đầu đến cuối mà không bị lặp lại các số đã tính giúp tối ưu hóa bộ nhớ
- Sau đó thiết lập điều kiện nếu A[i] + A[j] == target thì sẽ in ra cặp Pải thỏa mãn
- Sử dụng một cờ báo hiệu k. Ban đầu xét k = 0, nếu có xuất hiện cặp cần tìm thì k ++. Sau khi kết thúc bài toán nếu k = 0 sẽ in ra màn hình "Pair not found"