with open('arduino-eepromdump.txt') as f:
  for line in f:
    for i in line.split(' '):
      if i == '':
        continue
      if int(i) == 0:
        print('00', end='')
      elif int(i) <= 9:
        print('0', end='')
        print(int(i), end='')
      else:
        print('{:02x}'.format(int(i)), end='')
      print(' ', end='')
print()
