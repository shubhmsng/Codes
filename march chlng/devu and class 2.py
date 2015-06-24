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
    if type == 0:
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
    else:
        b1 = []
        g1 = []
        b2 = []
        g2 = []
        b = []
        g = []
        if (nb == ng) or (nb == ng - 1) or (ng == nb - 1):

            if nb == ng:
                for i in range(0, len(s), 1):
                    if i%2 == 0:
                        if s[i] != 'B':
                            b1 = b1+[i]
                    else:
                        if s[i] != 'G':
                            g1 = g1+[i]
                for i in range (0, len(s), 1):
                    if i%2 == 0:
                        if s[i] != 'G':
                            g2 = g2 +[i]
                    else:
                        if s[i] != 'B':
                            b2 = b2 +[i]

            elif nb == ng -1:
                for i in range (0, len(s), 1):
                    if i%2 == 0:
                        if s[i] != 'G':
                            b = b+[i]
                    else:
                        if s[i]!='B':
                            g = g+[i]

            elif ng == nb -1:
                for i in range (0, len(s), 1):
                    if i%2 == 0:
                        if s[i] != 'B':
                            g = g+[i]
                    else:
                        if s[i]!='G':
                            b = b+[i]

            if len(b1)!=0 or len(b2) !=0 :
                if len(b1)>= len(g1):
                    for i in range(0, len(g1), 1):
                        d = b1[i] - g1[i]
                        d = d**type
                        if d < 0:
                            c1 = c1 - d
                        else:
                            c1 += d
                else:
                    for i in range(0, len(b1), 1):
                        d = b1[i] - g1[i]
                        d = d**type
                        if d < 0:
                            c1 = c1 - d
                        else:
                            c1 += d
                if len(b2) > len(g2):
                    for i in range(0, len(g2), 1):
                        d = b1[i] - g2[i]
                        d = d**type
                        if d < 0:
                            c2 = c2 - d
                        else:
                            c2 += d
                else:
                    for i in range(0, len(b2), 1):
                        d = b2[i] - g2[i]
                        d = d**type
                        if d < 0:
                            c2 = c2 - d
                        else:
                            c2 += d
                if c1 >= c2 :
                    c = c2
                else:
                    c = c1
            else:
                if len(b)>len(g):
                    for i in range(0, len(g), 1):
                        d = b[i] - g[i]
                        d = d**type
                        if d<0:
                            c -= d
                        else:
                            c += d
                else:
                    for i in range(0, len(b), 1):
                        d = b[i] - g[i]
                        d = d**type
                        if d < 0:
                            c -= d
                        else:
                            c += d

            print(c)

        else:
            print('-1')

    t -= 1


