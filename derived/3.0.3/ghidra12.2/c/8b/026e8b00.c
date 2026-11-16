
undefined4 * FUN_026e8b00(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_48 [8];
  
  if (((DAT_05572660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05572660), iVar5 != 0)) {
    DAT_05572658 = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_0557265c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_05572660);
  }
  puVar3 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_1 + 0x8b8);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(puVar1);
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (uVar4 < *(uint *)(lVar6 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
        return &DAT_05572658;
      }
      local_58 = *(undefined4 *)(param_1 + 0x8b8);
      local_50 = 0;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      uStack_54 = *(undefined4 *)(param_1 + 0x8bc);
      uVar4 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar3 != 0) {
        lVar6 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
            local_50 = lVar6;
          }
        }
      }
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_01adab50(&local_60,local_48);
      uVar4 = 0;
      do {
        if ((uVar4 != 0) && (uVar4 < 0xe)) {
          uVar2 = uVar4 + 7;
          if (-1 < (int)uVar4) {
            uVar2 = uVar4;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar4 & 7) & 1) != 0)) {
            if (uVar4 != 3) {
              puVar1 = &DAT_05572658;
            }
            return puVar1;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
    }
  }
  return &DAT_05572658;
}

