
void FUN_00768b94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  
  *param_1 = &PTR_FUN_04909538;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x3e] = &PTR_LAB_049096a0;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x45]);
  if (((uVar4 & 1) != 0) && (pvVar5 = (void *)param_1[0x45], pvVar5 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x45] = 0;
  param_1[0x3d] = 0;
  param_1[0x32] = PTR_DAT_04bb3380 + 0x10;
  param_1[0x37] = 0;
  param_1[0x38] = puVar2 + 0x10;
  param_1[0x2b] = PTR_DAT_04bb2fe8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x31]);
  if (((uVar4 & 1) != 0) && (pvVar5 = (void *)param_1[0x31], pvVar5 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  param_1[0x31] = 0;
  return;
}

