
undefined8 FUN_0373a9dc(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  byte local_58;
  byte local_34 [4];
  
  puVar3 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2010;
  local_34[0] = 10;
  local_34[1] = 6;
  local_34[2] = 9;
  local_34[3] = 5;
  local_60 = PTR_DAT_04bb5ba0 + 0x10;
  local_58 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar4 == 0)) {
LAB_0373aa60:
    uVar6 = 0;
LAB_0373aa64:
    local_58 = 0;
    if ((*(long *)puVar3 != 0) && (lVar4 = *(long *)(*(long *)puVar3 + 0xa8), lVar4 != 0)) {
      local_70 = puVar1;
      local_68 = param_1;
      iStack_64 = param_2 + 1;
      FUN_00974bc8(lVar4,&local_70,&local_60);
      if ((local_58 >> 4 & 1) != 0) {
        if ((*(byte *)((ulong)local_34 | uVar6) &
            ((local_58 & 6 | (local_58 & 1) << 3 | local_58 >> 3 & 1) ^ 0xff)) != 0)
        goto LAB_0373ab98;
        uVar6 = (ulong)((int)uVar6 + 1);
      }
    }
    local_58 = 0;
    if ((*(long *)puVar3 != 0) && (lVar4 = *(long *)(*(long *)puVar3 + 0xa8), lVar4 != 0)) {
      local_70 = puVar2 + 0x10;
      local_68 = param_1 + 1;
      iStack_64 = param_2;
      FUN_00974bc8(lVar4,&local_70,&local_60);
      if ((local_58 >> 4 & 1) != 0) {
        if ((*(byte *)((ulong)local_34 | uVar6) &
            ((local_58 & 6 | (local_58 & 1) << 3 | local_58 >> 3 & 1) ^ 0xff)) != 0)
        goto LAB_0373ab98;
        uVar6 = (ulong)((int)uVar6 + 1);
      }
    }
    local_58 = 0;
    if ((*(long *)puVar3 != 0) && (lVar4 = *(long *)(*(long *)puVar3 + 0xa8), lVar4 != 0)) {
      local_70 = puVar2 + 0x10;
      local_68 = param_1 + 1;
      iStack_64 = param_2 + 1;
      FUN_00974bc8(lVar4,&local_70,&local_60);
      if (((local_58 >> 4 & 1) != 0) &&
         ((local_34[uVar6] & ((local_58 & 6 | (local_58 & 1) << 3 | local_58 >> 3 & 1) ^ 0xff)) != 0
         )) goto LAB_0373ab98;
    }
    uVar5 = 1;
  }
  else {
    local_70 = puVar1;
    local_68 = param_1;
    iStack_64 = param_2;
    FUN_00974bc8(lVar4,&local_70,&local_60);
    if ((local_58 >> 4 & 1) == 0) goto LAB_0373aa60;
    if ((byte)(local_58 & 2 | (local_58 & 1) << 3) == 10) {
      uVar6 = 1;
      goto LAB_0373aa64;
    }
LAB_0373ab98:
    uVar5 = 0;
  }
  return uVar5;
}

