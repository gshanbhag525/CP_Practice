# For 2d cuboid points
# long way input
# x = int (input()) 
# y = int ( input()) 
# z = int ( input()) 
# n = int ( input()) 

#short way input
# x,y,z,n = int(input()), int(input()), int(input()), int(input())

# more short way input
x,y,z,n = (int(input()) for _ in range(4))

ar = [] 
# Using list comprehension

ar = [[i, j, k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if((i+j+k) != n)]
print(ar)