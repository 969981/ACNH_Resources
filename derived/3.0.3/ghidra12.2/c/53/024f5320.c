
undefined8 FUN_024f5320(undefined8 param_1)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerPickupEnable";
  uVar4 = FUN_0274bce0(param_1,&local_30);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar3 = FUN_02531fa8(param_1);
  if (iVar3 == 0x43) {
    return 0;
  }
  uVar2 = *(ushort *)PTR_DAT_04bb6298;
  uVar5 = (ulong)(short)uVar2;
  if (uVar5 != 0xffffffffffffffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
    if (0xff < (uint)(int)(short)uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 4 & 1) != 0) {
      return 0;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 5 & 1) != 0) {
      return 0;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0x19);
      if (((*puVar1 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
        return 1;
      }
      uVar5 = FUN_016e6498();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      puVar6 = *(ushort **)PTR_DAT_04bc3a48;
      if ((puVar6 != (ushort *)0x0) && ((*puVar6 & 1) != 0)) {
        return 0;
      }
      if ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4) &&
         (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)) {
        return 0;
      }
      if (puVar6 == (ushort *)0x0) {
        return 1;
      }
      if ((*puVar6 & 1) == 0) {
        return 1;
      }
      return 0;
    }
    local_30 = (undefined *)CONCAT44(local_30._4_4_,7);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      uVar5 = FUN_016e6498();
      goto joined_r0x024f5530;
    }
  }
  uVar5 = FUN_016e614c();
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  local_30._0_4_ = 6;
  uVar5 = FUN_0290cbcc(&local_30);
  if ((uVar5 & 1) == 0) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0x22);
    uVar5 = FUN_0290cbcc(&local_30);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    if (*(long *)PTR_DAT_04bb4938 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) == 0) {
      return 0;
    }
    return 1;
  }
  uVar5 = FUN_016e677c(param_1);
joined_r0x024f5530:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  return 1;
}

