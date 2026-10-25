# Xác định yêu cầu bài toán
- Cho một mảng gồm 3 số 0, 1, 2 dùng thuật toán để sắp xếp sao cho các số 0 ở đầu, số 1 ở giữa và các số 2 ở cuối mảng
- Không được dùng thêm mảng phụ
# Giải thuật cho bài toán
- Đặt một biến phụ k = 0
- Vòng lặp thứ nhất chạy từ i đến n để tìm ra A[i] = 0 và swap nó với vị trí A[k]
- Sau khi swap cho k++;
- Vòng lặp làm tương tự với k = 1, sau đó k =2 đã được lùi về cuối mảng nên không cần vòng lặp thứ 3