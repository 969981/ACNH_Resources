
void FUN_02f25e38(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_38;
  undefined4 local_14;
  
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
  *(undefined4 *)(param_1 + 0x45) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  param_1[0x3e] = -1;
  param_1[0x44] = -1;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *param_1 = (long)&PTR_LAB_04ae1dd8;
  param_1[0x43] = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "MapMini_RVer_10300";
  local_78 = puVar1;
  FUN_00751ec0(param_1 + 0x48,&DAT_056ba290,&local_78,0);
  pcStack_60 = "mIconLimitPos";
  local_38 = 0;
  local_14 = 0;
  param_1[0x48] = (long)(PTR_DAT_04bc7438 + 0x10);
  puStack_50 = &DAT_040a2556;
  pcStack_40 = "Min = -800, Max = 800";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_02f14d24(param_1 + 0x60,&local_68,&local_14,param_1 + 0x48);
  param_1[0x87] = (long)puVar1;
  param_1[0x88] = (long)local_70;
  return;
}

