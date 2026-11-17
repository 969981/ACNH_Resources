
/* WARNING: Removing unreachable block (ram,0x02d58f30) */
/* WARNING: Removing unreachable block (ram,0x02d58e64) */
/* WARNING: Removing unreachable block (ram,0x02d58f68) */
/* WARNING: Removing unreachable block (ram,0x02d58f70) */
/* WARNING: Removing unreachable block (ram,0x02d58f80) */

undefined8 FUN_02d58dc0(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined2 local_64 [2];
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = PTR_DAT_04bb3170;
  FUN_007ef010(local_64,PTR_DAT_04bb3170);
  uVar2 = param_1[0x330];
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      local_64[0] = *(undefined2 *)puVar1;
      local_60._0_4_ = 0x52;
      if (((long)uVar6 < (long)*param_1) &&
         (iVar3 = **(int **)(*(long *)(param_1 + 2) + uVar6 * 8), iVar3 != -1)) {
        FUN_0344d0c0(local_64,iVar3,0);
      }
      uVar4 = FUN_0308c170(param_2,local_64);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "MainmenuUnlockMydesingPro";
  local_60 = puVar1;
  iVar3 = FUN_0274bce0(param_2,&local_60);
  if (iVar3 == 0) {
    pcStack_58 = "UnlockMyDesignProCategory";
    local_60 = puVar1;
    uVar5 = FUN_0274bce0(param_2,&local_60);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  puVar1 = PTR_DAT_04bb3170;
  FUN_007ef010(local_64,PTR_DAT_04bb3170);
  uVar2 = param_1[0x331];
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      local_64[0] = *(undefined2 *)puVar1;
      local_60._0_4_ = 0x53;
      if (((long)uVar6 < (long)param_1[0x198]) &&
         (iVar3 = **(int **)(*(long *)(param_1 + 0x19a) + uVar6 * 8), iVar3 != -1)) {
        FUN_0344d0c0(local_64,iVar3,1);
      }
      uVar4 = FUN_0308c170(param_2,local_64);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  return 0;
}

