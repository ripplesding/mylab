# mylab
labs I prefer
## csapp
### datalab
> logicNeg

  logicNeg(0b11)=0  return 0 if exists 1
  logicNeg(0b00)=1  return 1 if all zero
  what is all zero 
  a            0b0000 0000 0000 0000
  ~a           0b1111 1111 1111 1111
 a|(~a)        0b1111 1111 1111 1111
 a^(a|(~a))    0b1111 1111 1111 1111

  a            0b1111 1111 1111 1111
  ~a           0b0000 0000 0000 0000
 a|(~a)        0b1111 1111 1111 1111
 a^(a|(~a))    0b0000 0000 0000 0000

  a            0b1111 1111 0000 1111
  ~a           0b0000 0000 1111 0000
 a|(~a)        0b1111 1111 1111 1111
 a^(a|(~a))    0b0000 0000 1111 0000

 a number is zero when ((a^(a|(~a)))>>31)&0x1 == 1 && (((a^(a|(~a)))+1)>>31)&0x1 == 0
 
  int temp = a^(a|(~a));
  return 1 -((1-((temp>>31)&0x1))|(((temp+1)>>31)&0x1));

  
## coreutils

## mit6.824
