
void FUN_01718384(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_049bdbb8;
  puVar2 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  param_1[0x13] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x19]);
  if (((uVar3 & 1) != 0) && (pvVar6 = (void *)param_1[0x19], pvVar6 != (void *)0x0)) {
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
  lVar5 = *(long *)puVar2;
  param_1[0x19] = 0;
  param_1[0xc] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x12]);
  if (((uVar3 & 1) != 0) && (pvVar6 = (void *)param_1[0x12], pvVar6 != (void *)0x0)) {
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
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xb] = 0;
  param_1[6] = puVar1 + 0x10;
  return;
}

