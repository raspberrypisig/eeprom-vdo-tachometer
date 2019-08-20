with open('final-mohan.txt') as f:
  j=0
  print('byte buf[256]={')
  for line in f:
    for i in line.split(' '):
      print('0x{}'.format(i.replace('\n','')), end='')
      j=j+1
      if j == 256:
        pass
      else:
        print(',', end='')
      if j%8 == 0:
        print()

  print('};')
