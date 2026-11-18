
void FUN_0331e4f8(long *param_1,byte param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 uVar12;
  undefined1 uVar11;
  char *pcVar13;
  
  puVar4 = PTR_DAT_04bc92a0;
  puVar3 = PTR_DAT_04bc9298;
  pcVar10 = *(char **)(PTR_PTR_04bb2238 + 8);
  uVar2 = *(uint *)(*(long *)PTR_DAT_04bc1118 + 0xbd0);
  if (*(long *)PTR_DAT_04bc9298 == 0 || *(long **)PTR_DAT_04bc92a0 == (long *)0x0) {
    uVar7 = 0xc0;
  }
  else {
    uVar7 = 0xc0;
    if (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) != 10) {
      iVar5 = (**(code **)(**(long **)PTR_DAT_04bc92a0 + 0x40))();
      uVar7 = 0x80;
      if (1 < iVar5 - 3U) {
        uVar7 = 0xc0;
      }
    }
  }
  uVar11 = 0;
  if ((uVar2 & 2) != 0) {
    uVar7 = uVar7 & 0x40;
  }
  if ((uVar2 & 4) != 0) {
    uVar7 = uVar7 & 0x80;
  }
  pcVar13 = pcVar10;
  if ((uVar7 == 0) || ((param_2 & 1) == 0)) {
    uVar7 = 0;
    goto LAB_0331e65c;
  }
  if (param_1[0x6b] == 0) {
    if ((((int)param_1[0x61] != 0xe) && ((int)param_1[0x61] != 0xf)) && ((int)param_1[0x61] != 0x10)
       ) {
      return;
    }
    pcVar10 = "SwkbdFooter_KanaRotate";
    lVar8 = *(long *)puVar3;
joined_r0x0331e6e4:
    uVar12 = 1;
    uVar11 = 1;
    pcVar13 = "";
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
    if ((((uVar6 & 1) == 0) && (uVar6 = (**(code **)(*param_1 + 0xd8))(param_1), (uVar6 & 1) == 0))
       && (uVar6 = (**(code **)(*param_1 + 0xe0))(param_1), (uVar6 & 1) == 0)) {
      (**(code **)(*param_1 + 0xe8))(param_1);
    }
    iVar5 = 0;
    if (param_1[0x6b] != 0) {
      iVar5 = *(int *)(param_1[0x6b] + 0x5e8);
    }
    if (((iVar5 == 2) || (iVar5 == 1)) || (iVar5 == 0)) {
      pcVar10 = "0003";
      lVar8 = *(long *)puVar3;
      goto joined_r0x0331e6e4;
    }
    uVar7 = 0;
    uVar12 = 0;
    uVar11 = 0;
    lVar8 = *(long *)puVar3;
  }
  if (lVar8 != 0) {
    uVar11 = uVar12;
    if ((*(long **)puVar4 != (long *)0x0) && (*(int *)(*(long *)(lVar8 + 0x210) + 0x60) != 10)) {
      iVar5 = (**(code **)(**(long **)puVar4 + 0x40))();
      pcVar1 = "Cmn_FooterKey_S_Push";
      if (1 < iVar5 - 3U) {
        pcVar1 = pcVar13;
      }
      pcVar13 = pcVar1;
    }
  }
LAB_0331e65c:
  puVar9 = *(undefined1 **)(param_1[0xb8] + 8);
  *(undefined4 *)(puVar9 + 0x68) = 0;
  *(uint *)(puVar9 + 0x6c) = uVar7;
  *(char **)(puVar9 + 0x78) = pcVar10;
  *(char **)(puVar9 + 0x88) = pcVar13;
  puVar9[0x90] = uVar11;
  *(undefined2 *)(puVar9 + 0x91) = 0;
  *puVar9 = 1;
  *(byte *)(param_1 + 0x2fb) = param_2 & 1;
  return;
}

