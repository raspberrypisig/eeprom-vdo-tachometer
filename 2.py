with open('arduino-eepromdump.txt') as f:
  for line in f:
    #print(line, end='')
    #print('', end='')
    for i in line.split(' '):
      if i == '':
        continue
      print('{:02x}'.format(int(i)), end='')
      print(' ', end='')
    
print()