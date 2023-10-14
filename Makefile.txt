all: index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o console_input_opt.o console_input_arr.o
	gcc -o menu -std=gnu99 index_first_negative.c index_last_negative.c multi_between_negative.c multi_before_and_after_negative.c console_input_opt.c console_input_arr.c

index_first_negative.o:
	gcc -std=gnu99 -c index_first_negative.c

index_last_negative.o:
	gcc -std=gnu99 -c index_last_negative.c

multi_between_negative.o:
	gcc -std=gnu99 -c multi_between_negative.c

multi_before_and_after_negative.o:
	gcc -std=gnu99 -c multi_before_and_after_negative.c

console_input_opt.o:
	gcc -std=gnu99 -c console_input_opt.c

console_input_arr.o:
	gcc -std=gnu99 -c console_input_arr.c
