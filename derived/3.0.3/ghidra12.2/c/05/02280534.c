
undefined4 FUN_02280534(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  uVar2 = 4;
  switch(*(undefined4 *)(lVar1 + 8)) {
  case 0:
    if ((*(byte *)(param_1 + 0x29f) & 1) == 0) {
      return 1;
    }
    *(byte *)(param_1 + 0x29f) = *(byte *)(param_1 + 0x29f) & 0xfe;
    goto LAB_0228063c;
  case 1:
    if (((*(byte *)(param_1 + 0x29c) >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0x29c) >> 4 & 1) != 0)
       ) {
      return 2;
    }
LAB_0228063c:
    uVar2 = 3;
    break;
  case 2:
    uVar2 = 6;
    if (*(int *)(lVar1 + 0xc) != 0) {
      uVar2 = 7;
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 0x29c) >> 6 & 1) != 0) {
      return 8;
    }
  case 4:
    uVar2 = 9;
    break;
  case 5:
  case 6:
    uVar2 = 10;
    break;
  case 7:
    uVar2 = 5;
    break;
  case 8:
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}

