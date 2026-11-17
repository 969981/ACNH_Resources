
void FUN_02e5e830(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  plVar8 = param_1 + 0xad95;
  plVar1 = param_1 + 0x3861;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
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
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
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
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar3 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_FUN_04ad72d0;
  puVar2 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = (long)(puVar3 + 0x10);
  param_1[0x3e] = -1;
  param_1[0x4b] = (long)(puVar2 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar14 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  lVar7 = 0;
  do {
    FUN_03463544((long)param_1 + lVar7 + 0x260,0);
    lVar14 = lVar14 + -1;
    *(undefined4 *)((long)param_1 + lVar7 + 0x3b8) = 0x40;
    *(long *)((long)param_1 + lVar7 + 0x3b0) = (long)param_1 + lVar7 + 0x3bc;
    *(undefined1 *)((long)param_1 + lVar7 + 0x3fb) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x3bc) = 0;
    *(undefined **)((long)param_1 + lVar7 + 0x3a8) = puVar2;
    *(undefined4 *)((long)param_1 + lVar7 + 0x400) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    lVar7 = lVar7 + 0x1a8;
  } while (lVar14 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  param_1[0x3836] = 0xffffffff;
  param_1[0x3832] = (long)(puVar3 + 0x10);
  param_1[0x3833] = -1;
  FUN_03135560(param_1 + 0x383b);
  *(undefined4 *)(param_1 + 0x385e) = 0;
  param_1[0x3863] = (long)(param_1 + 0x3865);
  param_1[0x385f] = 0;
  param_1[0x3860] = 0;
  plVar11 = param_1 + 0x3869;
  param_1[0x3861] = 0;
  param_1[0x3862] = 0;
  lVar14 = 0x3a94;
  while( true ) {
    plVar11[-3] = (long)(plVar11 + -2);
    plVar11[-4] = (long)(plVar11 + -3);
    plVar11[-2] = (long)(plVar11 + -1);
    if (lVar14 == 0) break;
    plVar11[-1] = (long)plVar11;
    plVar11 = plVar11 + 4;
    lVar14 = lVar14 + -4;
  }
  param_1[0x3864] = (long)(param_1 + 0x3865);
  param_1[0x72fc] = 0;
  if (param_1 + 0x72fd != (long *)0x0) {
    *plVar1 = 0x3a9800000000;
    param_1[0x3862] = (long)(param_1 + 0x72fd);
  }
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  *plVar8 = (long)puVar2;
  memset(param_1 + 0xad96,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x57404) = uVar5;
  *(uint *)(param_1 + 0xae81) = uVar4;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x5740c) = uVar5;
  *(uint *)(param_1 + 0xae82) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)(*plVar8 + 0x18))(plVar8);
  memset(pvVar6,0,0x754);
  plVar11 = param_1 + 0xae83;
  *plVar11 = (long)puVar2;
  memset(param_1 + 0xae84,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x57b74) = uVar5;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xaf6f) = uVar5;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x57b7c) = uVar5;
  *(uint *)(param_1 + 0xaf70) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)(*plVar11 + 0x18))(plVar11);
  memset(pvVar6,0,0x754);
  param_1[0xaf71] = 0xfffe;
  FUN_0277d4ac(param_1 + 0xaf71);
  *(undefined1 *)(param_1 + 0xaf78) = 0;
  param_1[0xaf73] = (long)&PTR_LAB_04ad74e8;
  param_1[0xaf74] = (long)param_1;
  param_1[0xaf75] = (long)FUN_02e5ed6c;
  param_1[0xaf76] = 0;
  param_1[0xaf77] = -1;
  *(undefined4 *)(param_1 + 0xaf72) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x57bc4) = 0;
  param_1[0xaf7a] = 0;
  param_1[0x42] = 0;
  param_1[0x3837] = 0;
  param_1[0x3838] = 0;
  param_1[0x3839] = 0;
  param_1[0x383a] = 0;
  if (0 < (int)*plVar1) {
    lVar14 = 0;
    plVar12 = (long *)param_1[0x3863];
    do {
      plVar13 = *(long **)(param_1[0x3862] + lVar14 * 8);
      lVar14 = lVar14 + 1;
      *plVar13 = (long)plVar12;
      param_1[0x3863] = (long)plVar13;
      plVar12 = plVar13;
    } while (lVar14 < (int)*plVar1);
  }
  *(undefined4 *)plVar1 = 0;
  pvVar6 = (void *)(**(code **)(*plVar8 + 0x18))();
  memset(pvVar6,0,0x754);
  pvVar6 = (void *)(**(code **)(*plVar11 + 0x18))(plVar11);
  memset(pvVar6,0,0x754);
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar9 = malloc(0x1c8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1c8,8);
  }
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 2) = 0xffffffff;
    puVar2 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar9 + 0x6b) = 0;
    *puVar9 = 4;
    *(undefined1 *)((long)puVar9 + 0x2c) = 0;
    *(undefined4 *)(puVar9 + 5) = 0x40;
    puVar2 = puVar2 + 0x10;
    puVar9[1] = puVar2;
    puVar3 = PTR_DAT_04bb2bc0;
    puVar9[0xf] = puVar2;
    puVar9[0x1d] = puVar2;
    *(undefined1 *)((long)puVar9 + 0x9c) = 0;
    puVar9[0x2b] = puVar2;
    puVar3 = puVar3 + 0x10;
    *(undefined4 *)(puVar9 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar9 + 0xdb) = 0;
    *(undefined4 *)(puVar9 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar9 + 0x14b) = 0;
    *(undefined1 *)((long)puVar9 + 0x10c) = 0;
    *(undefined4 *)(puVar9 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar9 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar9 + 0x17c) = 0;
    puVar9[3] = puVar3;
    puVar9[4] = (undefined1 *)((long)puVar9 + 0x2c);
    *(undefined1 *)(puVar9 + 0xe) = 1;
    *(undefined1 *)(puVar9 + 0x1c) = 1;
    *(undefined1 *)(puVar9 + 0x2a) = 1;
    *(undefined1 *)(puVar9 + 0x38) = 1;
    puVar9[0x11] = puVar3;
    puVar9[0x12] = (undefined1 *)((long)puVar9 + 0x9c);
    puVar9[0x1f] = puVar3;
    puVar9[0x20] = (long)puVar9 + 0x10c;
    puVar9[0x2d] = puVar3;
    puVar9[0x2e] = (long)puVar9 + 0x17c;
    *(undefined4 *)(param_1 + 0xaf79) = 4;
    param_1[0xaf7a] = (long)(puVar9 + 1);
  }
  return;
}

