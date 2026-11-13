
uint FUN_00efd724(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  undefined *local_30;
  char *pcStack_28;
  
  piVar5 = (int *)(param_1 + 4);
  lVar3 = param_1;
  if (*(int *)(param_1 + 0x20) == 0 || *piVar5 == 0) {
LAB_00efd778:
    uVar2 = (uint)lVar3;
    if ((*(int *)(param_1 + 0x610) != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "InducementFlag";
      iVar1 = FUN_02746e10(param_1 + 0x62c,&local_30);
      uVar2 = 0;
      if (iVar1 != 0) {
        piVar5 = (int *)(param_1 + 0x5f4);
        goto LAB_00efd950;
      }
    }
    if ((*(int *)(param_1 + 0xc00) != 0) && (*(int *)(param_1 + 0xbe4) != 0)) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "InducementFlag";
      iVar1 = FUN_02746e10(param_1 + 0xc1c,&local_30);
      uVar2 = 0;
      if (iVar1 != 0) {
        piVar5 = (int *)(param_1 + 0xbe4);
        goto LAB_00efd950;
      }
    }
    if ((*(int *)(param_1 + 0x11f0) == 0) || (*(int *)(param_1 + 0x11d4) == 0)) {
LAB_00efd83c:
      if ((*(int *)(param_1 + 0x17e0) != 0) && (*(int *)(param_1 + 0x17c4) != 0)) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "InducementFlag";
        iVar1 = FUN_02746e10(param_1 + 0x17fc,&local_30);
        uVar2 = 0;
        if (iVar1 != 0) {
          lVar3 = 0x17c4;
          goto LAB_00efd94c;
        }
      }
      if ((*(int *)(param_1 + 0x1dd0) != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "InducementFlag";
        iVar1 = FUN_02746e10(param_1 + 0x1dec,&local_30);
        uVar2 = 0;
        if (iVar1 != 0) {
          lVar3 = 0x1db4;
          goto LAB_00efd94c;
        }
      }
      if ((*(int *)(param_1 + 0x23c0) != 0) && (*(int *)(param_1 + 0x23a4) != 0)) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "InducementFlag";
        iVar1 = FUN_02746e10(param_1 + 0x23dc,&local_30);
        uVar2 = 0;
        if (iVar1 != 0) {
          lVar3 = 0x23a4;
          goto LAB_00efd94c;
        }
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0x29b0) != 0) {
        if (*(int *)(param_1 + 0x2994) == 0) goto LAB_00efd95c;
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "InducementFlag";
        iVar1 = FUN_02746e10(param_1 + 0x29cc,&local_30);
        if (iVar1 != 0) {
          lVar3 = 0x2994;
          goto LAB_00efd94c;
        }
        uVar2 = 0;
      }
      uVar4 = 0;
      goto LAB_00efd95c;
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "InducementFlag";
    iVar1 = FUN_02746e10(param_1 + 0x120c,&local_30);
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_00efd83c;
    lVar3 = 0x11d4;
LAB_00efd94c:
    piVar5 = (int *)(param_1 + lVar3);
  }
  else {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "InducementFlag";
    lVar3 = FUN_02746e10(param_1 + 0x3c,&local_30);
    if ((int)lVar3 == 0) goto LAB_00efd778;
  }
LAB_00efd950:
  uVar2 = FUN_026692d0(piVar5);
  uVar4 = 1;
LAB_00efd95c:
  return uVar4 & uVar2;
}

