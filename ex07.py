def prueba(s):
    d={"mayus":0, "minus":0}
    for c in s:
        if c.isupper():
           d["mayus"]+=1
        elif c.islower():
           d["minus"]+=1
        else:
           pass
    print ("Número de mayúsculas:  ", d["mayus"])
    print ("Número de minúsculas:" , d["minus"])

prueba(input(""))
