
void FUN_02ed21b0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  
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
    bVar5 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_FUN_04add9a0;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined1 *)((long)param_1 + 0x234) = 1;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_007ef010((long)param_1 + 0x244,PTR_DAT_04bb3170);
  *(undefined2 *)((long)param_1 + 0x246) = 0;
  param_1[0x49] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x4a,0,0x1bf30);
  lVar6 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x4a,0);
    *(undefined4 *)(plVar7 + 0x75) = 0x40;
    lVar6 = lVar6 + -1;
    plVar7[0x74] = (long)plVar7 + 0x3ac;
    *(undefined1 *)((long)plVar7 + 0x3eb) = 0;
    *(undefined1 *)((long)plVar7 + 0x3ac) = 0;
    plVar7[0x73] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x7e) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar7 = plVar7 + 0x35;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x3832) = 0;
  *(undefined4 *)(param_1 + 0x3833) = 0;
  param_1[0x3835] = 0xfffe;
  *(undefined4 *)(param_1 + 0x3834) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1c1a4) = 0;
  param_1[0x3830] = (long)(puVar2 + 0x10);
  param_1[0x3831] = -1;
  FUN_0277d4ac();
  param_1[0x3836] = 0;
  *(undefined1 *)(param_1 + 0x3837) = 0;
  param_1[0x42] = 0;
  if (((*PTR_DAT_04bc71f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc71f0), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc71e8 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc71f0);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bc71e8), (uVar4 & 1) != 0)) {
    *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)((long)param_3 + 0x14);
  }
  return;
}

