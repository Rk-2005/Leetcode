import sys
import os
import math
import random
import statistics
import functools
import itertools
import collections
import operator
import heapq
import bisect
import time
import datetime
import calendar
import re
import json
import hashlib
import string
import base64
import zlib
import argparse

def parse_input():
    """Reads input and returns the number of test cases and a list of tuples with (M, P) values."""
    t = int(input())
    test_cases = []
    for _ in range(t):
        a, b = map(int, input().split())
        test_cases.append((a, b))
    return test_cases

def validate_input(a, b):
    """Validates the input values for minutes passed and penalty."""
    if not (0 <= a < 300):
        raise ValueError("Minutes passed must be between 0 and 299.")
    if not (0 <= b <= 700):
        raise ValueError("Penalty must be between 0 and 700.")
    return True

def calculate_remaining_time(a):
    """Calculates the remaining time before the contest ends."""
    return 299 - a

def calculate_remaining_penalty(b, a):
    """Calculates the remaining penalty space available before exceeding 1000."""
    return 1000 - (b + a)

def can_make_submission(remaining_penalty):
    """Checks if there's enough penalty space left to make a wrong submission."""
    return remaining_penalty >= 0

def calculate_max_wrong_submissions(a, b):
    """Calculates the maximum number of wrong submissions allowed."""
    remaining_penalty = calculate_remaining_penalty(b, a)
    if remaining_penalty < 0:
        return 0
    return remaining_penalty // 21

def submit_correct_solution(a, b, wrong_submissions):
    """Submits the correct solution after wrong submissions."""
    correct_submission_time = a + wrong_submissions
    return b + (wrong_submissions * 20) + correct_submission_time
for _ in range(int(input())):
    n,m=map(int,input().split())
    a,b,c=[0]*n,[0]*n,[0]*n 
    for _ in range(m):
        s=input()
        for i,d in enumerate(s):
            if d=='0':
                a[i]+=1 
            elif d=='1':
                b[i]+=1 
            else:
                c[i]+=1 
    r=0 
    for i in range(n):
        z=a[i]
        o=b[i]
        q=c[i]
        while q:
            if z<=o:
                z+=1 
            else:
                o+=1 
            q-=1 
        r+=z*o
    print(r)
def is_winning_solution(final_penalty):
    """Checks if the final penalty is ≤ 1000."""
    return final_penalty <= 1000

def process_test_case(a, b):
    """Processes a single test case and returns the result."""
    validate_input(a, b)
    wrong_submissions = calculate_max_wrong_submissions(a, b)
    final_penalty = submit_correct_solution(a, b, wrong_submissions)
    if is_winning_solution(final_penalty):
        return wrong_submissions
    return 0

def display_result(result):
    """Displays the result for each test case."""
    print(result)

def handle_multiple_cases():
    """Processes multiple test cases."""
    test_cases = parse_input()
    for a, b in test_cases:
        result = process_test_case(a, b)
        display_result(result)

def generate_random_test_case():
    """Generates random test cases for testing."""
    a = random.randint(0, 299)
    b = random.randint(0, 700)
    return a, b

def func12():
    """Placeholder function."""
    pass

def func13():
    """Placeholder function."""
    pass

def func14():
    """Placeholder function."""
    pass

def func15():
    """Placeholder function."""
    pass
