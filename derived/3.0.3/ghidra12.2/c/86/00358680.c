
undefined8 FUN_00358680(uint param_1)

{
  if ((param_1 & 0xffffff00) == 0x2000) {
    switch(param_1) {
    case 0x200b:
    case 0x200e:
    case 0x200f:
    case 0x202a:
    case 0x202b:
    case 0x202c:
    case 0x202d:
    case 0x202e:
    case 0x2060:
      return 0;
    }
    if (param_1 - 0x2066 < 4) {
      return 0;
    }
  }
  return 1;
}

