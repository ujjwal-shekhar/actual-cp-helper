# The required python modules that we will need are imported
from numpy import number
import requests
from bs4 import BeautifulSoup
import collections
import os
collections.Callable = collections.abc.Callable

CF_contest_url = 'https://codeforces.com/contest/1675'
contest_url = str(CF_contest_url)
html_text = requests.get(CF_contest_url).text
cursor_object = BeautifulSoup(html_text,'html.parser')


# problem_dict = {'A','B','C','D','E','F','G','H','I','J'}
problem_list = []
count = 0
for table in cursor_object("select",{"name":"submittedProblemIndex"}):
    #print(type(table))
    #print(table)
    for table_rows in table:
        #print(table_rows)
        for table_data in table_rows:
            if(type(table_data) != type('str')):
                problem_letter = table_data.split()
                if(problem_letter[1]=='-'):
                    #print(problem_letter[0])
                    if (problem_letter[0] in problem_list):
                        break
                    problem_list.append(problem_letter[0])
# print(int((count-3)/2))
number_of_problems = int((count-3)/2)
# print(problem_list)
#print(url)
contest_index = contest_url.split('/')
contest_number = contest_index[4]
#print(contest_number)
#os.mkdir()
os.mkdir(contest_number)
os.chdir(contest_number)
current_directory = os.getcwd()
for problem_number in problem_list:
    folder_name = contest_number+problem_number
    #print(folder_name)
    os.mkdir(folder_name)
    os.chdir(folder_name)
    file = open(f"{folder_name}_brute_force.cpp","w")
    file = open(f"{folder_name}.cpp","w")
    file = open(f"{folder_name}_generator.cpp","w")
    #os.mkdir("test")
    os.chdir(current_directory)