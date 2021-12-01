int minRunLength (int n){
    assert n >= 0;
    int r = 0; 
    while (n >= MIN_MERGE ) {
        r |= (n & 1);
        n >>= 1;
    }
    return n + r;
}