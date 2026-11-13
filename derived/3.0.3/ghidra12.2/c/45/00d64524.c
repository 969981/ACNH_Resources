
void FUN_00d64524(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  *param_1 = (long)&PTR_LAB_04950c48;
  param_1[0x18] = (long)(puVar1 + 0x10);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = (long)param_1;
  param_1[0x1e] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2020;
  param_1[0x1d] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar3;
  puVar1 = puVar1 + 0x10;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)"PremiseLabel";
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = (long)"Label";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = (long)&DAT_0407ebb1;
  param_1[0x25] = (long)puVar1;
  param_1[0x26] = (long)"WithApplet";
  puVar2 = PTR_DAT_04bb6568;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar3 = param_1[0x17];
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = lVar3;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x28] = (long)param_1;
  param_1[0x29] = (long)(puVar2 + 0x10);
  param_1[0x2a] = (long)puVar1;
  param_1[0x2b] = (long)"UseCache";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x29;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x36] = 0;
  param_1[0x2e] = (long)(puVar1 + 0x10);
  param_1[0x2f] = 0xffffffff;
  nn::account::AsyncContext::AsyncContext((AsyncContext *)(param_1 + 0x3a));
  param_1[0x3e] = (long)(PTR_DAT_04bb2d80 + 0x10);
  return;
}

