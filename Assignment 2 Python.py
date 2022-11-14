#!/usr/bin/env python
# coding: utf-8

# In[11]:


numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]
people = [
  {'name': 'Hal', 'age': 20 }, {'name': 'Susann', 'age': 31 },  {'name': 'Dwight', 'age': 19 }, {'name': 'Kassandra', 'age': 21 },
     {'name': 'Lawrence', 'age': 25 }, {'name': 'Cindy', 'age': 22 }, {'name': 'Cory', 'age': 27 }, {'name': 'Mac', 'age': 19 },
     {'name': 'Romana', 'age': 27 }, {'name': 'Doretha', 'age': 32 }, {'name': 'Danna', 'age': 20 }, {'name': 'Zara', 'age': 23 },
     {'name': 'Zara', 'age': 26 }, {'name': 'Rosalyn', 'age': 26 }, {'name': 'Risa', 'age': 24 }, {'name': 'Benny', 'age': 28 },
    {'name': 'Juan', 'age': 33 }, {'name': 'Natalie', 'age': 25 }
]
def name(e):
  return e['name']
def age(e):
  return e['age']

numbers.sort()
print(numbers)
people.sort(key = name)
people.sort(reverse = True,key = age)
print(people)


# In[ ]:




