#!/usr/bin/python3
"""import os
def search_word_in_files(word, files):
    for file in files:
        with open(file, 'r') as f:
            for line_no, line in enumerate(f, 1):
                if word in line:
                    print(f'{file}:{line_no}:{line.strip()}')
                    
# Example usage
word_to_find = 'queue_node'
list_of_files = ["*.c"]
search_word_in_files(word_to_find, list_of_files)
"""
import glob

def search_word_in_files(word, file_pattern):
    files = glob.glob(file_pattern)
    for file in files:
        with open(file, 'r') as f:
            for line_no, line in enumerate(f, 1):
                if word in line:
                    print(f'{file}:{line_no}:{line.strip()}')

# Example usage
word_to_find = 'isascii'
file_pattern = '*.c'
search_word_in_files(word_to_find, file_pattern)
