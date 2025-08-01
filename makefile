stud_database: main.o stud_add.o stud_del.o stud_show.o stud_del_all.o stud_sort.o stud_save.o stud_mod.o stud_reverse.o
	cc main.o stud_add.o stud_del.o stud_show.o stud_del_all.o stud_sort.o stud_save.o stud_mod.o stud_reverse.o -o stud_database

main.o: main.c
	cc -c main.c

stud_add.o: stud_add.c
	cc -c stud_add.c

stud_del.o: stud_del.c
	cc -c stud_del.c

stud_show.o: stud_show.c
	cc -c stud_show.c

stud_del_all.o: stud_del_all.c
	cc -c stud_del_all.c

stud_sort.o: stud_sort.c
	cc -c stud_sort.c

stud_save.o: stud_save.c
	cc -c stud_save.c

stud_mod.o: stud_mod.c
	cc -c stud_mod.c

stud_reverse.o: stud_reverse.c
	cc -c stud_reverse.c

clean:
	rm *.o stud_database
