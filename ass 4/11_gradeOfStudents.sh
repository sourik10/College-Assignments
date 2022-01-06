clear
#file1=$1
file1=input.txt
echo $file1
echo
cat $file1
echo
if [ -f $file1 ]
then
  exec<$file1
  echo "Roll    Name   Roll    Grade" >>out1
  while read line
  do
    set `echo $line`
    case $3 in
    100|9[0-9]) echo " $1     $2    $3     O" >>out1;; 
    8[0-9]) echo " $1     $2    $3     E" >>out1;; 
    7[0-9]) echo " $1      $2    $3    A" >>out1;; 
    6[0-9]) echo " $1      $2     $3     B" >>out1;; 
    5[0-9]) echo " $1     $2    $3     C" >>out1;; 
    *) echo " $1      $2     $3    F" >>out1;; 
    esac  
  done
fi
