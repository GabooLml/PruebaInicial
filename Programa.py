import fileinput

lines = []
for line in fileinput.input():
	lines.append(line)

if len(lines) == 2:
	print(int(lines[0]) + int(lines[1]))

elif len(lines) == 5:
	sum = 0
	for line in lines:
		sum += float(line)

	print(sum)
else:
	sum = 0
	for line in lines:
		sum += int(line)

	print(sum)