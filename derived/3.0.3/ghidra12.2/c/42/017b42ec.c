
uint FUN_017b42ec(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *local_48;
  char *pcStack_40;
  int local_38;
  int local_34;
  undefined *local_30;
  undefined8 local_28;
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_28 = 0;
  pcStack_40 = "IdrMuseumCafe00";
  uVar6 = FUN_00979580(&local_48,&local_30,&local_34,&local_38);
  if ((uVar6 & 1) != 0) {
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_28;
    iVar2 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_28._4_4_;
    iVar4 = iVar1 + local_34 + -1;
    iVar3 = iVar1;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar5 = iVar2 + local_38 + -1;
    iVar4 = iVar2;
    if (iVar5 <= iVar2) {
      iVar4 = iVar5;
    }
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_017b3420(param_1);
  }
  return uVar6 & 1;
}

