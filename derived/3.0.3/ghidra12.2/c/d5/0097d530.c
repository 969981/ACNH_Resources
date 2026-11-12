
undefined8 FUN_0097d530(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_90;
  undefined *puStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_64;
  uint uStack_60;
  uint local_5c;
  uint auStack_58 [13];
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  puVar3 = PTR_DAT_04bb27c8;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = *(undefined4 *)(param_1 + 8);
  uStack_7c = *(undefined4 *)(param_1 + 0xc);
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
  if (lVar4 != 0) {
    local_78 = puStack_88;
    local_70 = local_80;
    uStack_6c = uStack_7c;
    uVar5 = FUN_00971f80(lVar4,&local_90,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(long *)puVar3 == 0) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)puVar3 + 0x90);
    if ((lVar4 != 0) &&
       ((((((uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0 ||
            (uVar2 = *(uint *)(param_1 + 0xc), (int)uVar2 < 0)) ||
           (*(uint *)(lVar4 + 0x38) <= uVar1)) ||
          ((*(uint *)(lVar4 + 0x3c) <= uVar2 ||
           (uVar1 = uVar1 + *(uint *)(lVar4 + 0x38) * uVar2, *(uint *)(lVar4 + 0x68) <= uVar1)))) ||
         ((*(long *)(lVar4 + 0x70) == 0 ||
          (auStack_58[1] = 2,
          (*(uint *)(*(long *)(lVar4 + 0x70) + (long)(int)uVar1 * 4) >> 2 & 1) == 0)))) &&
        (-1 < (int)*(uint *)(param_1 + 8))))) {
      if ((int)*(uint *)(param_1 + 0xc) < 0) {
        return 0;
      }
      if (*(uint *)(lVar4 + 0x38) <= *(uint *)(param_1 + 8)) {
        return 0;
      }
      if (*(uint *)(lVar4 + 0x3c) <= *(uint *)(param_1 + 0xc)) {
        return 0;
      }
      FUN_00962530(lVar4,param_1,auStack_58 + 1);
      local_5c = (uint)local_23;
      auStack_58[0] = (uint)local_24;
      local_64 = (uint)local_21;
      uStack_60 = (uint)local_22;
      uVar5 = FUN_01385fe0(param_1,1);
      if ((((uVar5 & 1) == 0) && (uVar5 = FUN_00975b00(auStack_58), (uVar5 & 1) != 0)) &&
         ((uVar5 = FUN_00975b00(&local_5c), (uVar5 & 1) != 0 &&
          ((uVar5 = FUN_00975b00(&uStack_60), (uVar5 & 1) != 0 &&
           (uVar5 = FUN_00975b00(&local_64), (uVar5 & 1) != 0)))))) {
        return 1;
      }
    }
  }
  return 0;
}

