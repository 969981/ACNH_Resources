
void FUN_034bef10(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  byte bVar10;
  long lVar11;
  
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
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b2f7f0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = (long)(PTR_DAT_04bc9ce0 + 0x10);
  memset(param_1 + 0x48,0,0xc00);
  lVar11 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar11 + 0x240) = 0xffffffff;
    *(undefined2 *)((long)param_1 + lVar11 + 0x244) = 0;
    *(undefined8 *)((long)param_1 + lVar11 + 0x248) = 0;
    *(undefined8 *)((long)param_1 + lVar11 + 0x250) = 0;
    iVar5 = FUN_015d3550(0);
    lVar6 = lVar11 + 0x30;
    *(undefined4 *)((long)param_1 + lVar11 + 0x260) = 0xffffffff;
    iVar3 = 0;
    if (iVar5 != -1) {
      iVar3 = iVar5;
    }
    *(undefined1 *)((long)param_1 + lVar11 + 0x264) = 0;
    *(int *)((long)param_1 + lVar11 + 600) = iVar3;
    *(undefined4 *)((long)param_1 + lVar11 + 0x268) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    lVar11 = lVar6;
  } while (lVar6 != 0xc00);
  param_1[0x1c9] = -1;
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  *(undefined4 *)(param_1 + 0x1cb) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = -1;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  *(undefined4 *)(param_1 + 0x1d3) = 0;
  param_1[0x1c8] = (long)(puVar2 + 0x10);
  param_1[0x1ce] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar4 = PTR_DAT_04bb3350;
  lVar11 = *(long *)puVar2;
  param_1[0x1d4] = 0;
  if (lVar11 == 0) {
    plVar7 = malloc(0x108);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x108,8);
    }
  }
  puVar1 = PTR_DAT_04bc5cb0;
  plVar7[4] = -1;
  *(undefined2 *)((long)plVar7 + 0x2c) = 0;
  *(undefined1 *)((long)plVar7 + 0x2e) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar7[1] = 0;
  puVar1 = PTR_DAT_04bc5c98;
  lVar11 = *(long *)puVar2;
  *(undefined2 *)((long)plVar7 + 0x44) = 0;
  *(undefined1 *)((long)plVar7 + 0x46) = 0;
  *(undefined2 *)((long)plVar7 + 0x5c) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)plVar7 + 0x5e) = 0;
  *(undefined2 *)((long)plVar7 + 0x74) = 0;
  *(undefined1 *)((long)plVar7 + 0x76) = 0;
  *(undefined2 *)((long)plVar7 + 0x8c) = 0;
  *(undefined1 *)((long)plVar7 + 0x8e) = 0;
  *(undefined2 *)((long)plVar7 + 0xa4) = 0;
  *(undefined1 *)((long)plVar7 + 0xa6) = 0;
  *(undefined2 *)((long)plVar7 + 0xbc) = 0;
  *(undefined1 *)((long)plVar7 + 0xbe) = 0;
  *(undefined2 *)((long)plVar7 + 0xd4) = 0;
  *(undefined1 *)((long)plVar7 + 0xd6) = 0;
  *(undefined2 *)((long)plVar7 + 0xec) = 0;
  *(undefined1 *)((long)plVar7 + 0xee) = 0;
  *(undefined2 *)((long)plVar7 + 0x104) = 0;
  *(undefined1 *)((long)plVar7 + 0x106) = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar1;
  plVar7[6] = (long)puVar1;
  plVar7[7] = -1;
  plVar7[9] = (long)puVar1;
  plVar7[10] = -1;
  plVar7[0xc] = (long)puVar1;
  plVar7[0xd] = -1;
  plVar7[0xf] = (long)puVar1;
  plVar7[0x10] = -1;
  plVar7[0x12] = (long)puVar1;
  plVar7[0x13] = -1;
  plVar7[0x15] = (long)puVar1;
  plVar7[0x16] = -1;
  plVar7[0x18] = (long)puVar1;
  plVar7[0x19] = -1;
  plVar7[0x1b] = (long)puVar1;
  plVar7[0x1c] = -1;
  plVar7[0x1e] = (long)puVar1;
  plVar7[0x1f] = -1;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x50);
joined_r0x034bf2f8:
    if (pvVar9 != (void *)0x0) {
      plVar7[1] = 0xa00000000;
      plVar7[2] = (long)pvVar9;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar8 = (long *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x50,8);
      goto joined_r0x034bf2f8;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  param_1[0x45] = (long)plVar7;
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x32890);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) goto LAB_034bf2c4;
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x32890,8);
  }
  if (pvVar9 != (void *)0x0) {
    puVar2 = PTR_DAT_04bc6260 + 0x10;
    *(long *)((long)pvVar9 + 0x10) = (long)puVar2;
    *(undefined8 *)((long)pvVar9 + 8) = 2;
    *(undefined8 *)((long)pvVar9 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)((long)pvVar9 + 0x18) = 0;
    *(undefined8 *)((long)pvVar9 + 0x20) = 0;
    *(undefined4 *)((long)pvVar9 + 0x40) = 0;
    *(undefined8 *)((long)pvVar9 + 0x28) = 0;
    *(undefined8 *)((long)pvVar9 + 0x30) = 0xffffffff;
    memset((void *)((long)pvVar9 + 0x50),0,0x19400);
    *(undefined4 *)((long)pvVar9 + 0x88) = 0xffffffff;
    *(undefined4 *)((long)pvVar9 + 0x80) = 1;
    *(undefined8 *)((long)pvVar9 + 0x19458) = 0;
    *(undefined8 *)((long)pvVar9 + 0x19460) = 0;
    *(undefined8 *)((long)pvVar9 + 0x19468) = 0;
    *(undefined **)((long)pvVar9 + 0x19450) = puVar2;
    *(undefined4 *)((long)pvVar9 + 0x19480) = 0;
    *(undefined8 *)((long)pvVar9 + 0x19470) = 0xffffffff;
    *(undefined8 *)((long)pvVar9 + 0x19478) = 0xffffffffffffffff;
    memset((void *)((long)pvVar9 + 0x19490),0,0x19400);
    *(undefined4 *)((long)pvVar9 + 0x194c0) = 1;
    *(undefined4 *)((long)pvVar9 + 0x194c8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d3) = 2;
    param_1[0x1d4] = (long)pvVar9 + 0x10;
  }
LAB_034bf2c4:
  param_1[0x1cd] = *(long *)PTR_DAT_04bb9198;
  return;
}

