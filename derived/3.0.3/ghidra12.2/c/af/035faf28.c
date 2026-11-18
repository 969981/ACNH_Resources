
void FUN_035faf28(char *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = ((ulong)param_2 & 0xf000) >> 0xc;
  if ((*(ushort *)(param_1 + uVar1 * 2 + 0x1c0) & 0xff) != 0) {
    FUN_035fb064();
    return;
  }
  if ((int)(((ulong)param_2 & 0xffff) >> 0xc) == 0xf) {
    if (((param_2 ^ 0xffffffff) & 0xffff) == 0) {
      FUN_035fb064();
      return;
    }
    if (0x1fe < (param_2 >> 7 & 0x1ff)) {
      FUN_035fb064();
      return;
    }
    if ((param_2 >> 8 & 0xff) < 0xff) {
      FUN_035fb064();
      return;
    }
    FUN_035fb064();
    return;
  }
  switch(uVar1) {
  case 0:
    if (((((param_2 - 0x200 & 0xffff) < 0x700) && (*param_1 == '\0')) &&
        (*(long *)(param_1 + 0x40) != 0)) || (((param_2 & 0xffff) < 0x100 && (*param_1 == '\0'))))
    break;
  default:
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    break;
  case 10:
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
  }
  FUN_035fb064();
  return;
}

