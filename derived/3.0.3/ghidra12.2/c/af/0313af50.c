
void FUN_0313af50(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  
  plVar6 = param_1 + 0x1c37;
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
  *param_1 = (long)&PTR_LAB_04b03ea8;
  param_1[0x47] = (long)&LAB_0313b250;
  param_1[0x3e] = -1;
  plVar4 = param_1 + 0x69;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = (long)param_1;
  param_1[0x48] = 0;
  param_1[0x45] = (long)&PTR_LAB_04b040d0;
  puVar1 = PTR_DAT_04bca0c8 + 0x10;
  param_1[0x49] = -1;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4a] = (long)puVar1;
  param_1[0x4d] = (long)(param_1 + 0x4f);
  for (lVar5 = 0x1f2; plVar4[-0x1a] = (long)(plVar4 + -0xd), lVar5 != 0; lVar5 = lVar5 + -2) {
    plVar4[-0xd] = (long)plVar4;
    plVar4 = plVar4 + 0x1a;
  }
  param_1[0x4e] = (long)(param_1 + 0x4f);
  param_1[0x19a6] = 0;
  if (param_1 + 0x19b3 != (long *)0x0) {
    param_1[0x4c] = (long)(param_1 + 0x19b3);
    param_1[0x4b] = 0x1f400000000;
  }
  memset(param_1 + 0x1ba7,0,0x480);
  FUN_035163e4(param_1 + 0x1ba7);
  FUN_00751ec0(plVar6,&DAT_05767938,&DAT_05767928,0);
  local_58 = 0;
  local_90 = local_90 & 0xffffffffffff0000;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *plVar6 = (long)(PTR_DAT_04bca0b0 + 0x10);
  pcStack_80 = "mLinkUniqueIdArray";
  puStack_70 = &DAT_04069761;
  pcStack_60 = "Min = 0, Max = 62";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_03513730(param_1 + 0x1c4f,&local_88,&local_90,plVar6);
  pcStack_80 = "mNpcIconOffset";
  local_58 = 0;
  local_90 = 0;
  puStack_70 = &DAT_040eb950;
  pcStack_60 = "Min = -400, Max = 800";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_03513a80(param_1 + 0x1db1,&local_88,&local_90,plVar6);
  param_1[0x1f44] = (long)(PTR_DAT_04bc9be0 + 0x10);
  plVar6 = param_1 + 0x1f45;
  memset(plVar6,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    FUN_03463544(plVar6,0);
    *(undefined4 *)(plVar6 + 0x2b) = 0x40;
    lVar5 = lVar5 + -1;
    *(undefined1 *)((long)plVar6 + 0x19b) = 0;
    *(undefined1 *)((long)plVar6 + 0x15c) = 0;
    *(undefined4 *)(plVar6 + 0x34) = 0;
    plVar6[0x29] = (long)puVar1;
    plVar6[0x2a] = (long)plVar6 + 0x15c;
    plVar6 = plVar6 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x572d) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x572e) = 0;
  *(undefined4 *)(param_1 + 0x572f) = 0;
  param_1[0x5730] = 0;
  param_1[0x572b] = (long)(puVar1 + 0x10);
  param_1[0x572c] = -1;
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
    param_1[0x43] = *(long *)(param_3 + 0x20);
  }
  return;
}

