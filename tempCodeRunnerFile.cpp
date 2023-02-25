nt main(){
    vector<int> lol{9};
    lol.resize(2);
    for(int i=lol.size();i>0;i--){
        lol[i]=lol[i-1];
    }
    lol[0]=1;
    for(auto x : lol){
        cout<< x << " ";
    }
    cout<<lol.size();
}