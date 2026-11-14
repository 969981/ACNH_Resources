
uint FUN_017b4954(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char *__src;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [63];
  undefined1 local_45;
  undefined *local_40;
  undefined8 local_38;
  int local_18;
  int iStack_14;
  
  local_45 = 0;
  local_90 = local_84;
  local_88 = 0x40;
  local_84[0] = '\0';
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "TapIndoorSelectCloudIsland";
    iVar6 = FUN_02743000(&local_40);
    if ((iVar6 == 0) && (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) == 0)) {
      if (local_90 == "IdrDream00") goto LAB_017b4a54;
      goto LAB_017b4a24;
    }
    if (local_90 == "IdrDream01") goto LAB_017b4a54;
    __src = "IdrDream01";
  }
  else {
LAB_017b4a24:
    __src = "IdrDream00";
  }
  pcVar5 = local_90;
  iVar6 = 10;
  if (local_88 < 0xb) {
    iVar6 = local_88 + -1;
  }
  memcpy(local_90,__src,(long)iVar6);
  pcVar5[iVar6] = '\0';
LAB_017b4a54:
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = (char *)0x0;
  uVar7 = FUN_00979580(&local_98,&local_40,&iStack_14,&local_18);
  if ((uVar7 & 1) != 0) {
    iVar6 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_38;
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_38._4_4_;
    iVar3 = iVar6 + iStack_14 + -1;
    iVar4 = iVar1 + local_18 + -1;
    iVar2 = iVar6;
    if (iVar3 <= iVar6) {
      iVar2 = iVar3;
    }
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = iVar1;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x20) = iVar6;
    *(int *)(param_1 + 0x24) = iVar1;
    FUN_017b3420(param_1);
  }
  return uVar7 & 1;
}

