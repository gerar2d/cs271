age = input("What is your age: ")
percentage = input("What percentage do you want: ")
p_calc = 100 / percentage
maxhr = age - 220
maxx = maxhr * p_calc

print(f"{p_calc}{maxhr}{maxx}")
