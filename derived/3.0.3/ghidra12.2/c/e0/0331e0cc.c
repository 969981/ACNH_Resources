
void FUN_0331e0cc(long param_1,byte param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 *puVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 uVar15;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  pbVar1 = (byte *)(param_1 + 0x17d8);
  *pbVar1 = param_2;
  puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
  *(undefined8 *)(puVar10 + 8) = 0x100000001;
  *(undefined8 **)(puVar10 + 0x28) = &DAT_0407ebb1;
  puVar10[0x32] = 0;
  *(undefined1 **)(puVar10 + 0x18) = &DAT_04080da4;
  *(undefined2 *)(puVar10 + 0x30) = 1;
  puVar2 = PTR_DAT_04bc1118;
  *puVar10 = 1;
  puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
  bVar5 = *(char *)(*(long *)(*(long *)puVar2 + 0x20) + 0x16969) == '\0';
  if (bVar5) {
    pcVar11 = *(char **)(PTR_PTR_04bb2238 + 8);
    uVar8 = 0;
    pcVar13 = pcVar11;
  }
  else {
    uVar8 = 8;
    pcVar11 = "SwkbdFooter_Close";
    pcVar13 = "";
  }
  *(undefined4 *)(puVar10 + 0x38) = 0;
  *(undefined4 *)(puVar10 + 0x3c) = uVar8;
  *(char **)(puVar10 + 0x48) = pcVar11;
  *(char **)(puVar10 + 0x58) = pcVar13;
  puVar10[0x60] = !bVar5;
  *(undefined2 *)(puVar10 + 0x61) = 0;
  *puVar10 = 1;
  FUN_0331e4f8(param_1,param_2 & 1);
  FUN_0331e73c(param_1);
  *(undefined1 *)(param_1 + 0x17e0) = 0;
  puVar4 = PTR_DAT_04bc92a0;
  puVar3 = PTR_DAT_04bc9298;
  if ((*pbVar1 != 0) && (lVar9 = *(long *)(param_1 + 0x358), lVar9 != 0)) {
    pcVar13 = *(char **)(PTR_PTR_04bb2238 + 8);
    if ((*(long *)PTR_DAT_04bc9298 == 0) ||
       ((*(long **)PTR_DAT_04bc92a0 == (long *)0x0 ||
        (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10)))) {
      uVar8 = 0xc0;
LAB_0331e208:
      iVar6 = *(int *)(lVar9 + 0x5e8);
    }
    else {
      iVar6 = (**(code **)(**(long **)PTR_DAT_04bc92a0 + 0x40))();
      uVar8 = 0x80;
      if (1 < iVar6 - 3U) {
        uVar8 = 0xc0;
      }
      lVar9 = *(long *)(param_1 + 0x358);
      if (lVar9 != 0) goto LAB_0331e208;
      iVar6 = 0;
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar6);
    if (((iVar6 == 2) || (iVar6 == 1)) || (iVar6 == 0)) {
      pcVar13 = "";
      uVar15 = 1;
      pcVar11 = "0003";
    }
    else {
      uVar8 = 0;
      uVar15 = 0;
      pcVar11 = pcVar13;
    }
    lVar9 = *(long *)puVar3;
    plVar7 = *(long **)puVar4;
    pcVar14 = pcVar13;
    if (((lVar9 != 0) && (plVar7 != (long *)0x0)) &&
       (*(int *)(*(long *)(lVar9 + 0x210) + 0x60) != 10)) {
      iVar6 = (**(code **)(*plVar7 + 0x40))();
      plVar7 = *(long **)puVar4;
      lVar9 = *(long *)puVar3;
      pcVar14 = "Cmn_FooterKey_S_Push";
      if (1 < iVar6 - 3U) {
        pcVar14 = pcVar13;
      }
    }
    if (((plVar7 == (long *)0x0) || (lVar9 == 0)) ||
       (*(int *)(*(long *)(lVar9 + 0x210) + 0x60) == 10)) {
LAB_0331e308:
      if ((*(byte *)(*(long *)puVar2 + 0xbd0) >> 3 & 1) != 0) {
        uVar8 = 0;
        uVar15 = 0;
        pcVar14 = *(char **)(PTR_PTR_04bb2238 + 8);
        pcVar11 = pcVar14;
      }
    }
    else {
      iVar6 = (**(code **)(*plVar7 + 0x40))();
      if (1 < iVar6 - 3U) goto LAB_0331e308;
    }
    puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
    *(undefined4 *)(puVar10 + 0x68) = 0;
    *(undefined4 *)(puVar10 + 0x6c) = uVar8;
    *(char **)(puVar10 + 0x78) = pcVar11;
    *(char **)(puVar10 + 0x88) = pcVar14;
    puVar10[0x90] = uVar15;
    *(undefined2 *)(puVar10 + 0x91) = 0;
    *puVar10 = 1;
    *pbVar1 = 1;
  }
  lVar9 = *(long *)puVar2;
  if ((*(int *)(param_1 + 0x308) == 0x12) && (*(long *)(lVar9 + 0xbf8) == 0)) {
    if (*(long *)(lVar9 + 0x30) == 0) {
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_0331e3c8;
    }
    else if (*(char *)(*(long *)(lVar9 + 0x30) + 0x360) == '\0') goto LAB_0331e3c8;
  }
  puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
  *(char **)(puVar10 + 0xa8) = "SwkbdFooter_CaretMoveR";
  *(undefined8 *)(puVar10 + 0x98) = 0x400000000000;
  *(undefined8 **)(puVar10 + 0xb8) = &DAT_0407ebb1;
  puVar10[0xc2] = 0;
  *(undefined2 *)(puVar10 + 0xc0) = 1;
  *puVar10 = 1;
  puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x5c0) + 8);
  *(undefined8 *)(puVar10 + 200) = 0x200000000000;
  *(char **)(puVar10 + 0xd8) = "SwkbdFooter_CaretMoveL";
  *(undefined8 **)(puVar10 + 0xe8) = &DAT_0407ebb1;
  *(undefined2 *)(puVar10 + 0xf0) = 1;
  puVar10[0xf2] = 0;
  *puVar10 = 1;
