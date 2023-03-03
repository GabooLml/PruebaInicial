import sys

if len(sys.argv) == 1:
    sys.exit(1)

numbers = sys.argv[1:]
sum = 0

for num in numbers:
    sum += float(num)

print(sum)
