
long FUN_03608864(long param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0xc) != '\x01') {
    return 200000;
  }
  if ((((*(byte *)(param_1 + 9) & 0x83) == 0x81) ||
      ((*(byte *)(*(long *)(param_1 + 0x1968) + 9) & 0x83) == 0x81)) ||
     (*(char *)(param_1 + -0x25a5) != '\0')) {
    bVar2 = false;
  }
  else if (*(char *)(param_1 + -0x25a6) == '\0') {
    bVar2 = (*(byte *)(param_1 + -0x177d) & 4) == 0;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xe) != '\0';
  }
  bVar1 = *(byte *)(param_1 + 10);
  if (((*(byte *)(param_1 + 9) ^ 0xff) & 0x81) == 0) {
    uVar3 = FUN_036086e4();
  }
  else {
    lVar5 = *(long *)(param_1 + 0x1968);
    if (((*(byte *)(lVar5 + 9) ^ 0xff) & 0x81) == 0) {
      uVar3 = FUN_036086e4(lVar5);
    }
    else {
      uVar3 = FUN_036086e4();
      uVar4 = FUN_036086e4(lVar5);
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
    }
  }
  lVar5 = 4;
  if (!bVar2) {
    lVar5 = 9;
  }
  return uVar3 + (7 - (ulong)bVar1 << lVar5);
}

