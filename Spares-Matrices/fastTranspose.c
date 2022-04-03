void fastTranspose(term a[], term b[])
{
    int rowTerm[MAX_COL], startingPos[MAX_COL];
    int i, j, numCols = a[0].col, numTerms = a[0].value;
    b[0].row = numCols;
    b[0].col = a[0].row;
    b[0].value = numTerms;
    
    if(numTerms > 0)
    {
        for( i = 0; i < numCols; i++)
            rowTerms[i] = 0;
        for( i = 1; i < numTerms; i++)
            rowTerms[a[i].col]++
        startingPos[0] = 1;
        for( i = 1; i < numCols; i++)
            startingPos[i] = 
                        startingPos[i-1] + rowTerms[i-1];
        for( i = 1; i <= numTerms; i++)
        {
            j = startingPos[a[i].col]++;
            b[j].row = a[i].col;
            b[j].col = a[i].row;
            b[j].value = a[i].value;
        }
    }
}
