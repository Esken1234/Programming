import json

with open("in.json", "r") as read_file:
    data = json.load(read_file)
print(data["1"])


stop=input()#это для того, чтобы программа останавливалась