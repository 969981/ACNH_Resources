
undefined4 * FUN_026ea720(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  uVar7 = FUN_026e85f0();
  if (((DAT_05572660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05572660), iVar6 != 0)) {
    DAT_05572658 = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_0557265c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_05572660);
  }
  puVar4 = PTR_DAT_04bb43c0;
  puVar1 = (undefined4 *)(param_1 + 0x8b8);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar1);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    puVar10 = &DAT_05572658;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
      puVar10 = &DAT_05572658;
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_026ea8f0;
      local_70 = *(undefined4 *)(param_1 + 0x8b8);
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uStack_6c = *(undefined4 *)(param_1 + 0x8bc);
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(puVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar9 != 0) {
              local_68 = lVar9;
            }
          }
        }
      }
      local_60[0] = 0;
      local_60[1] = 0;
      FUN_01adab50(&local_78,local_60);
      uVar5 = 0;
      do {
        local_5c = uVar5;
        if ((local_5c != 0) && (local_58 = local_5c, local_5c < 0xe)) {
          uVar5 = local_5c + 7;
          if (-1 < (int)local_5c) {
            uVar5 = local_5c;
          }
          local_54 = local_5c;
          if (((uint)((int)uVar5 >> 3) < 2) &&
             ((local_60[(uint)((int)uVar5 >> 3)] >> (ulong)(local_5c & 7) & 1) != 0)) {
            puVar10 = puVar1;
            if (local_5c != 3) {
              puVar10 = &DAT_05572658;
            }
            goto LAB_026ea8f0;
          }
        }
        uVar5 = local_5c + 1;
      } while (local_5c + 1 != 0xe);
    }
    puVar10 = &DAT_05572658;
  }
LAB_026ea8f0:
  uVar8 = FUN_0277dc30(uVar7,puVar10);
  puVar3 = PTR_DAT_04bb37e0;
  if ((uVar8 & 1) != 0) {
    return (undefined4 *)PTR_DAT_04bb37e0;
  }
  uVar7 = FUN_026ea320(param_1);
  if (((DAT_05572660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05572660), iVar6 != 0)) {
    DAT_05572658 = *(undefined4 *)puVar3;
    DAT_0557265c = *(undefined4 *)(puVar3 + 4);
    __cxa_guard_release(&DAT_05572660);
  }
  lVar9 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(puVar1);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    puVar10 = &DAT_05572658;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
      puVar10 = &DAT_05572658;
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_026eaaac;
      local_70 = *(undefined4 *)(param_1 + 0x8b8);
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uStack_6c = *(undefined4 *)(param_1 + 0x8bc);
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(puVar1);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar9 != 0) {
              local_68 = lVar9;
            }
          }
        }
      }
      local_60[0] = 0;
      local_60[1] = 0;
      FUN_01adab50(&local_78,local_60);
      uVar5 = 0;
      do {
        local_5c = uVar5;
        if ((local_5c != 0) && (local_58 = local_5c, local_5c < 0xe)) {
          uVar5 = local_5c + 7;
          if (-1 < (int)local_5c) {
            uVar5 = local_5c;
          }
          local_54 = local_5c;
          if (((uint)((int)uVar5 >> 3) < 2) &&
             ((local_60[(uint)((int)uVar5 >> 3)] >> (ulong)(local_5c & 7) & 1) != 0)) {
            puVar10 = puVar1;
            if (local_5c != 3) {
              puVar10 = &DAT_05572658;
            }
            goto LAB_026eaaac;
          }
        }
        uVar5 = local_5c + 1;
      } while (local_5c + 1 != 0xe);
    }
    puVar10 = &DAT_05572658;
  }
LAB_026eaaac:
  uVar8 = FUN_0277dc30(uVar7,puVar10);
  puVar3 = PTR_DAT_04bb37e0;
  puVar10 = (undefined4 *)PTR_DAT_04bb37e0;
  if ((uVar8 & 1) == 0) {
    if (((DAT_05572660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05572660), iVar6 != 0)) {
      DAT_05572658 = *(undefined4 *)puVar3;
      DAT_0557265c = *(undefined4 *)(puVar3 + 4);
      __cxa_guard_release(&DAT_05572660);
    }
    lVar11 = *(long *)puVar4;
    uVar5 = FUN_0277d6c4(puVar1);
    lVar9 = *(long *)puVar4;
    if (lVar9 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
          return &DAT_05572658;
        }
        local_70 = *(undefined4 *)(param_1 + 0x8b8);
        local_68 = 0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        uStack_6c = *(undefined4 *)(param_1 + 0x8bc);
        uVar5 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar1);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar9 != 0) {
                local_68 = lVar9;
              }
            }
          }
        }
        local_60[0] = 0;
        local_60[1] = 0;
        FUN_01adab50(&local_78,local_60);
        uVar5 = 0;
        do {
          if ((uVar5 != 0) && (uVar5 < 0xe)) {
            uVar2 = uVar5 + 7;
            if (-1 < (int)uVar5) {
              uVar2 = uVar5;
            }
            if (((uint)((int)uVar2 >> 3) < 2) &&
               ((local_60[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar5 & 7) & 1) != 0)) {
              if (uVar5 != 3) {
                puVar1 = &DAT_05572658;
              }
              return puVar1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0xe);
      }
    }
    puVar10 = &DAT_05572658;
  }
  return puVar10;
}

