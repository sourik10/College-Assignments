clear
printf "Enter the value of x: "
read x
printf "Enter the value of n: "
read n
if [ $n -eq 1 ]; then
  ans=`expr $x \* $x`
  Y=`expr 1 + $ans`
elif [ $n -eq 2 ]; then
  ans=`echo "scale = 3; $x / $n" | bc`
  Y=`echo "scale = 3; 1 + $ans" | bc`
elif [ $n -eq 3 ]; then
  ans=`expr 2 \* $x`
  Y=`expr 1 + $ans`
else
  ans=`expr $x \* $n`
  Y=`expr 1 + $ans`
fi
echo "Y = $Y"
