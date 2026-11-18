
void FUN_034f7e10(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  
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
    bVar5 = *(byte *)(param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  puVar2 = PTR_DAT_04bc9ca8;
  param_1[0x42] = 0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *param_1 = (long)&PTR_LAB_04b32de0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x3e] = -1;
  param_1[0x47] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x4c,0);
    *(undefined4 *)(plVar6 + 0x77) = 0x40;
    lVar7 = lVar7 + -1;
    plVar6[0x76] = (long)plVar6 + 0x3bc;
    *(undefined1 *)((long)plVar6 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar6 + 0x3bc) = 0;
    plVar6[0x75] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x80) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar6 = plVar6 + 0x35;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  puVar1 = PTR_DAT_04bc9ce0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  param_1[0x3832] = (long)(puVar2 + 0x10);
  param_1[0x3833] = -1;
  param_1[0x3836] = 0;
  param_1[0x3837] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x3838,0,0xc00);
  lVar7 = 0x40;
  plVar6 = param_1 + 0x383d;
  do {
    *(undefined4 *)(plVar6 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar6 + -0x24) = 0;
    plVar6[-4] = 0;
    plVar6[-3] = 0;
    iVar4 = FUN_015d3550(0);
    *(undefined4 *)(plVar6 + -1) = 0xffffffff;
    iVar3 = 0;
    if (iVar4 != -1) {
      iVar3 = iVar4;
    }
    *(undefined1 *)((long)plVar6 + -4) = 0;
    lVar7 = lVar7 + -1;
    *(int *)(plVar6 + -2) = iVar3;
    *(undefined4 *)plVar6 = 0;
    plVar6 = plVar6 + 6;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x39ba) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x39bb) = 0;
  param_1[0x39b8] = (long)puVar2;
  param_1[0x39b9] = -1;
  *(undefined1 *)(param_1 + 0x39bc) = 0;
  *(undefined4 *)(param_1 + 0x39bd) = 0;
  param_1[0x39be] = 0;
  *(undefined4 *)(param_1 + 0x39bf) = 0;
  param_1[0x39c0] = 0;
  *(undefined4 *)(param_1 + 0x39c1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ce0c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ce12) = 0;
  FUN_034f5c68(param_1 + 0x39c5);
  *(undefined2 *)(param_1 + 0x3a29) = 0;
  *(undefined2 *)((long)param_1 + 0x1d14c) = 0;
  param_1[0x3a28] = 0x500000001;
  *(undefined4 *)(param_1 + 0x3a2a) = 0;
  param_1[0x3a2b] = 0;
  param_1[0x3a2c] = 0;
  *(undefined4 *)(param_1 + 0x3a2d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1d16c) = 0;
  *(undefined4 *)(param_1 + 0x3a30) = 0;
  *(undefined4 *)(param_1 + 0x3a31) = 0;
  param_1[0x3a32] = 0;
  *(undefined4 *)(param_1 + 0x3a33) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1d19c) = 0;
  *(undefined4 *)(param_1 + 0x3a36) = 0;
  *(undefined4 *)(param_1 + 0x3a37) = 0;
  param_1[0x3a2e] = (long)puVar2;
  param_1[0x3a2f] = -1;
  param_1[0x3a34] = (long)puVar2;
  param_1[0x3a35] = -1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}