LAB_0331e3c8:
  *(undefined1 *)(param_1 + 0x17e0) = 0;
  bVar5 = false;
  if ((*(long *)puVar3 != 0) && (*(long **)puVar4 != (long *)0x0)) {
    if (*(int *)(*(long *)(*(long *)puVar3 + 0x210) + 0x60) == 10) {
      bVar5 = false;
    }
    else {
      iVar6 = (**(code **)(**(long **)puVar4 + 0x40))();
      bVar5 = iVar6 - 3U < 2;
    }
  }
  *(bool *)(param_1 + 0x17dd) = bVar5;
  puVar2 = PTR_DAT_04bc8ed0;
  puVar10 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x5c0) != 0) {
    puVar10 = &LAB_03325ec4;
  }
  if (puVar10 != (undefined1 *)0x0) {
    FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 8),0);
    *(undefined1 *)(param_1 + 0x17e2) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x308);
  lVar12 = *(long *)puVar2;
  local_78 = PTR_DAT_04bc8e68 + 0x10;
  *(bool *)(lVar12 + 0x114) = iVar6 == 0x12;
  local_68 = *(undefined8 *)(lVar12 + 0x28);
  pcStack_70 = "L_Line_00/P_Line";
  lVar9 = FUN_032cb990(&local_68,&local_78);
  if (lVar9 != 0) {
    *(undefined1 *)(lVar12 + 0x113) = 0;
    *(byte *)(lVar9 + 0x58) =
         *(byte *)(lVar9 + 0x58) & 0xfe | (iVar6 == 0x12 && *(char *)(lVar12 + 0x115) != '\0');
  }
  return;
}

