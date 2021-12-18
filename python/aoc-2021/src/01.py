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

def get_all_ints(text):
    return [int(x) for x in re.findall(r'-?\d+', text)]

def main():
    with open("01.txt") as f:
        lines = get_all_ints(f.read())

    compute_depth(lines)
  
if __name__ == "__main__":
    main()
