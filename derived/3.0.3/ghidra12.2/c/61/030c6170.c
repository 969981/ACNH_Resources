
void FUN_030c6170(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0xa1];
  if (pvVar4 != (void *)0x0) {
    FUN_03d4af00(pvVar4);
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
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  pvVar4 = (void *)param_1[0x3b];
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
  FUN_03c5ce30(param_1);
  return;
}

