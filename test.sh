# echo Errorcheck:
# echo
# echo OK:
# ./push_swap 1 3 5 +9 20 -4 50 60 04 08
# ./push_swap "3 4 6 8 9 74 -56 +495"
# ./push_swap "95 99 -9 10 9"
# ./push_swap 2147483647 2 4 7
# ./push_swap 99 -2147483648 23 545
# ./push_swap "2147483647 843 56544 24394"
# echo
# echo ERROR:
# echo --
./push_swap 1 3 dog 35 80 -3
echo --
./push_swap a
echo --
./push_swap 1 2 3 5 67b778 947
echo --
./push_swap " 12 4 6 8 54fhd 4354"
echo --
./push_swap 1 --    45 32
echo --
./push_swap 1 3 58 9 3
echo --
./push_swap 3 03
echo --
./push_swap " 49 128     50 38   49"
echo --
./push_swap 54867543867438 3
echo --
./push_swap -2147483647765 4 5
echo --
./push_swap "214748364748385 28 47 29"
echo --
./push_swap "  "
echo --
./push_swap ""
echo --
./push_swap -
echo --
./push_swap +