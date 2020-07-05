import java.util.*;

public class Main

{

    public static void maxi_col(int mat[][], int m, int n)

    {

        int i, j;

        for (i = 0; i < n; i++)

        {

            int max = mat[0][i];

            for (j = 1; j < m; j++)

            {

                if (mat[j][i] > max)

                {

                    max = mat[j][i];

                }

            }

            System.out.println(max);

        }

    }

    public static void main(String[] args)

    {

        int n, m;

        Scanner sc = new Scanner(System.in);

        m = sc.nextInt();

        n = sc.nextInt();

        int[][] mat1 = new int[m][n];

        int i, j;

        for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

                mat1[i][j] = sc.nextInt();

        }

        maxi_col(mat1, m, n);

    }

}

/*
 * Maximum element in each column In a family, the people are arranged in rows
 * and columns. Male persons in the families are arranged in a row and females
 * are arranged in a column. Find the eldest women in each column. (Write a
 * program to find the maximum element in each column of the matrix.) Input
 * Format:
 * 
 * The input consists of (m*n+2) integers.
 * 
 * The first integer corresponds to m, the number of rows in the matrix and the
 * second integer corresponds to n, the number of columns in the matrix.
 * 
 * The remaining integers correspond to the elements in the matrix.
 * 
 * The elements are read in row-wise order, the first row first, then second row
 * and so on.
 * 
 * Assume that the maximum value of m and n is 10.
 * 
 * Output Format:
 * 
 * Refer to the sample output for details.
 * 
 * Sample Input:
 * 
 * 3
 * 
 * 2
 * 
 * 4 5
 * 
 * 6 9
 * 
 * 0 3
 * 
 * Sample Output:
 * 
 * 6
 * 
 * 9
 * 
 */