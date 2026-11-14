
void FUN_014e7014(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_04bbcf18;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar3 = PTR_DAT_04bbbc20;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  param_1[4] = (long)(puVar3 + 0x10);
  param_1[8] = (long)(puVar3 + 0x10);
  param_1[9] = 0;
  uVar1 = *(undefined4 *)PTR_DAT_04bb37e0;
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((long)param_1 + 100) = uVar2;
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = uVar1;
  puVar3 = PTR_DAT_04bbcf08;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x2a] = 0;
  param_1[0x1f] = (long)(param_1 + 0x21);
  param_1[0x12] = (long)(puVar3 + 0x10);
  param_1[0x20] = (long)(param_1 + 0x21);
  param_1[0x21] = (long)(param_1 + 0x24);
  param_1[0x24] = (long)(param_1 + 0x27);
  param_1[0x27] = (long)(param_1 + 0x2a);
  if (param_1 + 0x2d != (long *)0x0) {
    param_1[0x1e] = (long)(param_1 + 0x2d);
    *(undefined4 *)((long)param_1 + 0xec) = 4;
  }
  return;
}

