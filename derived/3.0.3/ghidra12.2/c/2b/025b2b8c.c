
void FUN_025b2b8c(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = (undefined *)(ulong)(ushort)*param_2;
  FUN_0277d4ac(&local_40);
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  puVar2 = PTR_DAT_04bb2020;
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) && (0 < (int)param_2[1])
        ) && (param_2[2] != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "ItemUniqueId";
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      local_40 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
      pcStack_38 = "TradeItemNum";
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      local_40 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[1]);
      local_40 = puVar2 + 0x10;
      pcStack_38 = "Difficulty";
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[2]);
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 6;
  }
  return;
}

