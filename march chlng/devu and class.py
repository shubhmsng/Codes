# your code goes here
t = int(input())
while t != 0:
    type = int(input())
    s = input()
    nb = s.count('B')
    ng = s.count('G')
    c = 0
    c1 = 0
    c2 = 0
    if (nb == ng) or (nb == ng - 1) or (ng == nb - 1):
        if nb == ng:
            for i in range(0, len(s), 2):
                if s[i] != 'B':
                    c1 += 1
            for i in range(0, len(s), 2):
                if s[i] != 'G':
                    c2 += 1


        if nb == ng - 1:
            for i in range(0, len(s), 2):
                if s[i] != 'G':
                    c += 1
        if ng == nb - 1:
            for i in range(0, len(s), 2):
                if s[i] != 'B':
                    c += 1

        if c1 != 0 or c2 != 0:
            if c1 >= c2:
                c = c2
            else:
                c = c1

        print(c)

    else:
        print('-1')

    t -= 1


