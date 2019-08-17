
with open('read-data-short-convert.txt') as f:
  for line in f:
    if int(line) == 0:
      print('00', end='')
    elif int(line) <= 9:
      print('0', end='')
      print(int(line), end='')
      #print(' ', end='')
    else:	
      print('{:02x}'.format(int(line)), end='')

    print(' ', end='')
print()
