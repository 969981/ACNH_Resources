
void FUN_03c5cce8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  param_1[3] = PTR_DAT_04bb2020 + 0x10;
  *param_1 = &PTR_FUN_04b81ba0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  param_1[4] = &DAT_0419b684;
  FUN_03c5a110(param_1 + 3,param_2,0xffffffff,0);
  puVar1 = param_1 + 0x12;
  param_1[8] = param_1 + 7;
  param_1[9] = 0x800000000;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0x12] = puVar1;
  param_1[10] = uVar3;
  param_1[0xb] = 0;
  param_1[0x10] = param_1 + 0xf;
  param_1[0x11] = 0x800000000;
  param_1[0xe] = 0x800000000;
  param_1[0xf] = param_1 + 0xf;
  param_1[0x13] = puVar1;
  param_1[0x14] = 0;
  FUN_03c5e590(param_1 + 0x15,PTR_PTR_04bb2238,0);
  plVar2 = (long *)((long)*(int *)((long)param_1 + 0xa4) + (long)(param_1 + 0x15));
  lVar4 = param_1[0x12];
  param_1[0x12] = plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)puVar1;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x1e] = param_1 + 0x1e;
  param_1[0x1f] = param_1 + 0x1e;
  param_1[0x2c] = 0x800000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  param_1[0x22] = param_1 + 0x21;
  param_1[0x23] = 0x2000000000;
  param_1[0x20] = 0x2000000000;
  param_1[0x21] = param_1 + 0x21;
  param_1[0x24] = param_1 + 0x24;
  param_1[0x25] = param_1 + 0x24;
  param_1[0x28] = param_1 + 0x27;
  param_1[0x29] = 0x2000000000;
  param_1[0x26] = 0x2000000000;
  param_1[0x27] = param_1 + 0x27;
  param_1[0x2a] = param_1 + 0x2a;
  param_1[0x2b] = param_1 + 0x2a;
  param_1[0x2f] = param_1 + 0x2f;
  param_1[0x30] = param_1 + 0x2f;
  *(undefined4 *)((long)param_1 + 0x18c) = 8;
  param_1[0x32] = param_1 + 0x32;
  param_1[0x33] = param_1 + 0x32;
  param_1[0x34] = 0xa000000000;
  return;
}

