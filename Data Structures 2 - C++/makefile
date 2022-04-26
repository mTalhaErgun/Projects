hepsi : derle calistir

derle:
		g++ -I ./include/ -o ./lib/DogruKuyrugu.o -c ./src/DogruKuyrugu.cpp
		g++ -I ./include/ -o ./lib/Avl.o -c ./src/Avl.cpp
		g++ -I ./include/ -o ./lib/DosyaIslemleri.o -c ./src/DosyaIslemleri.cpp
		g++ -I ./include/ -o ./bin/EkranVeri.exe ./lib/DogruKuyrugu.o ./lib/Avl.o ./lib/DosyaIslemleri.o ./src/main.cpp

calistir:
		./bin/EkranVeri.exe