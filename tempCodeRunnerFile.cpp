sing begin() to print map
    for (auto it = mymap.begin();
         it != mymap.end(); ++it)
        cout << it->first << " = "
             << it->second << '\n';
    r