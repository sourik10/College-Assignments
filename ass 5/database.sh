clear
insert(){
  echo -e "Enter Roll, Name, Marks\n"
  read roll name marks
  echo "$roll|$name|$marks">>student.txt
}

delete(){
  echo "Enter the roll number"
  read roll
  x=`wc -l <student.txt`
  for((i=2;i<=x;i++))
  do
    y=`head -n $i student.txt | tail -n 1 | cut -d \| -f 1`
    if [ $roll -eq $y ]; then
      break
    fi
  done
  rm temp.txt
  head -n $(($i-1)) student.txt >> temp.txt
  tail -n $(($x-$i)) student.txt >> temp.txt
  rm student.txt
  cat temp.txt>student.txt
}

update(){
  echo "Enter the roll number"
  read roll
  echo "Enter the new marks"
  read data
  x=`wc -l<student.txt`
  for((i=2;i<=x;i++))
  do
    y=`head -n $i student.txt | tail -n 1 | cut -d \| -f 1`
    if [ $roll -eq $y ]; then
      val=`head -n $i student.txt | tail -n 1| cut -d \| -f 1,2`
      rm temp.txt
      head -n $(($i - 1)) student.txt >> temp.txt
      echo "$val|$data">>temp.txt
      tail -n $(($x - $i)) student.txt >> temp.txt
      rm student.txt
      cat temp.txt>student.txt
      break
    fi
  done
}

display(){
  cat student.txt
  echo -e "------------------------------------------------\n\n"
}

for ((;;)) do
  echo -e "1.Insert\n2.Delete\n3.Update\n4.Display\n5.Exit"
  read n

  case $n in
  1)insert;;
  2)delete;;
  3)update;;
  4)display;;
  5)exit;;
  *)echo "Invalid entry"
  esac
done
