# INT2203 - Cấu trúc dữ liệu và giải thuật

## Học kì II, 2017-2018

- Lớp INT2203 6 (N1)

## Quy cách nộp bài thực hành

- Sinh viên tạo tài khoản GitHub
- Sinh viên fork repo này về tài khoản của mình
- Sinh viên chỉ sửa trong thư mục có tên của mình
- Mỗi tuần sinh viên phải hoàn thành bài thực hành và đặt trong thư mục `dsaxx`, trong đó `xx` là số tuần, ví dụ: `dsa01`
- Đề bài thực hành nằm trong thư mục `Labs`
- Sinh viên commit kết quả lên repo GitHub đã fork về
- Sau đó tạo pull request để cập nhật lên repo của giảng viên thực hành
- Các pull request cần đảm bảo không conflict với repo chính
- Giảng viên thực hành sẽ chấp nhận các pull request trước buổi thực hành tuần kế tiếp

## Chính sách điểm

- Phát hiện sao chép bài thì các sinh viên có bài giống nhau bị cấm thi
- Chấm điểm theo từng tuần

## Bài thực hành

| Tuần | Bài thực hành                            |
| ---- | ---------------------------------------- |
| 01   | [dsa01](Labs/w01_lab01.pdf)              |
| 02   | [dsa02](Labs/w02_lab02.pdf)              |
| 03   | [dsa03](Labs/w03_lab03.pdf)              |
| 04   | [dsa04](Labs/w04_lab04.pdf)              |
| 05   | [dsa05](Labs/w05_lab05.pdf)              |
| 06   | [dsa06](Labs/w06_lab06.pdf), [strlist.h](Labs/strlist.h.pdf) |
| 07   | [dsa07](Labs/w07_lab07.pdf), [arrayqueue.cpp](Labs/arrayqueue.cpp.pdf) |
| 08   | [dsa08](Labs/w08_lab08.pdf)              |
| 09   | [dsa09](Labs/w09_lab09.pdf)              |
| 10   | [dsa10](Labs/w10_lab10.pdf)              |
| 11   | [dsa11](Labs/w11_lab11.pdf)              |
| 12   | [dsa12](Labs/w12_lab12.pdf)              |
| 13   | [dsa13](Labs/w13_lab13.pdf)              |
| 14   | [dsa14](Labs/w14_lab14.pdf)              |

## Tự học C++

Vào trang [CodePower](https://codepower.vn/).

## Hướng dẫn sử dụng Git

Xem thêm tại [đây](https://git-scm.com/book/vi/v1/B%E1%BA%AFt-%C4%90%E1%BA%A7u)

### git clone

Dùng để tải repo trên GitHub về máy, ví dụ:

```
git clone https://github.com/kienvu58/dsa_spring_2017_int2203_6_1.git
```

Sẽ có một thư mục `dsa_spring_2017_int2203_6_1` ở thư mục hiện tại.

### git status

Dùng để kiểm tra trạng thái của thư mục hiện thời, ví dụ:

```
cd dsa_spring_2017_int2203_6_1
git status
```

Sẽ hiện ra là `working directory is clean...`.

### git add

Dùng để thêm các thay đổi vào stage, ví dụ:

```
notepad newfile.txt
git status
```

Sẽ thấy có dòng `newfile.txt` màu đỏ.

```
git add newfile.txt
git status
```

Sẽ thấy dòng `newfile newfile.txt` màu xanh.

### git commit

Dùng để commit các thay đổi, ví dụ:

```
git commit -m "add newfile.txt"
git status
```

Sau khi `commit` gõ `git status` sẽ thấy `working directory is clean...`.

### git config

Dùng để thiết lập các cài đặt về git, ví dụ:

```
git config --global user.email "vtk5995@gmail.com"
git config --global user.name "kienvu58"
```

### git push

Đẩy những thay đổi đã `commit` lên trên GitHub.

```
git push origin master
```

### git pull

Kéo những thay đổi từ GitHub về repo local.
```
git pull origin master
```

### git log

Xem lịch sử các `commit`.

```
git log
```

### git remote add

Thêm một repo để update.

```
git remote add upstream https://github.com/kienvu58/dsa_spring_2017_int2203_6_1
git pull upstream master
```

## Sách

[Introduction to Algorithms - CLRS](http://ressources.unisciel.fr/algoprog/s00aaroot/aa00module1/res/%5BCormen-AL2011%5DIntroduction_To_Algorithms-A3.pdf)
[DSAP](https://kytstech.blogspot.com/2016/09/dsap-textbook.html)
