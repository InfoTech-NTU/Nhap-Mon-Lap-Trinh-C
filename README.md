# 📘 NHẬP MÔN LẬP TRÌNH C

## I. Giới thiệu chung
- 🔹 Đặc điểm của ngôn ngữ lập trình C  
- 🔹 Ứng dụng thực tế của C trong lập trình hệ thống và phần mềm  
- 🔹 Môi trường lập trình C (Code::Blocks, Dev C++, VS Code, GCC...)  
- 🔹 Các thành phần/khái niệm cơ bản trong C (biến, kiểu dữ liệu, toán tử, cú pháp cơ bản)  
- 🔹 Một số lệnh cơ bản (`printf`, `scanf`, khai báo biến...)  
- 🔹 📝 **Bài tập làm quen**  

---

## II. Cấu trúc rẽ nhánh
- 🔹 Khái niệm về cấu trúc rẽ nhánh (điều kiện)  
- 🔹 Câu lệnh `if`, `if...else`, `else if`  
- 🔹 Câu lệnh `switch...case`  
- 🔹 📝 **Bài tập thực hành áp dụng rẽ nhánh**  

---

## III. Vòng lặp
- 🔹 Tổng quan về vòng lặp và ứng dụng  
- 🔹 Câu lệnh `for`  
- 🔹 Câu lệnh `while`  
- 🔹 Câu lệnh `do...while`  
- 🔹 Sự khác nhau giữa các loại vòng lặp  
- 🔹 📝 **Bài tập thực hành sử dụng vòng lặp**  

---

## IV. Mảng 1 chiều - Mảng 2 chiều
### 📌 Mảng 1 chiều
- 🔹 Khái niệm và khai báo mảng 1 chiều  
- 🔹 Các thao tác cơ bản: nhập, xuất, duyệt, tính tổng, tìm min/max, sắp xếp  
- 🔹 📝 **Bài tập mảng 1 chiều**

### 📌 Mảng 2 chiều
- 🔹 Khái niệm và khai báo mảng 2 chiều  
- 🔹 Các thao tác cơ bản: nhập, xuất, tính tổng hàng/cột/đường chéo...  
- 🔹 📝 **Bài tập mảng 2 chiều**  

---

## V. Chuỗi (String)
- 🔹 Khái niệm về chuỗi và cách khai báo  
- 🔹 Các thao tác cơ bản: nhập, xuất, duyệt chuỗi, đếm ký tự...  
- 🔹 Một số hàm chuỗi có sẵn trong thư viện `<string.h>` như `strlen`, `strcpy`, `strcmp`, `strcat`...  
- 🔹 📝 **Bài tập thực hành xử lý chuỗi**

---

## 💡 Một số gợi ý - tham khảo
### 1. Một số thư viện hay dùng

| STT | Thư viện     | Chức năng                                                      |
|-----|--------------|-----------------------------------------------------------------|
| 1   | stdio.h      | Nhập/xuất dữ liệu (printf, scanf, fopen, fclose, ...)          |
| 2   | stdlib.h     | Quản lý bộ nhớ (malloc, free), ép kiểu, tạo số ngẫu nhiên      |
| 3   | string.h     | Xử lý chuỗi (strlen, strcpy, strcat, strcmp, ...)              |
| 4   | math.h       | Các hàm toán học (sqrt, pow, sin, cos, ...)                    |
| 5   | limits.h     | Giá trị giới hạn của các kiểu dữ liệu                          |
| 6   | ...          | ...                                                            |

### 2. Một số điều kiện

| STT | Điều kiện                   | Chức năng                                                       |
|-----|-----------------------------|-----------------------------------------------------------------|
| 1   | n % 2  == 0                 | Điều kiện cho số n là **số chẵn**                               |
| 2   | n % 2 == 1 hoặc n % 2 != 0  | Điều kiện cho số n là **số lẻ**                                 |
| 3   | n % k == 0                  | Kiểm tra số **chia hết cho k**                                  |
| 4   | temp = m % n                | Lấy kết quả dư của phép chia                                    |
| 5   | abs(n)                      | Lấy **giá trị tuyệt đối** của `n` (`<stdlib.h>`)                |
| 6   | sqrt(n)                     | Lấy **giá trị căn bậc 2** của `n` (`<math.h>`)                  |
| 7   | pow(n,2)                    | Lấy **giá trị bình phương** của `n` (`<math.h>`)                |
| 8   | i == j                      | Phần tử nằm trên **đường chéo chính**                           |
| 9   | i + j == n - 1              | Phần tử nằm trên **đường chéo phụ**                             |
| 10  | i < j                       | Phần tử thuộc **tam giác trên đường chéo chính** (Không tính đường chéo chính)   |
| 11  | i > j                       | Phần tử thuộc **tam giác dưới đường chéo chính** (Không tính đường chéo chính)   |
| 12  | i + j < n - 1               | Phần tử thuộc **tam giác trên đường chéo phụ** (Không tính đường chéo phụ)   |
| 13  | i + j > n - 1               | Phần tử thuộc **tam giác dưới đường chéo phụ** (Không tính đường chéo phụ)   |
| 14  | ...                         | ...                                                                    |

>>📑 Một số thông tin tham khảo, rất mong sẽ hỗ trợ được mọi người
