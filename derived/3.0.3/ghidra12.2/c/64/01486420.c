
void FUN_01486420(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *__dest;
  long lVar9;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uStack_4c = *(undefined4 *)(param_1 + 0x1414);
  local_50 = *(undefined4 *)(param_1 + 0x1410);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0x1410);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar9 != 0) {
          local_48 = lVar9;
        }
      }
    }
  }
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x141c) = 2;
    goto LAB_01486620;
  case 2:
    *(undefined4 *)(param_1 + 0x141c) = 1;
    uVar5 = FUN_01ae6a98(&local_58);
    if (uVar5 < 0x14) {
      pcVar7 = (&PTR_s_FtrLoopAuto_0492bb40)[uVar5];
    }
    else {
      pcVar7 = "";
    }
    __dest = *(char **)(param_1 + 0x1028);
    if (__dest == pcVar7) goto LAB_01486818;
    lVar9 = 0;
    do {
      if (pcVar7[lVar9] == '\0') goto LAB_014867f0;
      if (pcVar7[lVar9 + 1] == '\0') goto LAB_014867ec;
      if (pcVar7[lVar9 + 2] == '\0') goto LAB_014867e4;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    break;
  case 3:
    __dest = "FtrMyDesignPreview";
    pcVar7 = *(char **)(param_1 + 0x1028);
    *(undefined4 *)(param_1 + 0x141c) = 3;
    *(uint *)(param_1 + 0x1298) = *(uint *)(param_1 + 0x1298) | 4;
    if (pcVar7 != "FtrMyDesignPreview") {
      iVar6 = 0x12;
      if (*(int *)(param_1 + 0x1030) < 0x13) {
        iVar6 = *(int *)(param_1 + 0x1030) + -1;
      }
      memcpy(pcVar7,"FtrMyDesignPreview",(long)iVar6);
      pcVar7[iVar6] = '\0';
      __dest = *(char **)(param_1 + 0x1028);
    }
    if (__dest == "FtrMyDesignPreview10900") goto LAB_01486818;
    iVar1 = *(int *)(param_1 + 0x1030);
    pcVar7 = "FtrMyDesignPreview10900";
    bVar3 = SBORROW4(iVar1,0x17);
    iVar6 = iVar1 + -0x17;
    bVar4 = iVar1 == 0x17;
    iVar8 = 0x17;
LAB_01486618:
    if (bVar4 || iVar6 < 0 != bVar3) {
      iVar8 = iVar1 + -1;
    }
    goto LAB_01486800;
  case 4:
    *(undefined4 *)(param_1 + 0x141c) = 2;
    iVar6 = FUN_0277d6c4(param_1 + 0x1410);
    if (iVar6 == 0x33ef) {
      __dest = *(char **)(param_1 + 0x1028);
      if (__dest == "FtrRemakePreviewSpAction") goto LAB_01486818;
      iVar1 = *(int *)(param_1 + 0x1030);
      pcVar7 = "FtrRemakePreviewSpAction";
      bVar3 = SBORROW4(iVar1,0x18);
      iVar6 = iVar1 + -0x18;
      bVar4 = iVar1 == 0x18;
      iVar8 = 0x18;
      goto LAB_01486618;
    }
LAB_01486620:
    uVar5 = FUN_01ae6a98(&local_58);
    if (uVar5 < 0x14) {
      pcVar7 = (&PTR_s_FtrLoopAuto_0492bb40)[uVar5];
    }
    else {
      pcVar7 = "";
    }
    __dest = *(char **)(param_1 + 0x1028);
    if (__dest == pcVar7) goto LAB_01486818;
    lVar9 = 0;
    do {
      if (pcVar7[lVar9] == '\0') goto LAB_014867f0;
      if (pcVar7[lVar9 + 1] == '\0') goto LAB_014867ec;
      if (pcVar7[lVar9 + 2] == '\0') goto LAB_014867e4;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    break;
  default:
    uVar5 = FUN_01ae6a98(&local_58);
    if (uVar5 < 0x14) {
      pcVar7 = (&PTR_s_FtrLoopAuto_0492bb40)[uVar5];
    }
    else {
      pcVar7 = "";
    }
    __dest = *(char **)(param_1 + 0x1028);
    if (__dest == pcVar7) goto LAB_01486818;
    lVar9 = 0;
    do {
      if (pcVar7[lVar9] == '\0') goto LAB_014867f0;
      if (pcVar7[lVar9 + 1] == '\0') goto LAB_014867ec;
      if (pcVar7[lVar9 + 2] == '\0') goto LAB_014867e4;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x141c) = 4;
    FUN_01ae6a98(&local_58);
    uVar5 = FUN_01ae6a98(&local_58);
    if (uVar5 < 0x14) {
      pcVar7 = (&PTR_s_FtrLoopAuto_0492bb40)[uVar5];
    }
    else {
      pcVar7 = "";
    }
    __dest = *(char **)(param_1 + 0x1028);
    if (__dest == pcVar7) goto LAB_01486818;
    lVar9 = 0;
    do {
      if (pcVar7[lVar9] == '\0') goto LAB_014867f0;
      if (pcVar7[lVar9 + 1] == '\0') goto LAB_014867ec;
      if (pcVar7[lVar9 + 2] == '\0') goto LAB_014867e4;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  lVar9 = 0;
LAB_014867f0:
  iVar8 = (int)lVar9;
  if (*(int *)(param_1 + 0x1030) <= (int)lVar9) {
    iVar8 = *(int *)(param_1 + 0x1030) + -1;
  }
LAB_01486800:
  memcpy(__dest,pcVar7,(long)iVar8);
  __dest[iVar8] = '\0';
LAB_01486818:
  *(uint *)(param_1 + 0x1418) = *(uint *)(param_1 + 0x1418) | 1;
  return;
LAB_014867ec:
  lVar9 = lVar9 + 1;
  goto LAB_014867f0;
LAB_014867e4:
  lVar9 = lVar9 + 2;
  goto LAB_014867f0;
}

