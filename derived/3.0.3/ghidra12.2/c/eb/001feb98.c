
long * FUN_001feb98(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar6 = (long *)FUN_00185a6c(0xa0);
  *(undefined2 *)(plVar6 + 1) = 0;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(PTR_DAT_04bc13b0 + 0x10);
  FUN_00186524(plVar1);
  *(undefined1 *)(plVar6 + 7) = 0;
  *(undefined1 *)(plVar6 + 0xc) = 0;
  puVar2 = PTR_DAT_04bc0ec8 + 0x10;
  plVar8 = plVar6 + 6;
  *plVar8 = (long)puVar2;
  plVar6[0xb] = (long)puVar2;
  plVar6[9] = (long)(plVar6 + 7);
  plVar6[10] = 0x10;
  plVar6[0xe] = (long)(plVar6 + 0xc);
  plVar6[0xf] = 0x10;
  *(undefined1 *)(plVar6 + 0x11) = 0;
  *(undefined4 *)((long)plVar6 + 0x8c) = 0;
  plVar6[0x12] = 0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  plVar6[0x10] = (long)&PTR_FUN_04a5a478;
  *plVar6 = (long)&PTR_LAB_0483e410;
  *(undefined8 *)((long)plVar6 + 0xc) = 0;
  plVar6[3] = 0;
  FUN_001865b0(plVar1,DAT_04c57e48);
  plVar6[5] = 0;
  FUN_0018a58c(plVar8,&DAT_0407ebb1);
  uVar5 = *(undefined1 *)(param_1 + 9);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(plVar6 + 0x11) = 0;
  *(undefined4 *)((long)plVar6 + 0x8c) = 0;
  plVar6[0x12] = 0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  *(undefined1 *)((long)plVar6 + 9) = uVar5;
  lVar7 = *(long *)(param_1 + 0x18);
  *(undefined4 *)((long)plVar6 + 0xc) = uVar3;
  *(undefined4 *)(plVar6 + 2) = uVar4;
  plVar6[3] = lVar7;
  FUN_001865b0(plVar1,param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((long)plVar6 + 0x2c) = uVar3;
  FUN_00189504(plVar8,param_1 + 0x30);
  FUN_00189504(plVar6 + 0xb,param_1 + 0x58);
  *(undefined1 *)(plVar6 + 0x11) = *(undefined1 *)(param_1 + 0x88);
  lVar7 = *(long *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((long)plVar6 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  plVar6[0x12] = lVar7;
  *(undefined4 *)(plVar6 + 0x13) = uVar3;
  return plVar6;
}

