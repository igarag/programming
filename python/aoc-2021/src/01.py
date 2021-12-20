"""
Exercise 1: Sonar Sweep
"""
import re

def compute_depth(data: list) -> None:
    counter: int = 0
    for idx, measure in enumerate(data):
        if idx == 0 or idx == len(data):
            prev = measure
            continue
        if measure > prev:
            counter += 1
        prev = measure
    print(f"Total increased measures: {counter}")

def main():

    data = list()
    with open("01.txt") as file:
        for item in file:
            data.append(int(item.strip("\n")))

    compute_depth(data)
  
if __name__ == "__main__":
    main()
