	
    vector <int> someVector;
    for (int i=100; i < 110; i++) someVector.push_back(i); 
	vector <int> secondVector = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    someVector.clear();
	cout << "vector is clear now: ";
	for (int val : someVector) cout << val << " ";
	cout << endl;
	
	someVector.swap(secondVector);
	for (int val : someVector) cout << val << " ";
	cout << endl;
	
	someVector.erase(someVector.begin() + 4);
	for (int val : someVector) cout << val << " ";
	cout << endl;
	
	someVector.erase(someVector.begin() + 2, someVector.begin() + 5);
	for (int val : someVector) cout << val << " ";
	cout << endl;
	
	someVector.insert(someVector.begin() + 2, 999);
	for (int val : someVector) cout << val << " ";
	cout << endl;