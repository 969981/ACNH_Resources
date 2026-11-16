
undefined8 FUN_026b0f90(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined **local_50;
  char *pcStack_48;
  
  iVar3 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x2f84 + (long)iVar3 * 0x158);
    if (piVar2[7] != 0 && *piVar2 != 0) {
      local_50 = &PTR_LAB_048f9770;
      pcStack_48 = "InducementAtMovingDay";
      iVar1 = FUN_02746e10(param_1 + 0x2f84 + (long)iVar3 * 0x158 + 0x38,&local_50);
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xa0);
  return 0;
}

