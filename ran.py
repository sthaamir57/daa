import random

NUM_NUMBERS = 10000

with open("search.txt", "w") as f:
    for i in range(NUM_NUMBERS):
        f.write(str(random.randint(0, 99999)) + "\n")
