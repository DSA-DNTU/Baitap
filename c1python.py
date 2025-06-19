def insert_element(arr, length, x, pos):
    # Dịch các phần tử sang phải từ vị trí pos
    arr.insert(pos, x)
    length += 1
    return arr, length

def begin_array(n):
    return [i for i in range(n)]

def export_array(arr, length):
    for i in range(length):
        print(f"a[{i}] = {arr[i]}")

def main():
    while True:
        n = int(input("Please enter n: "))
        arr = begin_array(n)

        length = int(input("Please enter current length: "))
        x = int(input("Enter value to insert (x): "))
        pos = int(input("Enter position to insert at (pos): "))

        print("Array before insert:")
        export_array(arr, length)

        if pos < 0 or pos > length:
            print("Invalid position!")
        else:
            arr, length = insert_element(arr, length, x, pos)
            print("Array after insert:")
            export_array(arr, length)

        tieptuc = input("\nDo you want to continue? (y/n): ")
        if tieptuc.lower() != 'y':
            break

if __name__ == "__main__":
    main()