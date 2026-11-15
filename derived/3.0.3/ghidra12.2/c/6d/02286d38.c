
undefined8 FUN_02286d38(float *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  lVar7 = *(long *)PTR_DAT_04bb27a8;
  cVar1 = *(char *)(*(long *)PTR_DAT_04bb4848 + 0x1b9);
  uVar2 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  uVar3 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  bVar4 = *(int *)(lVar7 + 0x200) != 1;
  if (*(char *)(*(long *)PTR_DAT_04bb4848 + 0x1b8) == '\0') {
    if (!bVar4) {
      return 0;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "SandBankDisable";
    uVar6 = FUN_0273f0a0(&local_50);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    if (0x11f < uVar2) {
      return 0;
    }
    if (0xff < uVar3) {
      return 0;
    }
    if ((*(uint *)(lVar7 + (ulong)(uVar2 + uVar3 * 0x120 >> 5) * 4 + 0x1650) >>
         (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  else if (bVar4) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "SandBankDisable";
    uVar6 = FUN_0273f0a0(&local_50);
    if (((((uVar6 & 1) == 0) && (uVar2 < 0x120)) && (uVar3 < 0x100)) &&
       ((*(uint *)(lVar7 + (ulong)(uVar2 + uVar3 * 0x120 >> 5) * 4 + 0x1650) >>
         (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      return 0;
    }
  }
  if ((cVar1 == '\0') && (iVar5 = FUN_01317b90(param_1,0), iVar5 != 0)) {
    return 0;
  }
  return 1;
}

