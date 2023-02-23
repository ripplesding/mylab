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

> howManyBits
  
  return minmum number of bits required to represent x
  howMantBits(12) = howMantBits(0b01100) = 5
  howMantBits(298) = howMantBits(256+32+8+2) = howMantBits(0b0100000000)=10
  howMantBits(-5) = howMantBits(0b1011) = 4
  howMantBits(0) = howMantBits(0b0) = 1
  howMantBits(-1) = howMantBits(0b1) = 1
  howMantBits(0x80000000) = 32

  if num > 0   1+ high(num)
  if num = 0   0
  if num < 0   high(abs(num))
  
  compute high(x)
  find high 1 position of (x>>31)^x

> folatScale2
  
  return bit-level equivalent expression of 2*f

  get exponent -> add 1
  
  0b0000 0000 1000 0000 0000 0000 0000 0000  
  0x00800000
  
    
  
## coreutils

## mit6.824
