
uint FUN_00360b10(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (0x1b < (int)param_2) {
    return 0xff;
  }
  uVar1 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar1 = (int)uVar1 >> 2;
  if (uVar1 < 2) {
    uVar2 = param_2 & 3;
    if (-1 < (int)-param_2) {
      uVar2 = -(-param_2 & 3);
    }
    switch(uVar2) {
    case 0:
      return (uint)*(byte *)(param_1 + (ulong)uVar1 * 4 + 8);
    case 1:
      return (uint)*(byte *)(param_1 + (ulong)uVar1 * 4 + 9);
    case 2:
      return (uint)*(byte *)(param_1 + (ulong)uVar1 * 4 + 10);
    case 3:
      return (uint)*(byte *)(param_1 + (ulong)uVar1 * 4 + 0xb);
    }
  }
  else {
    if (6 < uVar1) {
      return 0xff;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    if ((uVar2 >> 0x10 & 1) == 0) {
      if ((uVar2 >> 0x11 & 1) == 0) {
        return 0xff;
      }
      param_2 = param_2 + uVar1 * -4;
      if (param_2 < 4) {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x18) +
                          (((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) |
                          (ulong)(uVar2 >> 6) & 8) +
                          ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) +
                          ((ulong)(uVar2 >> 0xc) & 8) + (ulong)(-(uVar2 >> 0xc & 1) & 0xc) +
                          ((ulong)(uVar2 >> 0xc) & 0x10) * ((ulong)(uVar2 >> 6) & 7) +
                          (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 +
                          (ulong)((uVar1 - 2) % 5) * 4 + 0x60);
        switch(param_2) {
        case 0:
          return uVar1 & 0xff;
        case 1:
          return uVar1 >> 8 & 0xff;
        case 2:
          return uVar1 >> 0x10 & 0xff;
        case 3:
          return uVar1 >> 0x18;
        }
      }
    }
    else {
      uVar2 = FUN_00360d70(param_1,uVar1 - 2);
      uVar1 = param_2 & 3;
      if (-1 < (int)-param_2) {
        uVar1 = -(-param_2 & 3);
      }
      switch(uVar1) {
      case 0:
        return uVar2 & 0xff;
      case 1:
        return uVar2 >> 8 & 0xff;
      case 2:
        return uVar2 >> 0x10 & 0xff;
      case 3:
        return uVar2 >> 0x18;
      }
    }
  }
  return 0;
}

