# Xác định yêu cầu của bài toán
- Nhập vào một dãy gồm toàn hai số nhị phân 0 và 1
- Thực hiện thuật toán sắp xếp sao cho các số 0 ở đầu dãy và các số 1 ở cuối dãy
# Giải thuật của bài toán
- Tạo một mảng mới, dùng vòng lặp để tìm các số 0 trong mảng khởi tạo binary() ban đầu
- Mỗi khi tìm thấy 0 sẽ sao chép nó vào mảng mới và tịnh tiến giá trị của k lên một đơn vị
- Khi tìm xong ta sẽ được một mảng mới với các chữ số 0 ở đầu dãy có chỉ số từ 0 đến k - 1
- Duyệt tiếp mảng binary() ban đầu để tìm các chữ số 1 và sao chép nó vào mảng mới từ chỉ số k đến n-1