
void FUN_034b26d0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar3 + 0x10);
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
  param_1[0x46] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b2f110;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x50] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = (long)puVar1;
  memset(param_1 + 0x55,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x55,0);
    *(undefined4 *)(plVar6 + 0x80) = 0x40;
    lVar7 = lVar7 + -1;
    plVar6[0x7f] = (long)plVar6 + 0x404;
    *(undefined1 *)((long)plVar6 + 0x443) = 0;
    *(undefined1 *)((long)plVar6 + 0x404) = 0;
    plVar6[0x7e] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x89) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    plVar6 = plVar6 + 0x35;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x383d) = 0;
  *(undefined4 *)(param_1 + 0x383e) = 0;
  param_1[0x383f] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x383b] = (long)(puVar3 + 0x10);
  param_1[0x383c] = -1;
  memset(param_1 + 0x3840,0,0xc00);
  lVar7 = 0x40;
  plVar6 = param_1 + 0x3845;
  do {
    *(undefined4 *)(plVar6 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar6 + -0x24) = 0;
    plVar6[-4] = 0;
    plVar6[-3] = 0;
    iVar4 = FUN_015d3550(0);
    *(undefined4 *)(plVar6 + -1) = 0xffffffff;
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    *(undefined1 *)((long)plVar6 + -4) = 0;
    lVar7 = lVar7 + -1;
    *(int *)(plVar6 + -2) = iVar2;
    *(undefined4 *)plVar6 = 0;
    puVar1 = PTR_DAT_04bc9970;
    plVar6 = plVar6 + 6;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x39c2) = 0;
  *(undefined4 *)(param_1 + 0x39c3) = 0;
  *(undefined1 *)(param_1 + 0x39c4) = 0;
  *(undefined4 *)(param_1 + 0x39c7) = 0xffffffff;
  param_1[0x39c5] = -1;
  param_1[0x39c6] = 0;
  *(undefined4 *)(param_1 + 0x39cd) = 0;
  param_1[0x39cc] = 0;
  param_1[0x39ce] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x39c8] = (long)(puVar1 + 0x10);
  param_1[0x39c0] = (long)(puVar3 + 0x10);
  param_1[0x39c1] = -1;
  *(undefined4 *)(param_1 + 0x39cf) = 8;
  (**(code **)(*(long *)(param_3 + 0x18) + 0x10))((long *)(param_3 + 0x18));
  FUN_03515944(param_1 + 0x39cc);
  return;
}

