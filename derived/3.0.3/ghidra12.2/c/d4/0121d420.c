
undefined8 FUN_0121d420(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_30;
  char *pcStack_28;
  undefined4 local_4;
  
  puVar1 = PTR_DAT_04bb46b0;
  local_4 = 0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
LAB_0121d4bc:
    local_4 = 2;
    if (*(long *)puVar1 == 0) {
LAB_0121d544:
      local_4 = 4;
      if (*(long *)puVar1 == 0) goto LAB_0121d5cc;
      lVar3 = FUN_026eec4c(*(long *)puVar1,4);
      if (lVar3 != 0) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "UnlockInterior_CeilingFurniture";
        iVar2 = FUN_0274ce10(&local_4,&local_30);
        if (iVar2 != 0) goto LAB_0121d654;
      }
      local_4 = 5;
      if (*(long *)puVar1 != 0) {
        lVar3 = FUN_026eec4c(*(long *)puVar1,5);
        if (lVar3 != 0) {
          local_30 = PTR_DAT_04bb2020 + 0x10;
          pcStack_28 = "UnlockInterior_CeilingFurniture";
          iVar2 = FUN_0274ce10(&local_4,&local_30);
          if (iVar2 != 0) goto LAB_0121d654;
        }
        goto LAB_0121d5cc;
      }
    }
    else {
      lVar3 = FUN_026eec4c(*(long *)puVar1,2);
      if (lVar3 != 0) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "UnlockInterior_CeilingFurniture";
        iVar2 = FUN_0274ce10(&local_4,&local_30);
        if (iVar2 != 0) goto LAB_0121d654;
      }
      local_4 = 3;
      if (*(long *)puVar1 != 0) {
        lVar3 = FUN_026eec4c(*(long *)puVar1,3);
        if (lVar3 != 0) {
          local_30 = PTR_DAT_04bb2020 + 0x10;
          pcStack_28 = "UnlockInterior_CeilingFurniture";
          iVar2 = FUN_0274ce10(&local_4,&local_30);
          if (iVar2 != 0) goto LAB_0121d654;
        }
        goto LAB_0121d544;
      }
LAB_0121d5cc:
      local_4 = 6;
      if (*(long *)puVar1 != 0) {
        lVar3 = FUN_026eec4c(*(long *)puVar1,6);
        if (lVar3 != 0) {
          local_30 = PTR_DAT_04bb2020 + 0x10;
          pcStack_28 = "UnlockInterior_CeilingFurniture";
          iVar2 = FUN_0274ce10(&local_4,&local_30);
          if (iVar2 != 0) goto LAB_0121d654;
        }
        local_4 = 7;
        if ((*(long *)puVar1 != 0) && (lVar3 = FUN_026eec4c(*(long *)puVar1,7), lVar3 != 0)) {
          local_30 = PTR_DAT_04bb2020 + 0x10;
          pcStack_28 = "UnlockInterior_CeilingFurniture";
          iVar2 = FUN_0274ce10(&local_4,&local_30);
          if (iVar2 != 0) goto LAB_0121d654;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
    if (lVar3 == 0) {
LAB_0121d478:
      local_4 = 1;
      if (*(long *)puVar1 != 0) {
        lVar3 = FUN_026eec4c(*(long *)puVar1,1);
        if (lVar3 != 0) {
          local_30 = PTR_DAT_04bb2020 + 0x10;
          pcStack_28 = "UnlockInterior_CeilingFurniture";
          iVar2 = FUN_0274ce10(&local_4,&local_30);
          if (iVar2 != 0) goto LAB_0121d654;
        }
        goto LAB_0121d4bc;
      }
      goto LAB_0121d544;
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "UnlockInterior_CeilingFurniture";
    iVar2 = FUN_0274ce10(&local_4,&local_30);
    if (iVar2 == 0) goto LAB_0121d478;
LAB_0121d654:
    uVar4 = 1;
  }
  return uVar4;
}

