
undefined8 FUN_00c01e28(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **local_20;
  char *pcStack_18;
  
  if (*(char *)(param_1 + 0x110) != '\0') {
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    local_20 = &PTR_LAB_048f9770;
    pcStack_18 = "CafeNpcTakeoutPrepare";
    iVar2 = FUN_02753180(puVar1,&local_20);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}

