head -n 17 libft.h > temp.h
cat *.c | grep "ft_" | grep "(" | grep -v ";" | grep -v "static" | grep -v "if" | grep -v "while" | sed 's/$/;/' >> temp.h
echo "\n#endif" >> temp.h
cat temp.h > libft.h
rm temp.h
