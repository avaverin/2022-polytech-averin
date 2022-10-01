Вывод: 	-O0-самый долгий вариант оптимизации, -Ofast-самый быстрый; 
	-Ofast-наибольший размер файла, -O1-наименьший; 
	-Ofast-наибольший размер секции, -Os-наименьший.

g++ complex.cpp
time: 	real 0.565s 
	user 0.000s 
	sys  0.015s 
file size: 48592 
section size: 00001a40

g++ -O0 complex.cpp
time: 	real 0.728s 
	user 0.000s 
	sys  0.031s 
file size: 48592 
section size: 00001a40

g++ -O1 complex.cpp
time: 	real 0.265s 
	user 0.000s 
	sys  0.015s 
file size: 47683 
section size: 000019c0

g++ -O2 complex.cpp
time: 	real 0.227s 
	user 0.000s 
	sys  0.015s 
file size: 49001 
section size: 00001a60 

g++ -O3 complex.cpp
time: 	real 0.175s 
	user 0.000s 
	sys  0.015s 
file size: 48791 
section size: 00001a50

g++ -Os complex.cpp
time: 	real 0.319s
	user 0.000s 
	sys  0.031s 
file size: 47791 
section size: 00001970

g++ -Ofast complex.cpp
time: 	real 0.177s 
	user 0.000s 
	sys  0.015s 
file size: 50981 
section size: 00001ad8

g++ -Og complex.cpp
time: 	real 0.373s 
	user 0.000s 
	sys  0.031s 
file size: 47749 
section size: 000019b0