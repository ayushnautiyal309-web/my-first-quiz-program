year=int(input("enter the year\n"))
if (year%100==0 and year%400==0 )or (year%100!=0 and year%4==0):
    print('this year is leap year:\n',year)
else:
    print("this year is not leap year:\n",year)