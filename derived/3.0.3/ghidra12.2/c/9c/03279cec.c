
void FUN_03279cec(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 local_b8;
  undefined **local_b0;
  undefined *puStack_a8;
  char *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar3 = *(byte *)(param_3 + 0xe);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar3;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  puVar1 = PTR_DAT_04bdf1d8;
  *param_1 = (long)&PTR_LAB_04b17070;
  param_1[0x3e] = -1;
  param_1[0x46] = (long)(puVar1 + 0x10);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x7fc000007fc00000;
  param_1[0x4b] = 0x7fc000007fc00000;
  puStack_a8 = PTR_DAT_04bb2020 + 0x10;
  local_40 = PTR_DAT_04bb2120;
  uStack_38 = 0;
  local_50 = PTR_DAT_04bb2120;
  local_60 = PTR_DAT_04bb3cd8 + 0x10;
  local_30 = 1;
  local_28 = 0;
  local_b8 = (uint)local_b8._2_2_ << 0x10;
  local_90 = PTR_DAT_04bb2120;
  local_80 = PTR_DAT_04bb2120;
  local_b0 = &local_60;
  local_70 = "SimpleObject";
  uStack_68 = 0;
  local_a0 = "UI_Camera";
  puStack_98 = puStack_a8;
  puStack_88 = puStack_a8;
  puStack_78 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  FUN_038387b8(param_1 + 0x44,&local_b8);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return;
}

