
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff9c : 0x026eae74 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_026eacf0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  byte local_48 [8];
  uint local_24;
  
  FUN_026e8d10();
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar5 = (undefined4 *)FUN_026e8d10(param_1);
      lVar7 = *(long *)puVar2;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      local_58 = *puVar5;
      local_54 = puVar5[1];
      local_50 = 0;
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(puVar5);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_50 = lVar7;
          }
        }
      }
      local_24 = local_24 & 0xffff0000;
      FUN_01adab50(&local_60,&local_24);
      bVar6 = (byte)local_24;
      goto LAB_026eae30;
    }
  }
  bVar6 = 0;
LAB_026eae30:
  local_24 = 6;
  if ((bVar6 >> 6 & 1) == 0) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,6);
    if (((DAT_05572680 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05572680), iVar4 != 0)) {
      DAT_05572678 = *(undefined4 *)PTR_DAT_04bb37e0;
      DAT_0557267c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      __cxa_guard_release(&DAT_05572680);
    }
    lVar7 = *(long *)puVar2;
    puVar5 = (undefined4 *)(param_1 + 0x1170);
    uVar3 = FUN_0277d6c4(puVar5);
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
          return &DAT_05572678;
        }
        local_50 = 0;
        local_58 = *(undefined4 *)(param_1 + 0x1170);
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_54 = *(undefined4 *)(param_1 + 0x1174);
        uVar3 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar7 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(puVar5);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              local_50 = lVar7;
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar3 = 0;
        do {
          if ((uVar3 != 0) && (uVar3 < 0xe)) {
            uVar1 = uVar3 + 7;
            if (-1 < (int)uVar3) {
              uVar1 = uVar3;
            }
            if (((uint)((int)uVar1 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) {
              if (uVar3 != 6) {
                puVar5 = &DAT_05572678;
              }
              return puVar5;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 != 0xe);
      }
    }
    puVar5 = &DAT_05572678;
  }
  else {
    puVar5 = (undefined4 *)PTR_DAT_04bb37e0;
  }
  return puVar5;
}

