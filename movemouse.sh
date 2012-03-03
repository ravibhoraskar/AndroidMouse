
while [ true ]
do
	read str
	arr=$(echo $str | tr " " "\n")
	
	xdotool mousemove ${arr[0]} ${arr[1]}
done

while [true]
do

done
