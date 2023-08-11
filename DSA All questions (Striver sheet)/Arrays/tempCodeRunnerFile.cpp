for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if(i%(m-1) == 0) {
                temp[i][j] = arr[(i+2)%(m-1)][j];
            }
            else temp[i][j] = arr[i+2][j];
        }
    }