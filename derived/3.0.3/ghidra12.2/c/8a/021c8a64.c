
void FUN_021c8a64(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MuseumCafeExitTime";
    iVar2 = FUN_027490f0(0,&local_40);
    if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0xaa0) + 4) == 0x21)) {
      FUN_0214eb90(param_1 + 0x8b0,0,1);
      pcStack_38 = "MuseumCafeExitTime";
      local_40 = puVar1 + 0x10;
      FUN_027490f0(0,&local_40);
      uVar3 = FUN_021c7440();
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        pcStack_38 = "MuseumCafeExitTime";
        local_40 = puVar1 + 0x10;
        FUN_027494ac(0,&local_40,1);
        uVar5 = 0;
      }
      goto LAB_021c8f80;
    }
  }
  if (*(char *)(param_1 + 0x1699) == '\0') {
LAB_021c8b9c:
    if (*(char *)(param_1 + 0x2239) != '\0') {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "MuseumCafeExitTime";
      iVar2 = FUN_027490f0(2,&local_40);
      if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x21e0) + 4) == 0x21)) {
        uVar5 = 2;
        FUN_0214eb90(param_1 + 0x1ff0,2,1);
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        FUN_027490f0(2,&local_40);
        uVar3 = FUN_021c7440();
        goto joined_r0x021c8c90;
      }
    }
    if (*(char *)(param_1 + 0x2dd9) != '\0') {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "MuseumCafeExitTime";
      iVar2 = FUN_027490f0(3,&local_40);
      if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x2d80) + 4) == 0x21)) {
        uVar5 = 3;
        FUN_0214eb90(param_1 + 0x2b90,3,1);
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        FUN_027490f0(3,&local_40);
        uVar3 = FUN_021c7440();
        goto joined_r0x021c8c90;
      }
    }
    if (*(char *)(param_1 + 0x3979) != '\0') {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "MuseumCafeExitTime";
      iVar2 = FUN_027490f0(4,&local_40);
      if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x3920) + 4) == 0x21)) {
        uVar5 = 4;
        FUN_0214eb90(param_1 + 0x3730,4,1);
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        FUN_027490f0(4,&local_40);
        uVar3 = FUN_021c7440();
        goto joined_r0x021c8c90;
      }
    }
    if (*(char *)(param_1 + 0x4519) == '\0') {
LAB_021c8d6c:
      if (*(char *)(param_1 + 0x50b9) != '\0') {
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        iVar2 = FUN_027490f0(6,&local_40);
        if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x5060) + 4) == 0x21)) {
          uVar5 = 6;
          FUN_0214eb90(param_1 + 0x4e70,6,1);
          local_40 = puVar1 + 0x10;
          pcStack_38 = "MuseumCafeExitTime";
          FUN_027490f0(6,&local_40);
          uVar3 = FUN_021c7440();
          goto joined_r0x021c8c90;
        }
      }
      if (*(char *)(param_1 + 0x5c59) != '\0') {
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        iVar2 = FUN_027490f0(7,&local_40);
        if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x5c00) + 4) == 0x21)) {
          uVar5 = 7;
          FUN_0214eb90(param_1 + 0x5a10,7,1);
          local_40 = puVar1 + 0x10;
          pcStack_38 = "MuseumCafeExitTime";
          FUN_027490f0(7,&local_40);
          uVar3 = FUN_021c7440();
          goto joined_r0x021c8c90;
        }
      }
      if (*(char *)(param_1 + 0x67f9) != '\0') {
        local_40 = puVar1 + 0x10;
        pcStack_38 = "MuseumCafeExitTime";
        iVar2 = FUN_027490f0(8,&local_40);
        if ((1 < iVar2) && (*(int *)(*(long *)(param_1 + 0x67a0) + 4) == 0x21)) {
          uVar5 = 8;
          FUN_0214eb90(param_1 + 0x65b0,8,1);
          local_40 = puVar1 + 0x10;
          pcStack_38 = "MuseumCafeExitTime";
          FUN_027490f0(8,&local_40);
          uVar3 = FUN_021c7440();
          goto joined_r0x021c8c90;
        }
      }
      if (*(char *)(param_1 + 0x7399) == '\0') {
        return;
      }
      local_40 = puVar1 + 0x10;
      pcStack_38 = "MuseumCafeExitTime";
      iVar2 = FUN_027490f0(9,&local_40);
      if (iVar2 < 2) {
        return;
      }
      if (*(int *)(*(long *)(param_1 + 0x7340) + 4) != 0x21) {
        return;
      }
      lVar4 = 0x7150;
      uVar5 = 9;
    }
    else {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "MuseumCafeExitTime";
      iVar2 = FUN_027490f0(5,&local_40);
      if ((iVar2 < 2) || (*(int *)(*(long *)(param_1 + 0x44c0) + 4) != 0x21)) goto LAB_021c8d6c;
      lVar4 = 0x42d0;
      uVar5 = 5;
    }
    FUN_0214eb90(param_1 + lVar4,uVar5,1);
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MuseumCafeExitTime";
    FUN_027490f0(uVar5,&local_40);
    uVar3 = FUN_021c7440();
  }
  else {
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MuseumCafeExitTime";
    iVar2 = FUN_027490f0(1,&local_40);
    if ((iVar2 < 2) || (*(int *)(*(long *)(param_1 + 0x1640) + 4) != 0x21)) goto LAB_021c8b9c;
    uVar5 = 1;
    FUN_0214eb90(param_1 + 0x1450,1,1);
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MuseumCafeExitTime";
    FUN_027490f0(1,&local_40);
    uVar3 = FUN_021c7440();
  }
joined_r0x021c8c90:
  if ((uVar3 & 1) != 0) {
    pcStack_38 = "MuseumCafeExitTime";
    local_40 = puVar1 + 0x10;
    FUN_027494ac(uVar5,&local_40,1);
  }
LAB_021c8f80:
  *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x244) = 0;
  FUN_0219d7e0(param_1,uVar5,0,0);
  return;
}

