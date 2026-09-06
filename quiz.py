print("---------------------------")
print("  Welcome in quiz 2026     ")
print("--------------------------")

x = input("what is your name ?")
score=0
 
print("welcome",x)

print("who  invented computer?")
print("a.ayush nautiyal ")
print("b.charls baibej")
print("right brother")
e = input("chose you option,(a,b,c):")
if (e=='b'):
    print("youre option is right" )
    score=score+1
elif (e=='a'):
    print("your option is worng")
else:
    print("your option worng")

print("what is the capital of india ")
print("a.dehradun")
print("b.dehli")
print("kolkata")
ans=input("chose your ootion:(a/b/c)" )
if (ans=='b'):
    print("your option is right")
    score= score +1
else:
    print("your option is worng" )

print("your score is ",score)