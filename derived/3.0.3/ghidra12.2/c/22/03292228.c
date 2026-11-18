
void FUN_03292228(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[4];
  puVar1 = (undefined1 *)0x0;
  if (lVar4 != 0) {
    puVar1 = &LAB_032926f8;
  }
  if (puVar1 != (undefined1 *)0x0) {
    if (*(long *)(DAT_0572b998 + 0x3b0) == lVar4) {
      FUN_032af260(DAT_0572b998,1);
    }
    if (*(long *)(DAT_0572b998 + 0x3a8) == lVar4) {
      FUN_032af260(DAT_0572b998,0);
      lVar3 = *param_1;
      lVar4 = DAT_0572ba48;
      goto joined_r0x0329230c;
    }
  }
  lVar3 = *param_1;
  lVar4 = DAT_0572ba48;
joined_r0x0329230c:
  DAT_0572ba48 = lVar4;
  if (lVar3 != 0) {
    lVar3 = param_1[1];
    lVar2 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long **)(lVar4 + 8) == param_1) {
      *(long *)(lVar4 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    FUN_0328fad0(lVar4);
    if ((*(uint *)((long)param_1 + 0x2c) & 1) == 0) {
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      *(byte *)(lVar4 + 0xd4) = *(byte *)(lVar4 + 0xd4) & 0xfd;
    }
  }
  return;
}

