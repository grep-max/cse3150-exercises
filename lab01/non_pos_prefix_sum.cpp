bool non_pos_prefix_sum(int lst[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
    if (lst[i]!= -1 & lst[i] != 1){
        throw("Error: not a list of -1 and +1");
    }
    sum+=lst[i]; 
    if (sum > 0) return false;
    }
    return true;
}