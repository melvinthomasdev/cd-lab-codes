st = input("Enter expression: ")
explist = st.split()
tmplist = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
# global tmp_idx
tmp_idx=0
ic = []

# def handle_ops(operand):
#     # global tmp_idx
#     idx = explist.index(operand)
#     ic.append(str(tmplist.pop()) + " = " +str(explist[idx-1]) + operand + str(explist[idx+1]))
#     explist.pop(idx-1)
#     explist.pop(idx-1)
#     explist.pop(idx-1)
#     explist.insert(idx-1, tmplist[tmp_idx])
#     # tmp_idx += 1

while len(explist)>0:
    tmp_idx += 1
    if "*" in explist:
        operand = "*"
        idx = explist.index(operand)
        ic.append(str(tmplist.pop()) + " = " +str(explist[idx-1]) + operand + str(explist[idx+1]))
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.insert(idx-1, tmplist[tmp_idx])
        tmp_idx += 1
    elif "/" in explist:
        operand = "/"
        idx = explist.index(operand)
        ic.append(str(tmplist.pop()) + " = " +str(explist[idx-1]) + operand + str(explist[idx+1]))
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.insert(idx-1, tmplist[tmp_idx])
        tmp_idx += 1
    elif "+" in explist:
        operand = "+"
        idx = explist.index(operand)
        ic.append(str(tmplist.pop()) + " = " +str(explist[idx-1]) + operand + str(explist[idx+1]))
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.insert(idx-1, tmplist[tmp_idx])
        tmp_idx += 1
    elif "-" in explist:
        operand = "-"
        idx = explist.index(operand)
        ic.append(str(tmplist.pop()) + " = " +str(explist[idx-1]) + operand + str(explist[idx+1]))
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.pop(idx-1)
        explist.insert(idx-1, tmplist[tmp_idx])
        tmp_idx += 1

print(explist)
print(ic)


