
ulong FUN_03b46270(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  while( true ) {
    if (*(int *)(param_1 + 0xc) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xc) == 7) {
      return 0;
    }
    if (*(int *)(param_1 + 0xc) != 8) break;
    if (*(long *)(param_1 + 0x1f0) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x48);
    plVar1 = &DAT_041e0200;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
    }
    param_1 = *plVar1;
    if (param_1 == 0) {
      return 0;
    }
    piVar2 = &DAT_041e0208;
    if (lVar6 != 0) {
      piVar2 = (int *)(lVar6 + 0x10);
    }
    if (*(int *)(param_1 + 0x10) != *piVar2) {
      return 0;
    }
  }
  lVar6 = *(long *)(param_1 + 0x120);
  if (*(int *)(lVar6 + 0x10) == 0) {
    return 0xffffffff;
  }
  lVar5 = *(long *)(lVar6 + 8);
  lVar3 = *(long *)(lVar5 + 0x38);
  if (DAT_05aebc00 != '\0') {
    lVar3 = lVar5 + 0x70;
  }
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x11) >> 5 & 1) != 0)) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x10) == 3) {
    return (ulong)(uint)(int)*(float *)(lVar6 + 0x24);
  }
  if (DAT_05aebc00 == '\0') {
    uVar4 = FUN_03b47678(lVar5 + 8);
    return uVar4;
  }
  if (*(char *)(lVar5 + 0x58) == '\0') {
    return 0;
  }
  if (*(long *)(lVar5 + 0x128) == 0) {
    return 0;
  }
  uVar4 = FUN_03b632bc();
  return uVar4;
}

