    //factorial 
    int i, n, factorial;
    cout << "Enter the number whose factorial you want to find\n";
    cin >> n;
    i = 1;
    factorial = 1;
    while(i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    cout << "Factorial is " << factorial;
    
    
