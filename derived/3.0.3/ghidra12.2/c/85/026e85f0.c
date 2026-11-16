
undefined4 * FUN_026e85f0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  if (((DAT_05572640 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05572640), iVar3 != 0)) {
    DAT_05572634 = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_05572638 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_05572640);
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1);
  lVar5 = *(long *)puVar1;
  puVar4 = (undefined4 *)PTR_DAT_04bb37e0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (uVar2 < *(uint *)(lVar6 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
        puVar4 = param_1;
      }
    }
  }
  uVar2 = FUN_0277d6c4(puVar4);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(param_1);
      lVar5 = *(long *)puVar1;
      puVar4 = (undefined4 *)PTR_DAT_04bb37e0;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar2 < *(uint *)(lVar6 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
            puVar4 = param_1;
          }
        }
      }
      local_50 = 0;
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      local_60 = PTR_DAT_04bc0510 + 0x10;
      uVar2 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(puVar4);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
            lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
            if (lVar5 != 0) {
              local_50 = lVar5;
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
          uVar2 = local_44 + 7;
          if (-1 < (int)local_44) {
            uVar2 = local_44;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_48[(uint)((int)uVar2 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
            if (local_44 == 1) {
              lVar5 = *(long *)puVar1;
              uVar2 = FUN_0277d6c4(param_1);
              if (*(long *)puVar1 == 0) {
                return (undefined4 *)PTR_DAT_04bb37e0;
              }
              lVar5 = *(long *)(lVar5 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if (*(uint *)(lVar5 + 0x1d8) <= uVar2) {
                return (undefined4 *)PTR_DAT_04bb37e0;
              }
              puVar4 = (undefined4 *)PTR_DAT_04bb37e0;
              if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0) {
                puVar4 = param_1;
              }
              return puVar4;
            }
            break;
          }
        }
        local_44 = local_44 + 1;
      } while (local_44 != 0xe);
    }
  }
  return &DAT_05572634;
}

