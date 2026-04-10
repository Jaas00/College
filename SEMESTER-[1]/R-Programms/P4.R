#check whether a number is even or odd.
EvenOdd <- function(x){
  if(x%%2==0)
    return ("This is an even number.\n")
  else
    return ("This is an odd number.\n")
}
cat("Enter the number")
num <- scan(n=1)
cat(EvenOdd(num))