
void FUN_01605328(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_049b1ff8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x58] = 0;
  param_1[0x52] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x53] = puVar1;
  param_1[0x4d] = puVar1;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x46] = PTR_DAT_04bb2fe8 + 0x10;
  plVar4 = *(long **)(*(long *)puVar3 + 0x330);
  uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,param_1[0x4c]);
  if (((uVar5 & 1) != 0) && (pvVar6 = (void *)param_1[0x4c], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  param_1[0x4c] = 0;
  param_1[0x45] = 0;
  puVar2 = PTR_DAT_04bbd520 + 0x10;
  param_1[0x33] = puVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = puVar1;
  param_1[0x38] = 0;
  param_1[0x39] = puVar2;
  param_1[0x2b] = PTR_DAT_04bb3550 + 0x10;
  plVar4 = *(long **)(*(long *)puVar3 + 0x330);
  uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,param_1[0x32]);
  if (((uVar5 & 1) != 0) && (pvVar6 = (void *)param_1[0x32], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  param_1[0x32] = 0;
  return;
}

