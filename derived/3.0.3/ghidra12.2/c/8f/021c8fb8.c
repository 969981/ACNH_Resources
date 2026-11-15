
void FUN_021c8fb8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    uVar2 = FUN_027490f0(0,&local_50);
    if ((uVar2 & 0xfffe) != 0) {
      lVar3 = 0;
      goto LAB_021c91a0;
    }
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 1;
    uVar2 = FUN_027490f0(1,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 2;
    uVar2 = FUN_027490f0(2,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 3;
    uVar2 = FUN_027490f0(3,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 4;
    uVar2 = FUN_027490f0(4,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    lVar3 = 5;
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    uVar2 = FUN_027490f0(5,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 6;
    uVar2 = FUN_027490f0(6,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 7;
    uVar2 = FUN_027490f0(7,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    lVar3 = 8;
    uVar2 = FUN_027490f0(8,&local_50);
    if ((uVar2 & 0xfffe) != 0) goto LAB_021c91a0;
  }
  if (*(char *)(param_1 + 0x7399) == '\0') {
    return;
  }
  lVar3 = 9;
  local_50 = puVar1 + 0x10;
  pcStack_48 = "MuseumCafeExitTime";
  uVar2 = FUN_027490f0(9,&local_50);
  if ((uVar2 & 0xfffe) == 0) {
    return;
  }
LAB_021c91a0:
  uVar2 = FUN_021c7440();
  if ((uVar2 & 1) == 0) {
    FUN_0214f66c(param_1 + lVar3 * 0xba0 + 0x8b0,lVar3);
    FUN_0219d7e0(param_1,lVar3,0,0);
  }
  else {
    local_50 = puVar1 + 0x10;
    pcStack_48 = "MuseumCafeExitTime";
    FUN_027494ac(lVar3,&local_50,1);
    *(undefined4 *)(DAT_053e4ff0 + 0x244) = 0;
  }
  return;
}

