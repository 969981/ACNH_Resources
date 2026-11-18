
undefined4 FUN_0349ee28(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  lVar2 = *(long *)(param_1 + 0x218);
  if (*(long *)(lVar2 + 0x570) != 0 && *(long *)(lVar2 + 0x570) == param_2) {
    return 0;
  }
  if (*(long *)(lVar2 + 0x578) != 0 && *(long *)(lVar2 + 0x578) == param_2) {
    return 1;
  }
  if ((*(long *)(lVar2 + 0x580) != 0) && (*(long *)(lVar2 + 0x580) == param_2)) {
    return 2;
  }
  if ((*(long *)(lVar2 + 0x588) != 0) && (*(long *)(lVar2 + 0x588) == param_2)) {
    return 3;
  }
  if ((*(long *)(lVar2 + 0x590) != 0) && (*(long *)(lVar2 + 0x590) == param_2)) {
    return 4;
  }
  if ((*(long *)(lVar2 + 0x598) != 0) && (*(long *)(lVar2 + 0x598) == param_2)) {
    return 5;
  }
  if ((*(long *)(lVar2 + 0x5a0) != 0) && (*(long *)(lVar2 + 0x5a0) == param_2)) {
    return 6;
  }
  if ((*(long *)(lVar2 + 0x5a8) != 0) && (*(long *)(lVar2 + 0x5a8) == param_2)) {
    return 7;
  }
  if ((*(long *)(lVar2 + 0x5b0) != 0) && (*(long *)(lVar2 + 0x5b0) == param_2)) {
    return 8;
  }
  if ((*(long *)(lVar2 + 0x5b8) != 0) && (*(long *)(lVar2 + 0x5b8) == param_2)) {
    return 9;
  }
  if ((*(long *)(lVar2 + 0x5c0) != 0) && (*(long *)(lVar2 + 0x5c0) == param_2)) {
    return 10;
  }
  if ((*(long *)(lVar2 + 0x5c8) != 0) && (*(long *)(lVar2 + 0x5c8) == param_2)) {
    return 0xb;
  }
  uVar1 = 0xc;
  if (*(long *)(lVar2 + 0x5d0) != param_2 || *(long *)(lVar2 + 0x5d0) == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

