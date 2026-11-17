
void FUN_031d0a30(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  
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
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_FUN_04b0b4f0;
  uVar3 = DAT_05718ef8;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)((long)param_1 + 0x254) = uVar3;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  param_1[0x4b] = (long)puVar1;
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x4c,0);
    *(undefined4 *)(plVar6 + 0x77) = 0x40;
    lVar5 = lVar5 + -1;
    plVar6[0x76] = (long)plVar6 + 0x3bc;
    *(undefined1 *)((long)plVar6 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar6 + 0x3bc) = 0;
    plVar6[0x75] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x80) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar6 = plVar6 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  param_1[0x3837] = 0;
  param_1[0x3838] = -1;
  *(undefined4 *)(param_1 + 0x3839) = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x3832] = (long)(puVar2 + 0x10);
  param_1[0x3833] = -1;
  *(undefined8 *)((long)param_1 + 0x1c1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1d4) = 0;
  return;
}

