/*************************************************************************
 @File Name    : MathUtils.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2023年04月19日 星期三 22时44分50秒
 @Description  : for math utils
 ************************************************************************/

#include <cstdio>
#include <vector>

typedef std::vector<std::vector<double>> Matrix;
int multiMatrix(const Matrix &a, const Matrix &b, Matrix &c)
{
    size_t aRow = a.size();
    size_t bRow = b.size();
    // check row whether valid
    if((aRow <= 0) || (bRow <= 0))
    {
        printf("aRow:%zu,bRow:%zu",aRow,bRow);
        return -1;
    }

    size_t aCol = a[0].size();
    size_t bCol = b[0].size();
    // check col whether valid
    if((aCol != bRow) || (bCol <= 0))
    {
        printf("aRow:%zu,aCol:%zu,bRow:%zu,bCol:%zu",aRow,aCol,bRow,bCol);
        return -1;
    }

    // set result size
    size_t cRow = aRow;
    size_t cCol = bCol;
    c.resize(cRow);
    for(auto &line : c)
    {
        line.resize(cCol);
    }

    // calculate result
    for(int i = 0; i < cRow; ++i)
    {
        for(int j = 0; j < cCol; ++j)
        {
            c[i][j] = 0;
            for(int k = 0; k < aCol; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return 0;
}

void printMatrix(const Matrix &a)
{
    size_t row = a.size();
    size_t col = 0;
    if(row == 0)
    {
        printf("row == 0,can't print!");
    }
    else
    {
        col = a[0].size();
    }
    printf("Matrix[%zux%zu]:\n",row,col);
    for(int i = 0; i < a.size(); ++i)
    {
        if(0 == i)
        {
            printf("[");
        }
        else
        {
            printf(" ");
        }
        for(int j = 0; j < a[i].size(); ++j)
        {
            printf("%f",a[i][j]);
            if(a[i].size() - 1 != j)
            {
                printf("\t");
            }
        }
        if(a.size() - 1 == i)
        {
            printf("]");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    printf("test begin!\n");
    Matrix a = {
        {1,0,0},
        {0,-1,0},
        {0,0,1},
    };
    Matrix b = {
        {1,0,0},
        {0,-1,5},
        {0,0,1},
    };
    Matrix c;
    printMatrix(a);
    printMatrix(b);
    multiMatrix(a,b,c);
    printMatrix(c);
    printf("test end!\n");
    return 0;
}
