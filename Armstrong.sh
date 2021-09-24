clear
echo "Enter a number"
read n
temp=$n
sum=0

while [ $n -gt 0 ]
do
  r=$((n % 10))
  pow=$((r * r * r))
  sum=$((sum + pow))
  n=$((n / 10))
done
echo $sum

if [ $sum == $temp ]; then
  echo "Amstrong number"
else
  echo "Not an Armstrong number"
fi

