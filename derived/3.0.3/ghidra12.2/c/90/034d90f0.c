
void FUN_034d90f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  
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
  if (param_3 != (undefined8 *)0x0) {
    bVar6 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x47] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b31f88;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x49] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = (long)puVar1;
  memset(param_1 + 0x4e,0,0x1bf30);
  lVar8 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x4e,0);
    *(undefined4 *)(plVar7 + 0x79) = 0x40;
    lVar8 = lVar8 + -1;
    plVar7[0x78] = (long)plVar7 + 0x3cc;
    *(undefined1 *)((long)plVar7 + 0x40b) = 0;
    *(undefined1 *)((long)plVar7 + 0x3cc) = 0;
    plVar7[0x77] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x82) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar7 = plVar7 + 0x35;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x3836) = 0;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  param_1[0x3838] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x3834] = (long)(puVar2 + 0x10);
  param_1[0x3835] = -1;
  memset(param_1 + 0x3839,0,0xc00);
  lVar8 = 0x40;
  plVar7 = param_1 + 0x383e;
  do {
    *(undefined4 *)(plVar7 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar7 + -0x24) = 0;
    plVar7[-4] = 0;
    plVar7[-3] = 0;
    iVar3 = FUN_015d3550(0);
    *(undefined4 *)(plVar7 + -1) = 0xffffffff;
    iVar4 = 0;
    if (iVar3 != -1) {
      iVar4 = iVar3;
    }
    *(undefined1 *)((long)plVar7 + -4) = 0;
    lVar8 = lVar8 + -1;
    *(int *)(plVar7 + -2) = iVar4;
    *(undefined4 *)plVar7 = 0;
    plVar7 = plVar7 + 6;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x39bb) = 0;
  *(undefined4 *)(param_1 + 0x39bc) = 0;
  *(undefined1 *)(param_1 + 0x39bd) = 0;
  *(undefined4 *)(param_1 + 0x39be) = 0;
  param_1[0x39bf] = 0;
  *(undefined4 *)(param_1 + 0x39c0) = 0;
  *(undefined1 *)(param_1 + 0x39c6) = 0;
  param_1[0x39ca] = 0;
  *(undefined4 *)(param_1 + 0x39cb) = 0;
  param_1[0x39cc] = 0;
  param_1[0x42] = 0;
  param_1[0x39b9] = (long)(puVar2 + 0x10);
  param_1[0x39ba] = -1;
  param_1[0x39c1] = 0;
  param_1[0x39c2] = 0xffffffff;
  param_1[0x39c5] = 0x8ffffffff;
  *(undefined4 *)(param_1 + 0x39c9) = 0;
  param_1[0x39c3] = 0;
  param_1[0x39c4] = -1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x39c7] = 0;
  param_1[0x39c8] = 0;
  FUN_03515944();
  if (((*PTR_DAT_04bc9fe8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9fe8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc9fe0 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc9fe8);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*param_3)(param_3,PTR_DAT_04bc9fe0), (uVar5 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x1ce24) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x39c5) = *(undefined4 *)(param_3 + 3);
  }
  return;
}

