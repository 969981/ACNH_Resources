
void FUN_02c4b830(long *param_1,undefined8 param_2,undefined8 *param_3)

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
  *param_1 = (long)&PTR_LAB_04ab0e98;
  param_1[0x44] = -0x100000000;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  param_1[0x46] = (long)param_1 + 0x23c;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x20;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4e,0,0x1bf30);
  lVar6 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x4e,0);
    *(undefined4 *)(plVar7 + 0x79) = 0x40;
    lVar6 = lVar6 + -1;
    plVar7[0x78] = (long)plVar7 + 0x3cc;
    *(undefined1 *)((long)plVar7 + 0x40b) = 0;
    *(undefined1 *)((long)plVar7 + 0x3cc) = 0;
    plVar7[0x77] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x82) = 0;
    plVar7 = plVar7 + 0x35;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x3836) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x383c] = 0;
  param_1[0x383d] = 0;
  param_1[0x3842] = 0;
  param_1[0x3843] = 0;
  param_1[0x383a] = -1;
  param_1[0x383b] = 0;
  *(undefined2 *)((long)param_1 + 0x1c1da) = 0;
  param_1[0x3840] = -1;
  param_1[0x3841] = 0;
  param_1[0x3834] = (long)puVar1;
  param_1[0x3835] = -1;
  param_1[0x3838] = 0;
  param_1[0x3839] = (long)puVar1;
  puVar2 = PTR_DAT_04bc5978;
  *(undefined2 *)((long)param_1 + 0x1c20a) = 0;
  param_1[0x383e] = 0;
  param_1[0x383f] = (long)puVar1;
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5978), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc5970 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5978);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bc5970), (uVar4 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_3 + 3);
    *(undefined1 *)((long)param_1 + 0x261) = *(undefined1 *)((long)param_3 + 0x19);
  }
  param_1[0x3838] = 0;
  *(undefined4 *)(param_1 + 0x383d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1c1ec) = 0;
  param_1[0x383e] = 0;
  *(undefined4 *)(param_1 + 0x3843) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1c21c) = 0;
  *(undefined1 *)param_1[0x46] = 0;
  return;
}

