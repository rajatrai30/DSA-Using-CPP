# mystr = "billo" + "billi" + "manhus"*3
# print(mystr)

# a = (1,2,3,4)
# for i in range(len(a)):
#     print(a[i])

a = "hello boy how are"
n = len(a)
word1 = a.upper()
word2 = a.lower()
converted_w = ""
for i in range(n):
    if i%2==0:
        converted_w += word1
    else:
        converted_w += word2

print(converted_w)
