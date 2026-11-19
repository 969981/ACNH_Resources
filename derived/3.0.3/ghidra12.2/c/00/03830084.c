
void FUN_03830084(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined1 local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03f45838(param_1 + 0x10);
  }
  puVar2 = PTR_DAT_04bcb2c0;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    local_96 = 1;
    local_98 = 1;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    puStack_58 = PTR_DAT_04bb2120;
    lVar4 = *(long *)PTR_DAT_04bb28b0;
    *(undefined8 *)(param_1 + 8) = 0;
    local_50 = 0;
    local_48 = 0;
    local_a0 = puVar2 + 0x10;
    local_38 = 0;
    local_80 = lVar4 + 0x598;
    uStack_78 = 0;
    lStack_68 = lVar4 + 0x5b8;
    local_70 = 0;
    local_90 = *(undefined8 *)(lVar4 + 0x198);
    uStack_88 = 0;
    local_b8 = 0;
    local_28 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_b0 = &local_a0;
    uStack_a8 = 0;
    lStack_40 = lVar3;
    puStack_30 = local_60;
    FUN_03f45184(lVar4 + 0x1a8,&local_b8);
  }
  FUN_03f45838(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  iVar1 = *(int *)(param_1 + 0x1c) + -1;
  if (((*(int *)(param_1 + 0x1c) < 1) || (*(int *)(param_1 + 0x1c) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_03f44508();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x038301a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}

