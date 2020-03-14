import matplotlib.pyplot as plt
import sys

f = open(sys.argv[1]);
n = f.readline();

for i in range(int(n)):
    s = f.readline();
    sList = s.split(" ");
    x = float(sList[0]);
    y = float(sList[1]);
    plt.scatter(x, y);

    r =  629.66
    r2 = 662.53


circle1 = plt.Circle((0, 0), 0.2, color='r')
circle2 = plt.Circle((0.5, 0.5), 0.2, color='blue')


fig, ax = plt.subplots() # note we must use plt.subplots, not plt.subplot
# (or if you have an existing figure)
# fig = plt.gcf()
# ax = fig.gca()

ax.add_artist(circle1)
ax.add_artist(circle2)


fig.savefig('plotcircles.png')
