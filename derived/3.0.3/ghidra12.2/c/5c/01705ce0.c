
uint FUN_01705ce0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  uint local_50 [5];
  byte local_3c [4];
  uint local_38;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_58 = 0;
      local_60 = *param_1;
      uStack_5c = param_1[1];
      local_68 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
            local_58 = lVar4;
          }
        }
      }
      iVar3 = FUN_01ad78cc(&local_68);
      if (iVar3 == 0x1c) {
        return 0x13;
      }
      local_3c[0] = 0;
      local_3c[1] = 0;
      FUN_01adab50(&local_68,local_3c);
      local_50[0] = 0;
      do {
        if ((local_50[0] != 0) && (local_50[0] < 0xe)) {
          uVar2 = local_50[0] + 7;
          if (-1 < (int)local_50[0]) {
            uVar2 = local_50[0];
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_3c[(uint)((int)uVar2 >> 3)] >> (ulong)(local_50[0] & 7) & 1) != 0)) {
            if (local_50[0] == 9) {
              local_38 = local_50[0];
              local_34 = local_50[0];
              FUN_01ad7ca0(local_50,iVar3);
              uVar2 = FUN_0171b3a0(local_50);
              return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
            }
            return 0;
          }
        }
        local_50[0] = local_50[0] + 1;
      } while (local_50[0] != 0xe);
    }
  }
  return 0;
}

