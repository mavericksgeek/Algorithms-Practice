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
    
    // Check number is prime or not
    int i, flag, n;
    cout << "Enter the number\n";
    cin >> n;
    flag = 1; 
    i = 2;
    while (i != (n/2))
    {
        if ((n % i) == 0)
        {
            flag = 0;
            
        }
        i++;
    }
     if (flag == 0)
        {
            cout <<"Number is not prime";
        }
        else
        {
            cout << "Number is prime";
        }


 // Fibonacci Series
 int terms, fib, fst, sec, temp;
 
 cout << "Enter the number of terms of fib series you wish for\n";
 cin >> terms;
 fst = 0; 
 sec = 1;
 if (terms >= 2)
 {
     cout << fst << ", " << sec;
     terms = terms - 2;
 }

    while(terms != 0)
     {
         fib = fst + sec;
         cout << ", " << fib;
         fst = sec;
         sec = fib;
         terms--;
     }
