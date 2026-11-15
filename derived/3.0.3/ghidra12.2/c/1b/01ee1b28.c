
undefined8 FUN_01ee1b28(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x77b0) - 3U < 5) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x4b8) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x23) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) != 0) {
    return 0;
  }
  uVar7 = FUN_0212ef10(param_1 + 0xaa50);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Countdown";
  iVar6 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_40);
  if (iVar6 == 2) {
    iVar6 = 8;
  }
  else {
    if (iVar6 == 1) {
      uVar7 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar8 = (uint)(uVar7 >> 0x20);
      uVar9 = uVar8 & 0xff;
      if (((char)(uVar7 >> 0x20) < '\x02') || (uVar9 == 0x17)) {
        uVar8 = uVar8 >> 8 & 0xff;
        if (uVar9 == 0x17) {
          if ((char)(uVar7 >> 0x28) < '\x1e') {
            iVar6 = 1;
          }
          else if (uVar8 < 0x32) {
            iVar6 = 2;
          }
          else if (uVar8 < 0x37) {
            iVar6 = 3;
          }
          else {
            iVar6 = 4;
            if (0x3a < uVar8) {
              iVar6 = 5;
            }
          }
        }
        else {
          bVar4 = false;
          bVar5 = false;
          if ((uVar7 & 0xff00000000) == 0 && (uVar7 >> 0x28 & 0xff) == 0) {
            iVar6 = (int)(char)(uVar7 >> 0x30);
            bVar5 = SBORROW4(iVar6,10);
            bVar4 = iVar6 + -10 < 0;
          }
          iVar6 = 6;
          if (bVar4 == bVar5) {
            iVar6 = 7;
          }
        }
        goto LAB_01ee1c18;
      }
    }
    iVar6 = 0;
  }
LAB_01ee1c18:
  local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar6);
  iVar1 = *(int *)(param_1 + 0xaeb4);
  if ((iVar6 == iVar1) || ((iVar6 == 7 && (iVar1 == 6)))) {
    uVar7 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    cVar3 = (char)(uVar7 >> 0x20);
    if ((uVar7 & 0xff0000) == 0xc0000) {
      if (cVar3 < '\x17') {
        return 0;
      }
      if ((char)(uVar7 >> 0x28) < '7') {
        return 0;
      }
    }
    else {
      if (cVar3 < '\x02') {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0xaeb8) + -1;
      if (*(int *)(param_1 + 0xaeb8) < 1) {
        return 0;
      }
      *(int *)(param_1 + 0xaeb8) = iVar2;
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xaeb0) = 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0xaeb0);
  if (((iVar2 < 0) || (*(int *)(param_1 + 0xaeb0) = iVar2 + -1, iVar2 != 0 && iVar2 + -1 != 0)) ||
     ((*(undefined4 *)(param_1 + 0xaeb0) = 0x1e, *(char *)(param_1 + 0xaf30) == '\0' &&
      (iVar6 == iVar1)))) {
    return 0;
  }
  *(int *)(param_1 + 0xaeb4) = iVar6;
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  return 1;
}

