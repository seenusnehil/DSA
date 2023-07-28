int cnt = 0;
    vector<int> temp;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) cnt++;

        else {
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<cnt;i++) {
        temp.push_back(0);
    }