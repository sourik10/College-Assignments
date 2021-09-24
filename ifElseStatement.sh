clear
echo enter number
read n

#if_else statement 
if(($n >= 90))
then
  echo 1st division
elif(($n >= 80 && $n < 90 ))
then
  echo 2nd division
elif(($n >= 70 && $n < 80 ))
then
  echo 3rd division
else
  echo 4th division
#fi statement for end of if-statement
fi



