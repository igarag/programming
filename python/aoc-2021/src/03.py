"""
Exercise 3: Binary Diagnostic!
"""

import collections
from dataclasses import dataclass
from enum import Enum
from typing import List, Literal, Tuple

import numpy as np


def to_decimal(value):
    return int(value.dot(2**np.arange(value.size)[::-1]))

def generate_gamma_rate(matrix):
    """
    Create two 1D matrix. Contains the number of zeros 
    and ones counting in column direction. With that, it calculates
    when zero is greater than one and viceversa. With that, it generates
    the gamma_rate.
    """
    zero_rate = np.count_nonzero(matrix==0, axis=0)
    one_rate = np.count_nonzero(matrix==1, axis=0)
    gamma_rate = np.zeros(0, dtype=np.int8)
    for i, (zero, one) in enumerate(zip(zero_rate, one_rate)):
        if zero > one:
            gamma_rate = np.insert(gamma_rate, i, 0, axis=0)
        else:
            gamma_rate = np.insert(gamma_rate, i, 1, axis=0)
    return gamma_rate

def generate_epsilon_rate(gamma_rate):
    """
    Epsilon rate is the opposite of gamma_rate
    """
    return abs(1 - gamma_rate)

def get_power_consumption(a: int, b: int) -> int:
    return np.dot(to_decimal(a), to_decimal(b))

def read_input(file_name: str) -> list:
    data: List = []

    with open(file_name) as file:
        for item in file:
            code = item.replace("\n", "")
            data.append(code)
    return data

def create_matrix(data: list) -> np.ndarray:
    """
    Using numpy, concatenate each row into a matrix.
    """
    matrix = np.empty((0, len(data[0])), int)
    for row_code in data:
        value = np.array([[int(d) for d in str(row_code)]])
        matrix = np.append(matrix, value, axis=0)
    return matrix


def main():
    data = read_input("03.txt")
    matrix = create_matrix(data)

    gamma_rate = generate_gamma_rate(matrix)
    epsilon_rate = generate_epsilon_rate(gamma_rate)

    # Part A
    power_consumption = get_power_consumption(gamma_rate, epsilon_rate)
    print(f"Power consumption: {power_consumption}")

if __name__ == "__main__":
    main()

