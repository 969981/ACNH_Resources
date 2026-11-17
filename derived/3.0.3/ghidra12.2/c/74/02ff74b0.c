
void FUN_02ff74b0(undefined8 *param_1,short *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float local_16f0;
  float fStack_16ec;
  float local_16e8;
  float fStack_16e4;
  undefined1 auStack_16e0 [5792];
  undefined1 auStack_22 [2];
  
  if (*param_2 != *(short *)PTR_DAT_04bb3170) {
    FUN_007ef010(auStack_22);
    FUN_007e4920(auStack_16e0,auStack_22);
    uVar2 = 0;
    puVar3 = param_1;
    do {
      uVar1 = FUN_007e73e0(auStack_16e0,uVar2 & 0xffffffff);
      local_16f0 = (float)(uVar1 >> 0x18) / 255.0;
      fStack_16ec = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
      local_16e8 = (float)(uVar1 >> 8 & 0xff) / 255.0;
      fStack_16e4 = (float)(uVar1 & 0xff) / 255.0;
      FUN_02ff7de0(&local_16f0,puVar3);
      uVar2 = uVar2 + 1;
      puVar3[0x20] = *puVar3;
      puVar3[0x21] = puVar3[1];
      puVar3 = puVar3 + 2;
    } while (uVar2 != 0xf);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  return;
}

