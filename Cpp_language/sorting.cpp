 #include<bits/stdc++.h>
using namespace std;


// Selectionsort => Take minimum put it in the place
void selectionsort(int arr[],int size){
	for (int i=0;i<size-1;i++){
		int minidx = i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[minidx]){
				minidx = i;
			}
		swap(arr[minidx],arr[i]);
		}
	}	

}

// Bubblesort => Take maximum put it in the place
void bubblesort(int arr[],int n){
	bool swapped = false;
	for (int i =0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
        	break;
        }
    }
}

// insertionSort =>One part will be sorted other will be unsorted
// Used when Array is partially sorted for bettter performance.
void insertionSort(int n, vector<int> &arr){
   for(int i =1;i<n;i++){
       int temp= arr[i];
       int j = i-1;
       while(j>=0){
           if(arr[j]>temp){
               arr[j+1] = arr[j];            
       }
       else{
           break;
       }
       j--;
   }
   arr[j+1] = temp;
}
}



 unordered_map< char, int >mp;    //Use hashmap to store the frequencies of all the characters present in string s1.
        for(auto it : s1){
            mp[it]++;
        }
        int count = mp.size();         //Use the count variable to see if all of the characters in the map have the same frequency, indicating that an anagram has been found.
        int i = 0, j = 0;
        int k = s1.size();             //Window Size
        while(j < s2.size()){
            if(mp.find(s2[j]) != mp.end()){      //If a character is found that already exists in the map, reduce its frequency by one.
                mp[s2[j]]--;
                if(mp[s2[j]] == 0){     //If the frequency of a specific character on the map is 0, it means that all occurrences of that character is found inside the current window size.
                    count--;
                }
            }
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
				if(count == 0){    //Anagram found 
					return true;  
				}
                if(mp.find(s2[i]) != mp.end()){  //Check if that character is present in the map while sliding the window, then increase its frequency by one, as we decreased its frequency when we first met it while crossing the window.
                    mp[s2[i]]++;
                    if(mp[s2[i]] == 1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;