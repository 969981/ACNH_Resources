
int FUN_01bdb0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined *local_60;
  undefined *puStack_58;
  
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = &DAT_040c47ff;
  local_60 = puVar1;
  FUN_01bdb240(param_1,param_1 + 8,param_2,&local_60);
  if (0 < *(int *)(param_1 + 0x18)) {
    puStack_58 = &DAT_040962e2;
    local_60 = puVar1;
    FUN_01bdb240(param_1,param_1 + 0x200,param_2,&local_60);
    iVar2 = *(int *)(param_1 + 0x210);
    if (4 < iVar2) {
      return 100;
    }
    if (0 < iVar2) {
      local_60 = puVar4 + 0x10;
      puStack_58 = &DAT_040b0e00;
      FUN_01bdb240(param_1,param_1 + 0x3f8,param_2,&local_60);
      iVar6 = 0x37;
      if (*(int *)(param_1 + 0x408) != 1) {
        iVar6 = 0x32;
      }
      iVar3 = 0x3c;
      if (*(int *)(param_1 + 0x408) < 2) {
        iVar3 = iVar6;
      }
      iVar3 = iVar3 + iVar2 * 10;
      bVar5 = FUN_01c07a50(param_3,param_4);
      *(byte *)(param_1 + 0x5f0) = bVar5 & 1;
      bVar5 = FUN_01c07a50(param_3,param_5);
      if (*(char *)(param_1 + 0x5f0) != '\0') {
        iVar3 = iVar3 + 5;
      }
      *(byte *)(param_1 + 0x5f1) = bVar5 & 1;
      iVar2 = iVar3 + 5;
      if ((bVar5 & 1) == 0) {
        iVar2 = iVar3;
      }
      return iVar2;
    }
  }
  return 0;
}

