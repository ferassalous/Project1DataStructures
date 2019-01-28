#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H


class SparseMatrix
{
    public:
        SparseMatrix();
        SparseMatrix(int n, int m, int cv, int noNSV);
        SparseMatrix* Transpose(); //Matrix Transpose;
        SparseMatrix* Multiply(SparseMatrix &M);
        SparseMatrix* Add(SparseMatrix& M);
        display(); //Display the SparseMatrix
        displayMatrix();; //display matrix in original format
        //other necessary methods.


    protected:
        int noRows; // Number of rows of Original Matrix
        int noCols; // number of columns of the original matrix
        int commonValue; // read from input
        int noNonSparseValues;
        SparseRow* myMatrix; //Array

    private:
};

#endif // SPARSEMATRIX_H
