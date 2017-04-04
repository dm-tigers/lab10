    AREA    |.text|, CODE, READONLY
    
    EXPORT  mystery

mystery
    push {r4-r7}
    SUB     r1, r0, #'A'
    CMP     r1, #'Z' - 'A'
    ADDLS   r0, r0, #'a' - 'A'
    pop {r4-r7}
    BX  R14
    END
