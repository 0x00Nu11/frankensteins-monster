#!/bin/sh
touch frank.txt
n=$1
while [ "$n" != 1 ]; do
    printf '%d\n' "$n" >> frank.txt
    if [ $((n % 2)) = 0 ]; then
        n=$((n / 2))
    else
        n=$((n * 3 + 1))
    fi
done
printf '1\n' >> frank.txt
echo "output saved in 'frank.txt'"