
uint FUN_02546d50(undefined8 param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  byte local_58 [4];
  uint local_54;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_60 = 0;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      local_70 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
            local_60 = lVar4;
          }
        }
      }
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_01adab50(&local_70,local_58);
      uVar2 = 0;
      do {
        local_54 = uVar2;
        if ((local_54 != 0) && (local_54 < 0xe)) {
          uVar2 = local_54 + 7;
          if (-1 < (int)local_54) {
            uVar2 = local_54;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (uVar3 = local_54,
             (local_58[(uint)((int)uVar2 >> 3)] >> (ulong)(local_54 & 7) & 1) != 0))
          goto LAB_02546ee8;
        }
        uVar2 = local_54 + 1;
      } while (local_54 + 1 != 0xe);
      uVar3 = 0;
LAB_02546ee8:
      if (uVar3 != 0) {
        uVar2 = FUN_02538e78(param_1,param_2,uVar3,param_3 & 1,param_4 & 1);
        goto LAB_02546f14;
      }
    }
  }
  uVar2 = 0;
LAB_02546f14:
  return uVar2 & 1;
}

