
/* WARNING: Removing unreachable block (ram,0x03089c44) */
/* WARNING: Removing unreachable block (ram,0x03089d38) */
/* WARNING: Removing unreachable block (ram,0x03089d40) */
/* WARNING: Removing unreachable block (ram,0x03089d50) */

undefined8 FUN_03089bb0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined2 local_64 [2];
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb3170;
  lVar1 = param_1 + 0x1f8;
  FUN_007ef010(local_64,PTR_DAT_04bb3170);
  uVar3 = *(uint *)(param_1 + 0x1738);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      local_64[0] = *(undefined2 *)puVar2;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x52);
      if (((long)uVar7 < (long)*(int *)(param_1 + 0x1738)) &&
         (iVar4 = **(int **)(*(long *)(param_1 + 0x1740) + uVar7 * 8), iVar4 != -1)) {
        FUN_0344cd00(local_64,iVar4,0);
      }
      uVar5 = FUN_0308c170(lVar1,local_64);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "MainmenuUnlockMydesingPro";
  local_60 = puVar2;
  iVar4 = FUN_0274bce0(lVar1,&local_60);
  if (iVar4 == 0) {
    pcStack_58 = "UnlockMyDesignProCategory";
    local_60 = puVar2;
    uVar6 = FUN_0274bce0(lVar1,&local_60);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
  }
  puVar2 = PTR_DAT_04bb3170;
  FUN_007ef010(local_64,PTR_DAT_04bb3170);
  uVar3 = *(uint *)(param_1 + 0x1d98);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      local_64[0] = *(undefined2 *)puVar2;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x53);
      if (((long)uVar7 < (long)*(int *)(param_1 + 0x1d98)) &&
         (iVar4 = **(int **)(*(long *)(param_1 + 0x1da0) + uVar7 * 8), iVar4 != -1)) {
        FUN_0344cd00(local_64,iVar4,1);
      }
      uVar5 = FUN_0308c170(lVar1,local_64);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  return 0;
}

