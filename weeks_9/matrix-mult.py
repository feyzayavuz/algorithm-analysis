matrix0 = [[1,2,3],
          [4,5,6],
          [7,8,9]]
         
          
matrix1 =  [[10,11,12],
           [13,14,15],
           [16,17,18]]
           
MatrixZ = [[0,0,0],
          [0,0,0],
          [0,0,0]]
          

for i in range(len(matrix0)):
    for j in range(len(matrix1[0])):
        for k in range(len(matrix1)):
            MatrixZ[i][j] += matrix0[i][k]*matrix1[k][j]

for r in MatrixZ:
    print(r)
