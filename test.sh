make re
make clean

ARG=$(seq -100 100 | shuf | head -100 | tr '\n' ' ')
./push_swap $ARG | ./checker $ARG