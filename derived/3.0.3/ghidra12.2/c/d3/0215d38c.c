
undefined4 FUN_0215d38c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  long lVar9;
  bool bVar10;
  byte bVar11;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  pcVar7 = *(char **)(param_1 + 0x740);
  if (*pcVar7 == 'p') {
    if (pcVar7[1] != 'o') {
      return 0;
    }
    bVar10 = false;
    if (pcVar7[2] != 'o') {
      return 0;
    }
    bVar11 = 1;
  }
  else {
    if (*pcVar7 != 's') {
      return 0;
    }
    if (pcVar7[1] != 'p') {
      return 0;
    }
    bVar11 = 0;
    if (pcVar7[2] != 'n') {
      return 0;
    }
    bVar10 = true;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_0215d46c:
    if (7 < *pbVar8) {
LAB_0215d478:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_24[0] = *pbVar8;
        if (local_24[0] < 8) goto LAB_0215d4f8;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0215d46c;
      }
      goto LAB_0215d478;
    }
  }
  local_24[0] = *pbVar8;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_0215d4f8:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "SpnCheckPlace";
  local_50 = puVar1;
  iVar5 = FUN_02753180(local_24,&local_50);
  pcStack_48 = "PooCheckPlace";
  local_50 = puVar1;
  uVar6 = FUN_02753180(local_24,&local_50);
  if (uVar6 != 0 || iVar5 != 0) {
    bVar2 = false;
    if (iVar5 == 0) {
      bVar2 = bVar10;
    }
    if ((!bVar2) && (iVar5 != 2 || uVar6 != 2)) {
      bVar10 = (bool)(bVar11 ^ 1);
      if ((uVar6 & 0xfffffffb) != 0) {
        bVar10 = true;
      }
      if (bVar10) {
        return 0;
      }
    }
  }
  *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x8002;
  FUN_02157540(param_1);
  FUN_0215cb30(param_1);
  FUN_0215b800(param_1);
  return 1;
}

