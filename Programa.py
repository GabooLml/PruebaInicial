import fileinput

lines = []
for line in fileinput.input():
	lines.append(line)

if len(lines) == 2:
	print(lines[0] + lines[1])
elif type(lines[0]) is float:
	sum = 0
	for line in lines:
		sum += line

	print(sum)
else:
	sum = 0
	for line in lines:
		sum += line

	print(sum)