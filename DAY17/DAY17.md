origin_matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

reverse_matrix = list(map(list, zip(*origin_matrix)))

rotate_90_clock_wise = list(zip(*origin_matrix[::-1]))

rotate_90_counter_wise = list(zip(*origin_matrix))[::-1]

rotate_180_counter_wise = list(zip(*rotate_90_clock_wise[::-1]))

print(rotate_180_counter_wise)

전치, 회전
