#calculator program in .sh
clear
echo enter two values
read a
read b
#addition
m=`expr $a + $b`
echo sum=$m

#subtraction
n=`expr $a - $b`
echo subtract =$n

#multiplication
p=`expr $a \* $b`
echo multiply=$p

#division
q=`expr $a / $b`
echo division=$q

#modulator operator
s=`expr $a % $b`
echo remainder=$s

