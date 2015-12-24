echo -e "Running all sorting algorithm on input size of 40,000 \n" > result.txt

echo " bubblesort" >> result.txt
{ time ./bubblesort ; } 2>> result.txt

echo -e "\n heapsort" >> result.txt
{ time ./heapsort ; } 2>> result.txt

echo -e "\n mergesort" >> result.txt
{ time ./mergesort ; } 2>> result.txt

echo -e "\n quicksort" >> result.txt
{ time ./quicksort ; } 2>> result.txt

echo -e "\n selectionsort" >> result.txt
{ time ./selectionsort ; } 2>> result.txt

echo -e "\n insertionsort" >> result.txt
{ time ./insertionsort ; } 2>> result.txt


