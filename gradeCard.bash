echo "Enter Number"
read n
c=`expr $n / 10`
case $c in
10|9)echo "O";;
8)echo "E";;
7)echo "A";;
6)echo "B";;
5)echo "C";;
4|3|2|1|0)echo "F"
  exit;;
*)echo "Invalid"
esac
