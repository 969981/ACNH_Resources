
void FUN_02cbfbf0(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ab6e68;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x46,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x46,0);
    *(undefined4 *)(plVar6 + 0x71) = 0x40;
    lVar7 = lVar7 + -1;
    plVar6[0x70] = (long)plVar6 + 0x38c;
    *(undefined1 *)((long)plVar6 + 0x3cb) = 0;
    *(undefined1 *)((long)plVar6 + 0x38c) = 0;
    plVar6[0x6f] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x7a) = 0;
    plVar6 = plVar6 + 0x35;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x382e) = 0;
  param_1[0x3846] = 0;
  param_1[0x3840] = (long)(param_1 + 0x3846);
  param_1[0x383a] = (long)(param_1 + 0x3840);
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x382f) = 0;
  param_1[0x382c] = (long)(puVar1 + 0x10);
  param_1[0x382d] = -1;
  param_1[0x3830] = 0;
  param_1[0x3831] = 0;
  plVar6 = param_1 + 0x3834;
  *plVar6 = (long)(param_1 + 0x383a);
  param_1[0x3832] = (long)plVar6;
  param_1[0x3833] = (long)plVar6;
  if (param_1 + 0x384c != (long *)0x0) {
    param_1[0x3831] = (long)(param_1 + 0x384c);
    *(undefined4 *)((long)param_1 + 0x1c184) = 4;
  }
  param_1[0x3850] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  memset(param_1 + 0x3851,0,0xc00);
  lVar7 = 0x40;
  plVar6 = param_1 + 0x3856;
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
    plVar6 = plVar6 + 6;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x39d3) = 0;
  param_1[0x39d1] = (long)(puVar1 + 0x10);
  param_1[0x39d2] = -1;
  param_1[0x39d8] = 0;
  param_1[0x39d9] = 0;
  *(undefined4 *)(param_1 + 0x39d4) = 0;
  *(undefined1 *)(param_1 + 0x39d5) = 0;
  param_1[0x3a04] = 0;
  param_1[0x3a13] = -1;
  *(undefined1 *)(param_1 + 0x3a14) = 0;
  *(undefined4 *)((long)param_1 + 0x1d0a4) = 0;
  param_1[0x39d6] = 0;
  param_1[0x39d7] = 0;
  param_1[0x39e8] = (long)(param_1 + 0x39f6);
  *(undefined4 *)((long)param_1 + 0x1cecc) = 4;
  plVar6 = param_1 + 0x39da;
  *plVar6 = (long)(param_1 + 0x39e8);
  param_1[0x39f6] = (long)(param_1 + 0x3a04);
  param_1[0x39d7] = (long)plVar6;
  param_1[0x39d8] = (long)plVar6;
  param_1[0x3a12] = -0x100000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}

