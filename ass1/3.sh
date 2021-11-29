#####ERROR 
clear
echo "Enter 1st,2nd,3rd Sides of Triangle"
read a b c
if [ `expr $a + $b ` -gt $c ]
then 
  s=`expr $a + $b + $c ` / 2
  area=`$s \* (( $s - $a )) \* (( $s - $b))  \* (( $s - $c )) `
  echo "Area of Triangle=$area"
else 
  echo "Enter Correct value for Triangle"
fi
