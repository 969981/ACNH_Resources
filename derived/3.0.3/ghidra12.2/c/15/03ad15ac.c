
void FUN_03ad15ac(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x11];
  *param_1 = &PTR_FUN_04b713d8;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      FUN_003a2220(param_1 + 1,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
      pvVar4 = (void *)param_1[0x11];
      if (pvVar4 == (void *)0x0) goto LAB_03ad1628;
    }
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      pvVar4 = (void *)param_1[0x17];
      goto joined_r0x03ad1670;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
LAB_03ad1628:
  pvVar4 = (void *)param_1[0x17];
joined_r0x03ad1670:
  if (pvVar4 != (void *)0x0) {
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  FUN_003490c0(param_1 + 0x20);
  param_1[0x19] = &PTR_LAB_048fc348;
  FUN_038f4940(param_1 + 0x19);
  return;
}

