
void FUN_02ce31c0(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_LAB_04ab8770;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined8 *)((long)param_1 + 0xc) = 0xffffffff00000000;
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  plVar6 = param_1 + 3;
  *plVar6 = (long)puVar1;
  memset(param_1 + 4,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x774) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xef) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x77c) = uVar2;
  *(uint *)(param_1 + 0xf0) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  pvVar3 = (void *)(**(code **)(*plVar6 + 0x18))(plVar6);
  memset(pvVar3,0,0x754);
  param_1[0xf1] = puVar1;
  memset(param_1 + 0xf2,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xee4) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x1dd) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xeec) = uVar2;
  *(uint *)(param_1 + 0x1de) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  pvVar3 = (void *)(**(code **)(param_1[0xf1] + 0x18))(param_1 + 0xf1);
  memset(pvVar3,0,0x754);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  param_1[0x1df] = 0xffffffff;
  puVar4 = param_1 + 0x1e9;
  lVar5 = 0x3a94;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = param_1 + 0x1e5;
  while( true ) {
    puVar4[-3] = puVar4 + -2;
    puVar4[-4] = puVar4 + -3;
    puVar4[-2] = puVar4 + -1;
    if (lVar5 == 0) break;
    puVar4[-1] = puVar4;
    puVar4 = puVar4 + 4;
    lVar5 = lVar5 + -4;
  }
  param_1[0x1e4] = param_1 + 0x1e5;
  param_1[0x3c7c] = 0;
  if (param_1 + 0x3c7d != (undefined8 *)0x0) {
    param_1[0x1e2] = param_1 + 0x3c7d;
    param_1[0x1e1] = 0x3a9800000000;
  }
  param_1[0x7715] = &PTR_LAB_04ab89e8;
  puVar4 = param_1 + 0x771e;
  lVar5 = 0x3a94;
  param_1[0x7717] = 0;
  param_1[0x7718] = param_1 + 0x771a;
  param_1[0x7716] = 0;
  while( true ) {
    puVar4[-3] = puVar4 + -2;
    puVar4[-4] = puVar4 + -3;
    puVar4[-2] = puVar4 + -1;
    if (lVar5 == 0) break;
    puVar4[-1] = puVar4;
    puVar4 = puVar4 + 4;
    lVar5 = lVar5 + -4;
  }
  param_1[0x7719] = param_1 + 0x771a;
  param_1[0xb1b1] = 0;
  if (param_1 + 0xb1b2 != (undefined8 *)0x0) {
    param_1[0x7717] = param_1 + 0xb1b2;
    *(undefined4 *)((long)param_1 + 0x3b8b4) = 15000;
  }
  *(undefined4 *)(param_1 + 0x7716) = 0;
  FUN_02ce08e0(param_1 + 0xec4a);
  param_1[0xec59] = 0;
  param_1[0xec57] = 0xffffffffffffffff;
  param_1[0xec5b] = 0;
  param_1[0xec5d] = 0;
  param_1[0xec5f] = 0;
  param_1[0xec61] = 0;
  param_1[0xec6a] = 0;
  param_1[0xec68] = 0;
  param_1[0xec58] = 0xfffe;
  param_1[0xec63] = 0;
  param_1[0xec65] = 0;
  param_1[0xec67] = 0;
  param_1[0xec69] = 0;
  param_1[0xec6b] = 0;
  puVar4 = param_1 + 0xec66;
  *puVar4 = 0;
  puVar7 = param_1 + 0xec64;
  *puVar7 = 0;
  puVar8 = param_1 + 0xec62;
  *puVar8 = 0;
  puVar9 = param_1 + 0xec60;
  *puVar9 = 0;
  puVar10 = param_1 + 0xec5e;
  *puVar10 = 0;
  puVar11 = param_1 + 0xec5c;
  *puVar11 = 0;
  puVar12 = param_1 + 0xec5a;
  *puVar12 = 0;
  FUN_0277d4ac();
  *puVar12 = 0xfffe;
  param_1[0xec59] = &DAT_ffffffff00000006;
  FUN_0277d4ac(puVar12);
  param_1[0xec5b] = &DAT_ffffffff00000006;
  *puVar11 = 0xfffe;
  FUN_0277d4ac(puVar11);
  param_1[0xec5d] = &DAT_ffffffff00000006;
  *puVar10 = 0xfffe;
  FUN_0277d4ac(puVar10);
  param_1[0xec5f] = &DAT_ffffffff00000006;
  *puVar9 = 0xfffe;
  FUN_0277d4ac(puVar9);
  param_1[0xec61] = &DAT_ffffffff00000006;
  *puVar8 = 0xfffe;
  FUN_0277d4ac(puVar8);
  param_1[0xec63] = &DAT_ffffffff00000006;
  *puVar7 = 0xfffe;
  FUN_0277d4ac(puVar7);
  param_1[0xec65] = &DAT_ffffffff00000006;
  *puVar4 = 0xfffe;
  FUN_0277d4ac(puVar4);
  param_1[0xec67] = &DAT_ffffffff00000006;
  param_1[0xec68] = 0xfffe;
  FUN_0277d4ac();
  param_1[0xec69] = &DAT_ffffffff00000006;
  param_1[0xec6a] = 0xfffe;
  FUN_0277d4ac();
  param_1[0xec6b] = &DAT_ffffffff00000006;
  return;
}

