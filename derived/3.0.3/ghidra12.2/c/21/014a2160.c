
void FUN_014a2160(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  plVar1 = param_1 + 0x2de3;
  FUN_00705c50();
  param_1[0x4f] = 0;
  *param_1 = &PTR_LAB_049a5ce0;
  param_1[0x52] = param_1 + 0x51;
  param_1[0x51] = param_1 + 0x51;
  puVar13 = param_1 + 0x5d;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = param_1 + 0x57;
  for (lVar14 = 0xc6; puVar13[-6] = puVar13 + -3, lVar14 != 0; lVar14 = lVar14 + -2) {
    puVar13[-3] = puVar13;
    puVar13 = puVar13 + 6;
  }
  param_1[0x55] = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x56) = 200;
  param_1[0x2ac] = 0;
  param_1[0x2b0] = param_1 + 0x2af;
  param_1[0x2af] = param_1 + 0x2af;
  puVar13 = param_1 + 0x2e1;
  *(undefined4 *)(param_1 + 0x2b1) = 0;
  param_1[0x2b2] = param_1 + 0x2b5;
  for (lVar14 = 0x1f2; puVar13[-0x2c] = puVar13 + -0x16, lVar14 != 0; lVar14 = lVar14 + -2) {
    puVar13[-0x16] = puVar13;
    puVar13 = puVar13 + 0x2c;
  }
  param_1[0x2d97] = 0;
  param_1[0x2b3] = param_1 + 0x2b5;
  puVar2 = PTR_DAT_04bb2010;
  param_1[0x2db1] = 0;
  puVar3 = PTR_DAT_04bbbb90;
  *(undefined4 *)(param_1 + 0x2b4) = 500;
  *(undefined4 *)(param_1 + 0x2db2) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x2db8) = 0;
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x2dbe) = 0;
  param_1[0x2dc3] = 0;
  param_1[0x2db3] = puVar3;
  param_1[0x2db9] = puVar3;
  param_1[0x2dad] = puVar3;
  param_1[0x2dae] = puVar2;
  param_1[0x2daf] = 0;
  param_1[0x2db0] = puVar2;
  param_1[0x2db6] = puVar2;
  param_1[0x2db7] = 0;
  param_1[0x2db4] = puVar2;
  param_1[0x2db5] = 0;
  param_1[0x2dbc] = puVar2;
  param_1[0x2dbd] = 0;
  param_1[0x2dba] = puVar2;
  param_1[0x2dbb] = 0;
  param_1[0x2dbf] = 0;
  param_1[0x2dc0] = 0;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined4 *)(param_1 + 0x2dca) = 0;
  param_1[0x2dc1] = puVar2;
  param_1[0x2dc2] = 0;
  param_1[0x2dc4] = 0;
  param_1[0x2dc5] = puVar3;
  param_1[0x2dc6] = puVar2;
  param_1[0x2dc7] = 0;
  param_1[0x2dc8] = puVar2;
  param_1[0x2dc9] = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Ftr";
  pcStack_58 = "DynamicGenerateParams";
  local_98 = puVar2;
  local_60 = puVar2;
  FUN_00751ec0(param_1 + 0x2dcb,&local_98,&local_60,0);
  local_68 = 0;
  puStack_80 = &DAT_04076e71;
  puStack_70 = &DAT_0407ebb1;
  param_1[0x2dcb] = &PTR_LAB_049a5de8;
  *(undefined4 *)(param_1 + 0x2de7) = 0;
  pcStack_90 = "mParams";
  param_1[0x2de5] = 0;
  param_1[0x2de6] = 0;
  puVar3 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x2de8] = 0;
  *plVar1 = (long)puVar3;
  param_1[0x2de4] = "mParams";
  plVar16 = param_1 + 0x2dd0;
  lVar14 = *plVar16;
  if (*plVar16 != 0) {
    do {
      lVar12 = lVar14;
      lVar14 = *(long *)(lVar12 + 0x10);
    } while (lVar14 != 0);
    plVar16 = (long *)(lVar12 + 0x10);
  }
  *plVar16 = (long)plVar1;
  param_1[0x2ed2] = 0;
  plVar16 = param_1 + 0x2dee;
  *plVar16 = (long)(param_1 + 0x2ed2);
  param_1[0x2de6] = param_1 + 0x2dcb;
  param_1[0x2de9] = 0;
  param_1[0x2dea] = 0;
  param_1[0x2deb] = 0;
  param_1[0x2dec] = plVar16;
  param_1[0x2ded] = plVar16;
  local_88 = puVar2;
  local_78 = puVar2;
  if (param_1 + 0x2fb6 == (undefined8 *)0x0) {
    *plVar1 = (long)&PTR_LAB_049a60d8;
    plVar16 = (long *)0x0;
    local_98 = puVar2;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x16f54) = 2;
    *plVar1 = (long)&PTR_LAB_049a60d8;
    param_1[0x2deb] = param_1 + 0x2fb6;
    param_1[0x2dec] = param_1 + 0x2ed2;
    local_98 = puVar2;
    FUN_014a6d20(plVar16,&local_98);
    param_1[0x2dee] = &PTR_LAB_049a6258;
    if (*(int *)(param_1 + 0x2dea) < *(int *)((long)param_1 + 0x16f54)) {
      *(long **)(param_1[0x2deb] + (long)*(int *)(param_1 + 0x2dea) * 8) = plVar16;
      *(int *)(param_1 + 0x2dea) = *(int *)(param_1 + 0x2dea) + 1;
    }
  }
  (**(code **)(*plVar16 + 0x38))(plVar16,plVar1);
  *(uint *)(plVar16 + 4) = *(uint *)(plVar16 + 4) & 0xfffffffc;
  if (*(int *)(param_1 + 0x2dea) < *(int *)((long)param_1 + 0x16f54)) {
    plVar16 = (long *)param_1[0x2dec];
    if (plVar16 != (long *)0x0) {
      param_1[0x2dec] = *plVar16;
    }
    FUN_014a6d20(plVar16,&local_98);
    *plVar16 = (long)&PTR_LAB_049a6258;
    if (*(int *)(param_1 + 0x2dea) < *(int *)((long)param_1 + 0x16f54)) {
      *(long **)(param_1[0x2deb] + (long)*(int *)(param_1 + 0x2dea) * 8) = plVar16;
      *(int *)(param_1 + 0x2dea) = *(int *)(param_1 + 0x2dea) + 1;
    }
  }
  else {
    plVar16 = (long *)0x0;
  }
  (**(code **)(*plVar16 + 0x38))(plVar16,plVar1);
  *(uint *)(plVar16 + 4) = *(uint *)(plVar16 + 4) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x2fb8) = 0;
  puVar2 = PTR_DAT_04bb2f80;
  *(undefined8 *)((long)param_1 + 0x17dc4) = 2;
  *(undefined1 *)((long)param_1 + 0x17dcc) = 0;
  uVar15 = *(undefined8 *)(puVar2 + 0x10);
  uVar6 = *(undefined8 *)(puVar2 + 0x18);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  uVar7 = *(undefined8 *)(puVar2 + 0x28);
  uVar5 = *(undefined8 *)puVar2;
  uVar8 = *(undefined8 *)(puVar2 + 8);
  param_1[0x2fbc] = uVar15;
  param_1[0x2fbd] = uVar6;
  param_1[0x2fbe] = uVar4;
  param_1[0x2fbf] = uVar7;
  param_1[0x2fba] = uVar5;
  param_1[0x2fbb] = uVar8;
  param_1[0x2fc2] = uVar15;
  param_1[0x2fc3] = uVar6;
  param_1[0x2fc0] = uVar5;
  param_1[0x2fc1] = uVar8;
  param_1[0x2fc4] = uVar4;
  param_1[0x2fc5] = uVar7;
  puVar2 = PTR_DAT_04bbd558;
  uVar15 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x20);
  uVar7 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x28);
  *(undefined4 *)(param_1 + 0x2fda) = 0;
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  uVar8 = *(undefined8 *)(puVar2 + 0x38);
  uVar5 = *(undefined8 *)puVar2;
  uVar9 = *(undefined8 *)(puVar2 + 8);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  uVar10 = *(undefined8 *)(puVar2 + 0x18);
  param_1[0x2fc8] = uVar6;
  param_1[0x2fc9] = uVar10;
  param_1[0x2fd0] = uVar6;
  param_1[0x2fd1] = uVar10;
  param_1[0x2fca] = uVar15;
  param_1[0x2fcb] = uVar7;
  param_1[0x2fd2] = uVar15;
  param_1[0x2fd3] = uVar7;
  param_1[0x2fd6] = 0x447a00003f800000;
  param_1[0x2fd7] = 0x3fe38e393f490fdb;
  param_1[0x2fcc] = uVar4;
  param_1[0x2fcd] = uVar8;
  param_1[0x2fd8] = &DAT_3f8000003f800000;
  param_1[0x2fd9] = 0x3f800000;
  param_1[0x2fc6] = uVar5;
  param_1[0x2fc7] = uVar9;
  param_1[0x2fce] = uVar5;
  param_1[0x2fcf] = uVar9;
  param_1[0x2fd4] = uVar4;
  param_1[0x2fd5] = uVar8;
  uVar11 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
  uVar15 = *(undefined8 *)PTR_DAT_04bb4bc8;
  *(undefined4 *)(param_1 + 0x2ff0) = 0;
  *(undefined4 *)(param_1 + 0x2ff2) = 0;
  *(undefined4 *)(param_1 + 0x2ff4) = 0;
  *(undefined4 *)(param_1 + 0x2ff6) = 0;
  *(undefined4 *)(param_1 + 0x2ff8) = 0;
  *(undefined4 *)(param_1 + 0x2ffa) = 0;
  *(undefined1 *)((long)param_1 + 0x18004) = 0;
  *(undefined1 *)(param_1 + 0x3001) = 0;
  *(undefined4 *)(param_1 + 0x2dc3) = 0;
  *(undefined4 *)((long)param_1 + 0x17f7c) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17f74) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17f8c) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17f84) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17f9c) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17f94) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17fac) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17fa4) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17fbc) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17fb4) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17fcc) = uVar11;
  *(undefined8 *)((long)param_1 + 0x17fc4) = uVar15;
  *(undefined8 *)((long)param_1 + 0x17fd4) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x17fdc) = 0xff7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x17fe4) = 0xff7fffffff7fffff;
  *(undefined8 *)((long)param_1 + 0x17fec) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x17ff4) = 0xff7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x17ffc) = 0xff7fffffff7fffff;
  return;
}

