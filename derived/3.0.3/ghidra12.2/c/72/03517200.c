
void FUN_03517200(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  byte bVar11;
  long lVar12;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
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
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar11 = *(byte *)(param_3 + 0xe);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar11;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b34e78;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x45,0,0x1bf30);
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x45,0);
    *(undefined4 *)(plVar8 + 0x70) = 0x40;
    lVar12 = lVar12 + -1;
    plVar8[0x6f] = (long)plVar8 + 900;
    *(undefined1 *)((long)plVar8 + 0x3c3) = 0;
    *(undefined1 *)((long)plVar8 + 900) = 0;
    plVar8[0x6e] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x79) = 0;
    plVar8 = plVar8 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x382d) = 0;
  uVar5 = DAT_05767c48;
  puVar4 = PTR_DAT_04bc8e10;
  *(undefined2 *)((long)param_1 + 0x1c18c) = 0xffff;
  *(undefined2 *)((long)param_1 + 0x1c194) = 0xffff;
  *(undefined2 *)((long)param_1 + 0x1c19c) = 0xffff;
  puVar1 = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x3832) = uVar5;
  *(undefined4 *)(param_1 + 0x3833) = uVar5;
  *(undefined4 *)(param_1 + 0x3834) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1c1a4) = 0;
  *(undefined2 *)(param_1 + 0x3835) = 0xffff;
  *(undefined4 *)(param_1 + 0x382e) = 0;
  *(undefined4 *)(param_1 + 0x382f) = 0;
  param_1[0x3830] = 0;
  *(undefined4 *)(param_1 + 0x3831) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1c1ac) = 4;
  param_1[0x382b] = (long)puVar1;
  param_1[0x382c] = -1;
  FUN_03463544(param_1 + 0x3836,0);
  param_1[0x385f] = (long)puVar1;
  param_1[0x3860] = -1;
  *(undefined4 *)(param_1 + 0x3861) = 0;
  puVar1 = PTR_DAT_04bc6260;
  *(undefined1 *)((long)param_1 + 0x1c354) = 0;
  *(undefined4 *)(param_1 + 0x3862) = 0;
  param_1[0x3864] = 0;
  param_1[0x3865] = 0;
  param_1[0x3866] = 0;
  param_1[0x3863] = (long)(puVar1 + 0x10);
  param_1[0x3869] = (long)param_1 + 0x1c354;
  *(undefined4 *)(param_1 + 0x386a) = 0x80;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)((long)param_1 + 0x1c3d3) = 0;
  *(undefined4 *)(param_1 + 0x387b) = 0;
  param_1[0x3867] = 0xffffffff;
  param_1[0x3868] = (long)puVar1;
  param_1[0x387c] = 0;
  param_1[0x387d] = 0;
  param_1[0x387e] = 0;
  param_1[0x387f] = 0;
  param_1[0x3880] = 0;
  param_1[0x3881] = 0;
  puVar1 = PTR_DAT_04bc9ce0 + 0x10;
  param_1[0x3884] = 0;
  param_1[0x3885] = (long)puVar1;
  param_1[0x3882] = 0;
  param_1[0x3883] = 0;
  memset(param_1 + 0x3886,0,0xc00);
  lVar12 = 0x40;
  plVar8 = param_1 + 0x388b;
  do {
    *(undefined4 *)(plVar8 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar8 + -0x24) = 0;
    plVar8[-4] = 0;
    plVar8[-3] = 0;
    iVar6 = FUN_015d3550(0);
    *(undefined4 *)(plVar8 + -1) = 0xffffffff;
    iVar3 = 0;
    if (iVar6 != -1) {
      iVar3 = iVar6;
    }
    *(undefined1 *)((long)plVar8 + -4) = 0;
    lVar12 = lVar12 + -1;
    *(int *)(plVar8 + -2) = iVar3;
    *(undefined4 *)plVar8 = 0;
    plVar8 = plVar8 + 6;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x3a08) = 0;
  param_1[0x3a06] = (long)(puVar4 + 0x10);
  param_1[0x3a07] = -1;
  *(undefined4 *)(param_1 + 0x3a09) = 0;
  *(undefined1 *)(param_1 + 0x3a0a) = 0;
  *(undefined4 *)(param_1 + 0x3a0d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3a10) = 0;
  param_1[0x42] = 0;
  param_1[0x3a0b] = 0;
  param_1[0x3a0c] = 0;
  param_1[0x3a0e] = 0;
  param_1[0x3a0f] = 0x500000000;
  param_1[0x3a11] = 0;
  param_1[0x3a12] = 0;
  param_1[0x3a15] = 0;
  param_1[0x3a13] = 0;
  param_1[0x3a14] = 0;
  *(undefined4 *)(param_1 + 0x3a16) = 4;
  *(undefined8 *)((long)param_1 + 0x1d0b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1d0bc) = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x1d0c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1d0cc) = 0;
  puVar4 = PTR_DAT_04bb3350;
  *(undefined8 *)((long)param_1 + 0x1d0d4) = 0;
  if (lVar12 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
    }
  }
  plVar8[2] = 0;
  plVar8[3] = 0;
  puVar2 = PTR_DAT_04bc5ca8 + 0x10;
  *(undefined4 *)(plVar8 + 4) = 0;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 6) = 0;
  *plVar8 = (long)puVar2;
  plVar8[1] = 0;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar10 = malloc(4000);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_035175a8;
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,4000,8);
  }
  if (pvVar10 != (void *)0x0) {
    plVar8[1] = 0x1f400000000;
    plVar8[2] = (long)pvVar10;
  }
LAB_035175a8:
  (**(code **)(*plVar8 + 0x18))(plVar8);
  param_1[0x3884] = (long)plVar8;
  if ((*(uint *)(*(long *)PTR_DAT_04bb2110 + 8) < 3) ||
     (*(long *)(*(long *)(*(long *)PTR_DAT_04bb2110 + 0x10) + 0x10) == 0)) {
    return;
  }
  FUN_0081c284();
  return;
}

