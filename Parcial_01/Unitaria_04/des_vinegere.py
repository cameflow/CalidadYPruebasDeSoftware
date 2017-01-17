text = "IONDVQY DZH QNTY KLQRY BVISEK TYHME JERWLF ZHV YEYOAEW RRBEI WEFZE FI HRGTY EYG UNTH SS GLC WLR COEGIEY TYDX V EEK KEIK HVDVQ OT JHIZY TF PI ZUSK VXEGNXH XUGT DHR FNOLOH SKAI VIRONX WLNZ DVDXU G NVFIFYAIB IAJ WZOP PUMV ZLRT IK ZMYR CFPI"
key = "GARDEN"
newText =""
cont = 0
for l in range(0,len(text)):
    if(text[l]!=" "):
        if (cont == len(key)):
            cont = 0
        c = ord(text[l]) - ord(key[cont])
        if(c<0):
            c = c+26
        c = c+65
        newText = newText + chr(c)
        cont = cont+1
    else:
        newText = newText + " "
print(newText)
