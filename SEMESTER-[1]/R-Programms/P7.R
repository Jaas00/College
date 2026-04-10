#Write a program to count the number of even numbers
#stored inside a vector of numbers.
x <- c(1,34,65,78,23,90,67,56,34,12,35,68,79,99,2)
cnt = 0
for (i in x){
  if(i%%2==0)
    cnt = cnt+1
}
cat("The number of even numbers are : ",cnt)