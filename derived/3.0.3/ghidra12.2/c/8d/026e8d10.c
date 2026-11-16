
undefined4 * FUN_026e8d10(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  if (((DAT_05572670 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05572670), iVar4 != 0)) {
    DAT_05572668 = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_0557266c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_05572670);
  }
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_1 + 0x8c0);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(puVar1);
  lVar6 = *(long *)puVar2;
  puVar5 = (undefined4 *)PTR_DAT_04bb37e0;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
        puVar5 = puVar1;
      }
    }
  }
  uVar3 = FUN_0277d6c4(puVar5);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(puVar1);
      lVar6 = *(long *)puVar2;
      puVar5 = (undefined4 *)PTR_DAT_04bb37e0;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
            puVar5 = puVar1;
          }
        }
      }
      local_50 = 0;
      local_58 = *puVar5;
      uStack_54 = puVar5[1];
      local_60 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(puVar5);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
            lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8);
            if (lVar6 != 0) {
              local_50 = lVar6;
            }
          }
        }
      }
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_01adab50(&local_60,local_48);
      local_44 = 0;
      do {
        if ((local_44 != 0) && (local_44 < 0xe)) {
          uVar3 = local_44 + 7;
          if (-1 < (int)local_44) {
            uVar3 = local_44;
          }
          if (((uint)((int)uVar3 >> 3) < 2) &&
             ((local_48[(uint)((int)uVar3 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
            if (local_44 == 5) {
              lVar6 = *(long *)puVar2;
              uVar3 = FUN_0277d6c4(puVar1);
              if (*(long *)puVar2 == 0) {
                return (undefined4 *)PTR_DAT_04bb37e0;
              }
              lVar6 = *(long *)(lVar6 + 0x57e58);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if (*(uint *)(lVar6 + 0x1d8) <= uVar3) {
                return (undefined4 *)PTR_DAT_04bb37e0;
              }
              puVar5 = (undefined4 *)PTR_DAT_04bb37e0;
              if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
                puVar5 = puVar1;
              }
              return puVar5;
            }
            break;
          }
        }
        local_44 = local_44 + 1;
      } while (local_44 != 0xe);
    }
  }
  return &DAT_05572668;
}

