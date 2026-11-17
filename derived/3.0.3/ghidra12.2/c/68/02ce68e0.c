
void FUN_02ce68e0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_LAB_04ab87f8;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 6;
  puVar5 = param_1 + 10;
  lVar6 = 0x3a94;
  while( true ) {
    puVar5[-3] = puVar5 + -2;
    puVar5[-4] = puVar5 + -3;
    puVar5[-2] = puVar5 + -1;
    if (lVar6 == 0) break;
    puVar5[-1] = puVar5;
    puVar5 = puVar5 + 4;
    lVar6 = lVar6 + -4;
  }
  param_1[0x3a9d] = 0;
  param_1[5] = param_1 + 6;
  if (param_1 + 0x3a9e != (undefined8 *)0x0) {
    param_1[2] = 0x3a9800000000;
    param_1[3] = param_1 + 0x3a9e;
  }
  param_1[0x7536] = &PTR_LAB_04ab89e8;
  param_1[0x7538] = 0;
  param_1[0x7539] = param_1 + 0x753b;
  puVar5 = param_1 + 0x753f;
  lVar6 = 0x3a94;
  param_1[0x7537] = 0;
  while( true ) {
    puVar5[-3] = puVar5 + -2;
    puVar5[-4] = puVar5 + -3;
    puVar5[-2] = puVar5 + -1;
    if (lVar6 == 0) break;
    puVar5[-1] = puVar5;
    puVar5 = puVar5 + 4;
    lVar6 = lVar6 + -4;
  }
  param_1[0xafd2] = 0;
  param_1[0x753a] = param_1 + 0x753b;
  if (param_1 + 0xafd3 != (undefined8 *)0x0) {
    param_1[0x7538] = param_1 + 0xafd3;
    *(undefined4 *)((long)param_1 + 0x3a9bc) = 15000;
  }
  *(undefined4 *)(param_1 + 0x7537) = 0;
  FUN_02ce08e0(param_1 + 0xea6b);
  param_1[0xea7a] = 0;
  param_1[0xea78] = 0xffffffffffffffff;
  param_1[0xea7c] = 0;
  param_1[0xea7e] = 0;
  param_1[0xea80] = 0;
  param_1[0xea82] = 0;
  param_1[0xea8b] = 0;
  param_1[0xea89] = 0;
  param_1[0xea87] = 0;
  param_1[0xea79] = 0xfffe;
  param_1[0xea84] = 0;
  param_1[0xea86] = 0;
  param_1[0xea88] = 0;
  param_1[0xea8a] = 0;
  param_1[0xea8c] = 0;
  puVar9 = param_1 + 0xea85;
  *puVar9 = 0;
  puVar10 = param_1 + 0xea83;
  *puVar10 = 0;
  puVar11 = param_1 + 0xea81;
  *puVar11 = 0;
  puVar12 = param_1 + 0xea7f;
  *puVar12 = 0;
  puVar5 = param_1 + 0xea7d;
  *puVar5 = 0;
  puVar8 = param_1 + 0xea7b;
  *puVar8 = 0;
  FUN_0277d4ac();
  *puVar8 = 0xfffe;
  param_1[0xea7a] = &DAT_ffffffff00000006;
  FUN_0277d4ac(puVar8);
  param_1[0xea7c] = &DAT_ffffffff00000006;
  *puVar5 = 0xfffe;
  FUN_0277d4ac(puVar5);
  param_1[0xea7e] = &DAT_ffffffff00000006;
  *puVar12 = 0xfffe;
  FUN_0277d4ac(puVar12);
  param_1[0xea80] = &DAT_ffffffff00000006;
  *puVar11 = 0xfffe;
  FUN_0277d4ac(puVar11);
  param_1[0xea82] = &DAT_ffffffff00000006;
  *puVar10 = 0xfffe;
  FUN_0277d4ac(puVar10);
  param_1[0xea84] = &DAT_ffffffff00000006;
  *puVar9 = 0xfffe;
  FUN_0277d4ac(puVar9);
  param_1[0xea86] = &DAT_ffffffff00000006;
  param_1[0xea87] = 0xfffe;
  FUN_0277d4ac();
  param_1[0xea88] = &DAT_ffffffff00000006;
  param_1[0xea89] = 0xfffe;
  FUN_0277d4ac();
  param_1[0xea8a] = &DAT_ffffffff00000006;
  param_1[0xea8b] = 0xfffe;
  FUN_0277d4ac();
  puVar2 = PTR_DAT_04bbfe60;
  param_1[0xea8c] = &DAT_ffffffff00000006;
  plVar7 = param_1 + 0xea8d;
  *plVar7 = (long)(puVar2 + 0x10);
  memset(param_1 + 0xea8e,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x75bc4) = uVar3;
  *(uint *)(param_1 + 0xeb79) = uVar1;
  uVar3 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x75bcc) = uVar3;
  *(uint *)(param_1 + 0xeb7a) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)(**(code **)(*plVar7 + 0x18))(plVar7);
  memset(pvVar4,0,0x754);
  plVar7 = param_1 + 0xeb7b;
  *plVar7 = (long)(puVar2 + 0x10);
  memset(param_1 + 0xeb7c,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x76334) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec67) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x7633c) = uVar3;
  *(uint *)(param_1 + 0xec68) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)(**(code **)(*plVar7 + 0x18))(plVar7);
  memset(pvVar4,0,0x754);
  return;
}

