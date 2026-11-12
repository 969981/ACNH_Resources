
void FUN_0099c370(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_0492b768;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x19] = 0;
  param_1[0x1a] = &PTR_LAB_0492b8c8;
  param_1[0x14] = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  param_1[0xd] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x13]);
  if (((uVar3 & 1) != 0) && (pvVar6 = (void *)param_1[0x13], pvVar6 != (void *)0x0)) {
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
  param_1[0x13] = 0;
  param_1[6] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0xc]);
  if (((uVar3 & 1) != 0) && (pvVar6 = (void *)param_1[0xc], pvVar6 != (void *)0x0)) {
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
  param_1[0xc] = 0;
  return;
}

