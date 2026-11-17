
void FUN_02e44228(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  if (*(int *)(param_1 + 0x310) != 0) {
    return;
  }
  bVar3 = *param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x70) = bVar3;
  if (*(long *)(param_1 + 0x80) != 0) {
    *(byte *)(*(long *)(param_1 + 0x80) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0x88) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0x90) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0x98) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0xa0) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0xa8) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0xb0) + 0x50) = bVar3;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0xb8) + 0x50) = bVar3;
  }
  lVar2 = *DAT_0537d558;
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x508) == 0)) || (*(char *)(lVar2 + 0x55d) == '\0')) {
    iVar1 = (uint)(*(int *)(DAT_04cd19d8 + 0x15c) == 1) << 1;
  }
  else {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x2ac) = iVar1;
  FUN_03ebb160(param_1 + 8,2);
  return;
}

