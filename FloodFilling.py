M = 8
N = 8


def Floodfilling(screen, x, y, OldColor, NewColor):
    if (x < 0 or x >= M or y < 0 or
            y >= N or screen[x][y] != OldColor or
            screen[x][y] == NewColor):
        return

    screen[x][y] = NewColor

    Floodfilling(screen, x + 1, y, OldColor, NewColor)
    Floodfilling(screen, x - 1, y, OldColor, NewColor)
    Floodfilling(screen, x, y + 1, OldColor, NewColor)
    Floodfilling(screen, x, y - 1, OldColor, NewColor)

def floodFill(screen, x, y, NewColor):
    OldColor = screen[x][y]
    if (OldColor == NewColor):
        return
    Floodfilling(screen, x, y, OldColor, NewColor)


screen = [[1, 1, 1, 1, 1, 1, 1, 1],
          [1, 1, 1, 1, 1, 1, 0, 0],
          [1, 0, 0, 1, 1, 0, 1, 1],
          [1, 2, 2, 2, 2, 0, 1, 0],
          [1, 1, 1, 2, 2, 0, 1, 0],
          [1, 1, 1, 2, 2, 2, 2, 0],
          [1, 1, 1, 1, 1, 2, 1, 1],
          [1, 1, 1, 1, 1, 2, 2, 1]]

x = 4
y = 4
NewColor = 3
floodFill(screen, x, y, NewColor)

print("After call to floodFill:")
for i in range(M):
    for j in range(N):
        print(screen[i][j], end=' ')
    print()
