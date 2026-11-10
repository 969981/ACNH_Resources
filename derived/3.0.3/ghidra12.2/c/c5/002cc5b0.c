
void FUN_002cc5b0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [112];
  
  *param_1 = (long)(PTR_DAT_04bce998 + 0x10);
  FUN_001abfd4(param_1 + 5);
  puVar2 = PTR_DAT_04bce9a0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = (long)(puVar2 + 0x10);
  param_1[6] = 0;
  FUN_0021f4e0(param_1 + 0xb);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar6 = param_1 + 0x13;
  *plVar6 = 0;
  param_1[0x14] = 0;
  FUN_002236b0(plVar6);
  plVar7 = param_1 + 0x16;
  *plVar7 = 0;
  param_1[0x17] = 0;
  FUN_002236b0(plVar7);
  lVar8 = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  lVar9 = 0x40;
  param_1[0x19] = (long)param_1 + 0xd4;
  *(undefined4 *)(param_1 + 0x1a) = 0x40;
  do {
    puVar1 = (undefined8 *)(param_1[0x19] + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_002236bc(plVar7,plVar7,(long)puVar1 + (long)*(int *)((long)param_1 + 0xc4));
    lVar9 = lVar9 + -1;
    lVar8 = lVar8 + 0x60;
  } while (lVar9 != 0);
  uVar3 = FUN_0021f454();
  plVar4 = (long *)FUN_00285d10(0x18,uVar3);
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)plVar4;
    plVar4[1] = (long)plVar4;
    plVar4[2] = 0;
  }
  param_1[1] = (long)plVar4;
  FUN_001b8014(auStack_b0);
  plVar5 = (long *)FUN_00187df4(0x80);
  *plVar5 = 0;
  FUN_001b8358(plVar5 + 2,auStack_b0);
  plVar5[1] = (long)plVar4;
  lVar8 = *plVar4;
  *plVar5 = lVar8;
  *(long **)(lVar8 + 8) = plVar5;
  *plVar4 = (long)plVar5;
  plVar4[2] = plVar4[2] + 1;
  FUN_001b8504(auStack_b0);
  uVar3 = FUN_0021f454();
  lVar8 = FUN_00285d10(0x70,uVar3);
  if (lVar8 != 0) {
    FUN_001b8014(lVar8);
  }
  param_1[2] = lVar8;
  uVar3 = FUN_0021f454();
  lVar8 = FUN_00285d10(0x90,uVar3);
  if (lVar8 != 0) {
    FUN_001e1500(lVar8);
  }
  param_1[3] = lVar8;
  uVar3 = FUN_0021f454();
  lVar8 = FUN_00285d10(0xc0,uVar3);
  if (lVar8 != 0) {
    FUN_001fb850(lVar8,0);
  }
  param_1[4] = lVar8;
  uVar3 = FUN_0021f454();
  lVar8 = FUN_00285d10(0xc0,uVar3);
  if (lVar8 != 0) {
    FUN_001fb850(lVar8,0);
  }
  param_1[9] = lVar8;
  uVar3 = FUN_0021f454();
  lVar8 = FUN_00285d10(0x48,uVar3);
  if (lVar8 != 0) {
    FUN_00186524(lVar8 + 8);
    *(undefined1 *)(lVar8 + 0x18) = 0;
    *(undefined1 **)(lVar8 + 0x28) = (undefined1 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 0x30) = 0x10;
    *(undefined2 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x3c) = 0;
    *(undefined ***)(lVar8 + 0x10) = &PTR_LAB_04a426b8;
    *(undefined4 *)(lVar8 + 0x44) = 0xffffffff;
  }
  param_1[10] = lVar8;
  param_1[7] = (long)param_1;
  param_1[8] = param_1[4];
  FUN_0021fed4(param_1 + 0xb);
  plVar4 = (long *)param_1[0x14];
  while (plVar4 != plVar6) {
    plVar5 = (long *)plVar4[1];
    *plVar4 = 0;
    plVar4[1] = 0;
    FUN_002236e0(plVar7,plVar7,(long)*(int *)((long)param_1 + 0xc4) + (long)plVar4);
    plVar4 = plVar5;
  }
  FUN_002236b0(plVar6);
  return;
}

