echo "PracticeSession"

#Sum 2nos
echo "Enter 2nos"
echo "1st No"
read x
echo "2nd No"
read y
echo "result"
echo `expr $x + $y`
------------------------------------------------------------------------------------------------

#operators
echo `expr $x \* $y` #multiply
echo `expr $x / $y` #division
echo `expr $x % $y` #mod operator
--------------------------------------------------------------------------------------------------

#if-else statement
echo "enter a number"
read n

if (($n>=60 && $n>=100))
then echo "above 100"
elif(($n >= 50 ))
then echo "above 50"
else echo "below 50"

fi


----------------------------------------------------------------------------------------------
#switch-statement
echo enter a captainName
read string
case $string in 
"kane") echo "newzealand";;
"virat") echo "india";;
"smith") echo "australia";;

esac
--------------------------------------------------------------------------------------------
#looping statemnet





