
void FUN_03bcd3a4(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  *param_1 = &PTR_LAB_04b7aec0;
  puVar4 = param_1 + 2;
  *puVar4 = &PTR_LAB_04b7af00;
  uVar2 = FUN_003b82fc(puVar4);
  if ((uVar2 & 1) != 0) {
    FUN_003e4a04(puVar4);
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0xc5];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0xc5] = 0;
  }
  pvVar5 = (void *)param_1[0xc6];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0xc6] = 0;
  }
  FUN_003e496c(puVar4);
  return;
}

