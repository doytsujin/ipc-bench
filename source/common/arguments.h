#ifndef IPC_BENCH_ARGUMENTS_H
#define IPC_BENCH_ARGUMENTS_H

void print_usage();

struct Arguments {
	int size;
	int count;
};

void parse_arguments(struct Arguments* arguments, int argc, char* argv[]);

int check_flag(const char* name, int argc, char* argv[]);

#endif /* IPC_BENCH_ARGUMENTS_H */