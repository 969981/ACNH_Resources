
undefined8 FUN_0253f300(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_50 = 0;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_50 = lVar5;
          }
        }
      }
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_01adab50(&local_60,local_48);
      uVar2 = 0;
      do {
        local_44 = uVar2;
        if ((local_44 != 0) && (local_44 < 0xe)) {
          uVar2 = local_44 + 7;
          if (-1 < (int)local_44) {
            uVar2 = local_44;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (uVar4 = local_44,
             (local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0))
          goto LAB_0253f4a8;
        }
        uVar2 = local_44 + 1;
      } while (local_44 + 1 != 0xe);
      uVar4 = 0;
LAB_0253f4a8:
      uVar3 = FUN_0253f4d0(param_1,param_2,uVar4,1);
      return uVar3;
    }
  }
  return 0;
}

