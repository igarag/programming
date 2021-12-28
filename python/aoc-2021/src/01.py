"""
Exercise 1: Sonar Sweep
"""

def solve_hard(data: list) -> None:
    counter: int = 0
    for idx in range(3, len(data)):
        a = data[idx-1] + data[idx-2] + data[idx-3]
        b = data[idx] + data[idx-1] + data[idx-2]
        if b > a:
            counter += 1
    print(f"Part B: Total Measures (3-measure sliding window): {counter}")


def solve(data: list) -> None:
    counter: int = 0
    for idx in range(1, len(data)):
        if data[idx] > data[idx-1]:
            counter += 1
    print(f"Part A: Total measures: {counter}")


def read_data(file_path: str) -> list:
    data = list()
    with open(file_path) as file:
        for item in file:
            code = int(item.replace("\n", ""))
            data.append(code)
    return data


def main():

    file_name = "01.txt"
    data = read_data(file_name)

    solve(data)
    solve_hard(data)


if __name__ == "__main__":
    main()

