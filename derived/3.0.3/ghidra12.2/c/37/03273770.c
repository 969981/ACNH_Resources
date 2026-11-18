
void FUN_03273770(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  
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
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b16908;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x45,0,0x1bf30);
  lVar10 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar11 = param_1;
  do {
    FUN_03463544(plVar11 + 0x45,0);
    *(undefined4 *)(plVar11 + 0x70) = 0x40;
    lVar10 = lVar10 + -1;
    plVar11[0x6f] = (long)plVar11 + 900;
    *(undefined1 *)((long)plVar11 + 0x3c3) = 0;
    *(undefined1 *)((long)plVar11 + 900) = 0;
    plVar11[0x6e] = (long)puVar1;
    *(undefined4 *)(plVar11 + 0x79) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar11 = plVar11 + 0x35;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 0x382d) = 0;
  *(undefined4 *)(param_1 + 0x382e) = 0;
  param_1[0x382f] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x382b] = (long)(puVar2 + 0x10);
  param_1[0x382c] = -1;
  memset(param_1 + 0x3830,0,0xc00);
  lVar10 = 0x40;
  plVar11 = param_1 + 0x3835;
  do {
    *(undefined4 *)(plVar11 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar11 + -0x24) = 0;
    plVar11[-4] = 0;
    plVar11[-3] = 0;
    iVar8 = FUN_015d3550(0);
    *(undefined4 *)(plVar11 + -1) = 0xffffffff;
    iVar5 = 0;
    if (iVar8 != -1) {
      iVar5 = iVar8;
    }
    *(undefined1 *)((long)plVar11 + -4) = 0;
    lVar10 = lVar10 + -1;
    *(int *)(plVar11 + -2) = iVar5;
    *(undefined4 *)plVar11 = 0;
    plVar11 = plVar11 + 6;
  } while (lVar10 != 0);
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x39b2) = 0;
  param_1[0x39b0] = (long)puVar2;
  param_1[0x39b1] = -1;
  pvVar3 = (void *)((long)param_1 + 0x1cdc4);
  *(undefined4 *)(param_1 + 0x39b3) = 0;
  *(undefined1 *)(param_1 + 0x39b4) = 0;
  *(undefined4 *)(param_1 + 0x39b5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39b8) = 0x80;
  *(undefined1 *)((long)param_1 + 0x1ce43) = 0;
  puVar6 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  param_1[0x39b6] = (long)puVar1;
  param_1[0x39b7] = (long)pvVar3;
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  pvVar12 = *(void **)(puVar6 + 8);
  if (pvVar3 != pvVar12) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar10) == '\0') goto LAB_032739fc;
      lVar4 = *(long *)(puVar6 + 8) + lVar10;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_032739fc;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_032739fc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_032739fc:
    iVar5 = (int)lVar10;
    if ((int)param_1[0x39b8] <= (int)lVar10) {
      iVar5 = (int)param_1[0x39b8] + -1;
    }
    memcpy(pvVar3,pvVar12,(long)iVar5);
    *(undefined1 *)((long)pvVar3 + (long)iVar5) = 0;
  }
  puVar7 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x39cb) = 0;
  *(undefined4 *)(param_1 + 0x39cc) = 0;
  *(undefined4 *)(param_1 + 0x39cf) = 0;
  *(undefined4 *)(param_1 + 0x39d0) = 0;
  *(undefined4 *)(param_1 + 0x39d1) = 0;
  *(undefined4 *)(param_1 + 0x39d2) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1cf2b) = 0;
  param_1[0x39b6] = (long)(puVar7 + 0x10);
  param_1[0x39c9] = (long)puVar2;
  param_1[0x39ca] = -1;
  param_1[0x39cd] = (long)puVar2;
  param_1[0x39ce] = -1;
  pvVar3 = (void *)((long)param_1 + 0x1ceac);
  *(undefined4 *)(param_1 + 0x39d5) = 0x80;
  param_1[0x39d3] = (long)puVar1;
  param_1[0x39d4] = (long)pvVar3;
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  pvVar12 = *(void **)(puVar6 + 8);
  if (pvVar3 != pvVar12) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar10) == '\0') goto LAB_03273aec;
      lVar4 = *(long *)(puVar6 + 8) + lVar10;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03273aec;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03273aec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03273aec:
    iVar5 = (int)lVar10;
    if ((int)param_1[0x39d5] <= (int)lVar10) {
      iVar5 = (int)param_1[0x39d5] + -1;
    }
    memcpy(pvVar3,pvVar12,(long)iVar5);
    *(undefined1 *)((long)pvVar3 + (long)iVar5) = 0;
  }
  param_1[0x39d3] = (long)(puVar7 + 0x10);
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x39e8) = 0;
  *(undefined4 *)(param_1 + 0x39e9) = 0;
  *(undefined4 *)(param_1 + 0x39ec) = 0;
  *(undefined4 *)(param_1 + 0x39ed) = 0;
  *(undefined4 *)(param_1 + 0x39ee) = 0;
  param_1[0x39e6] = (long)(puVar1 + 0x10);
  param_1[0x39e7] = -1;
  param_1[0x39ea] = (long)(puVar1 + 0x10);
  param_1[0x39eb] = -1;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  *(undefined4 *)(param_1 + 0x39f5) = 0;
  *(undefined4 *)(param_1 + 0x39f6) = 0;
  param_1[0x39ef] = (long)puVar1;
  param_1[0x39f2] = 0;
  param_1[0x39f0] = 0;
  param_1[0x39f1] = 0;
  param_1[0x39f3] = 0xffffffff;
  param_1[0x39f4] = -1;
  return;
}

