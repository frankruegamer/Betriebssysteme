#/bin/sh

read input
# count=$(echo $input | wc -c)
expr $(echo $input | wc -c) - 1
# Alternative ^v
echo ${#input}
# echo $count

