#File Objects
with open('bronx.jpg','rb') as rf:
    with open('bronx_copy.jpg', 'wb') as wf:
        chunk_size = 4096
        rf_chuck = rf.read(chunk_size)
        while len(rf_chuck) > 0:
            wf.writw(rf_chuck)
            rf_chuck = rf.read(chunk_size)