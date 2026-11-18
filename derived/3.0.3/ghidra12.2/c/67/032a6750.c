
void FUN_032a6750(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *local_e0;
  char *local_d8;
  undefined **local_a8;
  undefined ***local_a0;
  undefined **local_98 [4];
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  
  local_a0 = local_98;
  local_98[0] = &PTR_LAB_04b19bb8;
  local_a8 = &PTR_LAB_04b19aa8;
  FUN_032abe00(*(undefined8 *)(param_1 + 0x70));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0x78));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0x80));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0x88));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0x90));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0x98));
  (*(code *)(*local_a0)[4])(local_a0,*(undefined8 *)(param_1 + 0xa0));
  if (local_a0 != (undefined ***)0x0) {
    (*(code *)(*local_a0)[1])();
  }
  puVar2 = PTR_DAT_04bb2120;
  puVar10 = (undefined4 *)(param_1 + 0xf8);
  *puVar10 = 0;
  puVar5 = PTR_DAT_04bc8f38;
  puVar4 = PTR_DAT_04bc8f30;
  puVar3 = PTR_DAT_04bc8e68;
  iVar7 = 0;
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  do {
    FUN_006d8678(&local_e0,"L_Btn_%02d",iVar7);
    (*(code *)local_e0[3])(&local_e0);
    local_78 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    local_68 = puVar2;
    if (local_d8 != (undefined *)0x0) {
      local_68 = local_d8;
    }
    local_70 = puVar1;
    plVar8 = (long *)FUN_032d3050(&local_78,local_78,&local_70);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
      *(undefined8 *)puVar4 = 0;
      __cxa_guard_release(puVar5);
    }
    if (plVar8 == (long *)0x0) {
LAB_032a68f4:
      plVar8 = (long *)0x0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
      if (puVar9 != (undefined8 *)puVar4) {
        do {
          puVar9 = (undefined8 *)*puVar9;
        } while (puVar9 != (undefined8 *)puVar4 && puVar9 != (undefined8 *)0x0);
        if (puVar9 == (undefined8 *)0x0) goto LAB_032a68f4;
      }
    }
    if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
      *(long **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = plVar8;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 7);
  local_e0 = (long *)(puVar3 + 0x10);
  local_70 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x18);
  local_d8 = "N_BtnWrp";
  plVar8 = (long *)FUN_032d3050(&local_70,local_70,&local_e0);
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
    *(undefined8 *)puVar4 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (puVar9 == (undefined8 *)puVar4) goto LAB_032a69a8;
    do {
      puVar9 = (undefined8 *)*puVar9;
    } while (puVar9 != (undefined8 *)puVar4 && puVar9 != (undefined8 *)0x0);
    if (puVar9 != (undefined8 *)0x0) goto LAB_032a69a8;
  }
  plVar8 = (long *)0x0;
LAB_032a69a8:
  local_d8 = (char *)CONCAT44(local_d8._4_4_,3);
  local_e0 = plVar8;
  FUN_032d5bf0(&local_e0,puVar10,1,0xffffffff);
  *puVar10 = 0;
  return;
}

