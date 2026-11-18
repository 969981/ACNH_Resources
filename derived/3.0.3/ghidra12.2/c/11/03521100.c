
void FUN_03521100(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  
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
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b35418;
  FUN_00e41440(param_1 + 0x43);
  FUN_00e41440(param_1 + 0x51);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x61,0,0x1bf30);
  lVar11 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar12 = param_1;
  do {
    FUN_03463544(plVar12 + 0x61,0);
    *(undefined4 *)(plVar12 + 0x8c) = 0x40;
    lVar11 = lVar11 + -1;
    plVar12[0x8b] = (long)plVar12 + 0x464;
    *(undefined1 *)((long)plVar12 + 0x4a3) = 0;
    *(undefined1 *)((long)plVar12 + 0x464) = 0;
    plVar12[0x8a] = (long)puVar1;
    *(undefined4 *)(plVar12 + 0x95) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar12 = plVar12 + 0x35;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x3849) = 0;
  *(undefined4 *)(param_1 + 0x384a) = 0;
  param_1[0x384b] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  param_1[0x3847] = (long)(puVar2 + 0x10);
  param_1[0x3848] = -1;
  memset(param_1 + 0x384c,0,0xc00);
  lVar11 = 0x40;
  plVar12 = param_1 + 0x3851;
  do {
    *(undefined4 *)(plVar12 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar12 + -0x24) = 0;
    plVar12[-4] = 0;
    plVar12[-3] = 0;
    iVar9 = FUN_015d3550(0);
    *(undefined4 *)(plVar12 + -1) = 0xffffffff;
    iVar6 = 0;
    if (iVar9 != -1) {
      iVar6 = iVar9;
    }
    *(undefined1 *)((long)plVar12 + -4) = 0;
    lVar11 = lVar11 + -1;
    *(int *)(plVar12 + -2) = iVar6;
    *(undefined4 *)plVar12 = 0;
    plVar12 = plVar12 + 6;
  } while (lVar11 != 0);
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x39ce) = 0;
  param_1[0x39cc] = (long)puVar2;
  param_1[0x39cd] = -1;
  *(undefined4 *)(param_1 + 0x39cf) = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  *(undefined1 *)(param_1 + 0x39d0) = 0;
  param_1[0x39d5] = 0xffffffff;
  param_1[0x39d6] = -1;
  param_1[0x39d1] = (long)puVar1;
  pvVar3 = (void *)((long)param_1 + 0x1cecc);
  param_1[0x39d2] = 0;
  param_1[0x39d3] = 0;
  param_1[0x39d4] = 0;
  puVar4 = PTR_DAT_04bb2e90 + 0x10;
  *(undefined4 *)(param_1 + 0x39d9) = 0x80;
  puVar7 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x1cf4b) = 0;
  param_1[0x39d7] = (long)puVar4;
  param_1[0x39d8] = (long)pvVar3;
  (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
  pvVar13 = *(void **)(puVar7 + 8);
  if (pvVar3 != pvVar13) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar11) == '\0') goto LAB_035213bc;
      lVar5 = *(long *)(puVar7 + 8) + lVar11;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_035213bc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_035213bc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_035213bc:
    iVar6 = (int)lVar11;
    if ((int)param_1[0x39d9] <= (int)lVar11) {
      iVar6 = (int)param_1[0x39d9] + -1;
    }
    memcpy(pvVar3,pvVar13,(long)iVar6);
    *(undefined1 *)((long)pvVar3 + (long)iVar6) = 0;
  }
  puVar8 = PTR_DAT_04bb2d88;
  param_1[0x39ea] = (long)puVar2;
  param_1[0x39eb] = -1;
  *(undefined4 *)(param_1 + 0x39ec) = 0;
  param_1[0x39ef] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x39ed) = 0;
  *(undefined1 *)((long)param_1 + 0x1d03b) = 0;
  param_1[0x39ee] = 0xffffffff;
  param_1[0x39d7] = (long)(puVar8 + 0x10);
  param_1[0x39f2] = 0;
  param_1[0x39f3] = 0xffffffff;
  param_1[0x39f4] = -1;
  pvVar3 = (void *)((long)param_1 + 0x1cfbc);
  *(undefined4 *)(param_1 + 0x39f7) = 0x80;
  param_1[0x39f5] = (long)puVar4;
  param_1[0x39f6] = (long)pvVar3;
  lVar11 = *(long *)puVar7;
  param_1[0x39f0] = 0;
  param_1[0x39f1] = 0;
  (**(code **)(lVar11 + 0x18))(puVar7);
  puVar1 = PTR_DAT_04bc8e10;
  pvVar13 = *(void **)(puVar7 + 8);
  if (pvVar3 != pvVar13) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar11) == '\0') goto LAB_035214bc;
      lVar5 = *(long *)(puVar7 + 8) + lVar11;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_035214bc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_035214bc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_035214bc:
    iVar6 = (int)lVar11;
    if ((int)param_1[0x39f7] <= (int)lVar11) {
      iVar6 = (int)param_1[0x39f7] + -1;
    }
    memcpy(pvVar3,pvVar13,(long)iVar6);
    *(undefined1 *)((long)pvVar3 + (long)iVar6) = 0;
  }
  param_1[0x39f5] = (long)(puVar8 + 0x10);
  *(undefined4 *)(param_1 + 0x3a0a) = 0;
  *(undefined4 *)(param_1 + 0x3a0b) = 0;
  param_1[0x3a08] = (long)(puVar1 + 0x10);
  param_1[0x3a09] = -1;
  param_1[0x3a0c] = 0xffffffff;
  return;
}

