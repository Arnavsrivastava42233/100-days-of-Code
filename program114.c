//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating 
//characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    
    if (fgets(s, sizeof(s), stdin) != NULL) 
	{
        s[strcspn(s, "\r\n")] = 0;
        
        int n = strlen(s);
        int max_len = 0;
        int left = 0;
        
        int freq[256] = {0};
        
        for (int right = 0; right < n; right++) 
		{
            unsigned char current_char = s[right];
            
            while (freq[current_char] > 0) 
			{
                freq[(unsigned char)s[left]]--;
                left++;
            }
            
            freq[current_char]++;
            
            int current_len = right - left + 1;
            if (current_len > max_len) 
			{
                max_len = current_len;
            }
        }
        
        // Print the final result
        printf("%d\n", max_len);
    }
    
    return 0;
} 