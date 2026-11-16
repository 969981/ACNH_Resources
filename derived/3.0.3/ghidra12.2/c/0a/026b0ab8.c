
void FUN_026b0ab8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined *local_60;
  char *pcStack_58;
  
  bVar4 = false;
  *(undefined1 *)(param_1 + 0x12679) = 0;
  if (*(int *)(param_1 + 0x20) == 0 || *(int *)(param_1 + 4) == 0) {
LAB_026b0b5c:
    iVar5 = *(int *)(param_1 + 0x610);
    puVar2 = PTR_DAT_04bb2020;
  }
  else {
    lVar1 = param_1 + 0x3c;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "InducementFlag";
    local_60 = puVar2;
    FUN_02747170(lVar1,&local_60,0);
    pcStack_58 = "InducementAtMovingDay";
    local_60 = puVar2;
    iVar5 = FUN_02746e10(lVar1,&local_60);
    if (iVar5 != 0) {
      pcStack_58 = "InducementFlag";
      bVar4 = true;
      local_60 = puVar2;
      FUN_02747170(lVar1,&local_60,1);
      goto LAB_026b0b5c;
    }
    bVar4 = false;
    iVar5 = *(int *)(param_1 + 0x610);
    puVar2 = PTR_DAT_04bb2020;
  }
  PTR_DAT_04bb2020 = puVar2;
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
    lVar1 = param_1 + 0x62c;
    pcStack_58 = "InducementFlag";
    local_60 = puVar2 + 0x10;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      pcStack_58 = "InducementAtMovingDay";
      local_60 = puVar2 + 0x10;
      iVar5 = FUN_02746e10(lVar1,&local_60);
      if (iVar5 == 0) {
        bVar4 = false;
      }
      else {
        local_60 = puVar2 + 0x10;
        pcStack_58 = "InducementFlag";
        bVar4 = true;
        FUN_02747170(lVar1,&local_60,1);
      }
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(param_1 + 0xc00) == 0) || (*(int *)(param_1 + 0xbe4) == 0)) {
LAB_026b0c7c:
    iVar5 = *(int *)(param_1 + 0x11f0);
    puVar2 = PTR_DAT_04bb2020;
  }
  else {
    lVar1 = param_1 + 0xc1c;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "InducementFlag";
    local_60 = puVar3;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
      iVar5 = *(int *)(param_1 + 0x11f0);
      puVar2 = PTR_DAT_04bb2020;
    }
    else {
      pcStack_58 = "InducementAtMovingDay";
      local_60 = puVar3;
      iVar5 = FUN_02746e10(lVar1,&local_60);
      if (iVar5 != 0) {
        local_60 = puVar2 + 0x10;
        pcStack_58 = "InducementFlag";
        bVar4 = true;
        FUN_02747170(lVar1,&local_60,1);
        goto LAB_026b0c7c;
      }
      bVar4 = false;
      iVar5 = *(int *)(param_1 + 0x11f0);
      puVar2 = PTR_DAT_04bb2020;
    }
  }
  PTR_DAT_04bb2020 = puVar2;
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x11d4) != 0)) {
    lVar1 = param_1 + 0x120c;
    pcStack_58 = "InducementFlag";
    local_60 = puVar2 + 0x10;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      pcStack_58 = "InducementAtMovingDay";
      local_60 = puVar2 + 0x10;
      iVar5 = FUN_02746e10(lVar1,&local_60);
      if (iVar5 == 0) {
        bVar4 = false;
      }
      else {
        local_60 = puVar2 + 0x10;
        pcStack_58 = "InducementFlag";
        bVar4 = true;
        FUN_02747170(lVar1,&local_60,1);
      }
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(param_1 + 0x17e0) == 0) || (*(int *)(param_1 + 0x17c4) == 0)) {
LAB_026b0da4:
    iVar5 = *(int *)(param_1 + 0x1dd0);
    puVar2 = PTR_DAT_04bb2020;
  }
  else {
    lVar1 = param_1 + 0x17fc;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "InducementFlag";
    local_60 = puVar3;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
      iVar5 = *(int *)(param_1 + 0x1dd0);
      puVar2 = PTR_DAT_04bb2020;
    }
    else {
      pcStack_58 = "InducementAtMovingDay";
      local_60 = puVar3;
      iVar5 = FUN_02746e10(lVar1,&local_60);
      if (iVar5 != 0) {
        local_60 = puVar2 + 0x10;
        pcStack_58 = "InducementFlag";
        bVar4 = true;
        FUN_02747170(lVar1,&local_60,1);
        goto LAB_026b0da4;
      }
      bVar4 = false;
      iVar5 = *(int *)(param_1 + 0x1dd0);
      puVar2 = PTR_DAT_04bb2020;
    }
  }
  PTR_DAT_04bb2020 = puVar2;
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x1db4) != 0)) {
    lVar1 = param_1 + 0x1dec;
    pcStack_58 = "InducementFlag";
    local_60 = puVar2 + 0x10;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      pcStack_58 = "InducementAtMovingDay";
      local_60 = puVar2 + 0x10;
      iVar5 = FUN_02746e10(lVar1,&local_60);
      if (iVar5 == 0) {
        bVar4 = false;
      }
      else {
        local_60 = puVar2 + 0x10;
        pcStack_58 = "InducementFlag";
        bVar4 = true;
        FUN_02747170(lVar1,&local_60,1);
      }
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(param_1 + 0x23c0) == 0) || (*(int *)(param_1 + 0x23a4) == 0)) {
LAB_026b0e88:
    iVar5 = *(int *)(param_1 + 0x29b0);
joined_r0x026b0e8c:
    if ((iVar5 == 0) || (*(int *)(param_1 + 0x2994) == 0)) {
      if (!bVar4) {
        return;
      }
      goto LAB_026b0f48;
    }
  }
  else {
    lVar1 = param_1 + 0x23dc;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "InducementFlag";
    local_60 = puVar3;
    FUN_02747170(lVar1,&local_60,0);
    if (bVar4) {
      bVar4 = true;
      goto LAB_026b0e88;
    }
    pcStack_58 = "InducementAtMovingDay";
    local_60 = puVar3;
    iVar5 = FUN_02746e10(lVar1,&local_60);
    if (iVar5 != 0) {
      local_60 = puVar2 + 0x10;
      pcStack_58 = "InducementFlag";
      bVar4 = true;
      FUN_02747170(lVar1,&local_60,1);
      iVar5 = *(int *)(param_1 + 0x29b0);
      goto joined_r0x026b0e8c;
    }
    if (*(int *)(param_1 + 0x29b0) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2994) == 0) {
      return;
    }
    bVar4 = false;
  }
  puVar3 = PTR_DAT_04bb2020;
  lVar1 = param_1 + 0x29cc;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "InducementFlag";
  local_60 = puVar2;
  FUN_02747170(lVar1,&local_60,0);
  if (!bVar4) {
    pcStack_58 = "InducementAtMovingDay";
    local_60 = puVar2;
    iVar5 = FUN_02746e10(lVar1,&local_60);
    if (iVar5 == 0) {
      return;
    }
    local_60 = puVar3 + 0x10;
    pcStack_58 = "InducementFlag";
    FUN_02747170(lVar1,&local_60,1);
  }
LAB_026b0f48:
  *(undefined1 *)(param_1 + 0x12679) = 1;
  return;
}

