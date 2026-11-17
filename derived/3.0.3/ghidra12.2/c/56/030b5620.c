
void FUN_030b5620(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04afc358;
  param_1[0x42] = 0;
  param_1[0x43] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  memset(param_1 + 0x44,0,0xc00);
  lVar8 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar8 + 0x220) = 0xffffffff;
    *(undefined2 *)((long)param_1 + lVar8 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + lVar8 + 0x228) = 0;
    *(undefined8 *)((long)param_1 + lVar8 + 0x230) = 0;
    iVar5 = FUN_015d3550(0);
    lVar1 = lVar8 + 0x30;
    *(undefined4 *)((long)param_1 + lVar8 + 0x240) = 0xffffffff;
    iVar3 = 0;
    if (iVar5 != -1) {
      iVar3 = iVar5;
    }
    *(undefined1 *)((long)param_1 + lVar8 + 0x244) = 0;
    *(int *)((long)param_1 + lVar8 + 0x238) = iVar3;
    *(undefined4 *)((long)param_1 + lVar8 + 0x248) = 0;
    lVar8 = lVar1;
  } while (lVar1 != 0xc00);
  param_1[0x1c5] = -1;
  puVar4 = PTR_DAT_04bc8e10;
  param_1[0x1cc] = 0;
  plVar7 = param_1 + 0x1eb;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined4 *)(param_1 + 0x1c7) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = (long)(param_1 + 0x1cd);
  param_1[0x1db] = 0;
  param_1[0x1cb] = (long)(param_1 + 0x1cd);
  param_1[0x1c4] = (long)(puVar4 + 0x10);
  *(undefined4 *)((long)param_1 + 0xe64) = 2;
  *(undefined4 *)(param_1 + 0x1e9) = 0;
  param_1[0x1cd] = (long)(param_1 + 0x1db);
  param_1[0x1ea] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(plVar7,0,0x1bf30);
  lVar8 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    FUN_03463544(plVar7,0);
    *(undefined4 *)(plVar7 + 0x2b) = 0x40;
    lVar8 = lVar8 + -1;
    *(undefined1 *)((long)plVar7 + 0x19b) = 0;
    *(undefined1 *)((long)plVar7 + 0x15c) = 0;
    *(undefined4 *)(plVar7 + 0x34) = 0;
    plVar7[0x29] = (long)puVar2;
    plVar7[0x2a] = (long)plVar7 + 0x15c;
    plVar7 = plVar7 + 0x35;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x39d3) = 0;
  param_1[0x39d1] = (long)(puVar4 + 0x10);
  param_1[0x39d2] = -1;
  *(undefined4 *)(param_1 + 0x39d4) = 0;
  param_1[0x39df] = 0;
  plVar7 = param_1 + 0x39d9;
  *plVar7 = (long)(param_1 + 0x39df);
  param_1[0x39d5] = 0;
  param_1[0x39d6] = 0;
  param_1[0x39d7] = (long)plVar7;
  param_1[0x39d8] = (long)plVar7;
  if (param_1 + 0x39e5 != (long *)0x0) {
    param_1[0x39d6] = (long)(param_1 + 0x39e5);
    *(undefined4 *)((long)param_1 + 0x1ceac) = 2;
  }
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
  }
  return;
}

