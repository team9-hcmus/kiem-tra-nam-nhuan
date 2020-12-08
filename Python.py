print("Nhap nam can kiem tra: ")
n=int(input())
if (n%400==0) or (n%100!=0 and n%4==0):
  print(n,"la nam nhuan")
else:
  print(n,"khong phai la nam nhuan")
