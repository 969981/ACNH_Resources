
undefined4 * FUN_02815540(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined *local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  long local_68;
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  if (((DAT_0559d558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0559d558), iVar4 != 0)) {
    DAT_0559d54c = *(undefined4 *)PTR_DAT_04bb37e0;
    DAT_0559d550 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    __cxa_guard_release(&DAT_0559d558);
  }
  puVar2 = PTR_DAT_04bb43c0;
  puVar5 = (undefined4 *)(param_1 + 0x1190);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(puVar5);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    puVar7 = &DAT_0559d54c;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
      puVar7 = &DAT_0559d54c;
      if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
        local_70 = *(undefined2 *)(param_1 + 0x1190);
        local_68 = 0;
        local_6e = *(undefined2 *)(param_1 + 0x1192);
        local_6c = *(undefined4 *)(param_1 + 0x1194);
        local_78 = PTR_DAT_04bc0510 + 0x10;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar6 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar6 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(puVar5);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
              lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar6 != 0) {
                local_68 = lVar6;
              }
            }
          }
        }
        local_60[0] = 0;
        local_60[1] = 0;
        FUN_01adab50(&local_78,local_60);
        uVar3 = 0;
        do {
          local_5c = uVar3;
          if ((local_5c != 0) && (local_58 = local_5c, local_5c < 0xe)) {
            uVar3 = local_5c + 7;
            if (-1 < (int)local_5c) {
              uVar3 = local_5c;
            }
            local_54 = local_5c;
            if (((uint)((int)uVar3 >> 3) < 2) &&
               ((local_60[(uint)((int)uVar3 >> 3)] >> (ulong)(local_5c & 7) & 1) != 0)) {
              puVar7 = puVar5;
              if (local_5c != 4) {
                puVar7 = &DAT_0559d54c;
              }
              goto LAB_0281572c;
            }
          }
          uVar3 = local_5c + 1;
        } while (local_5c + 1 != 0xe);
        puVar7 = &DAT_0559d54c;
LAB_0281572c:
        lVar8 = *(long *)puVar2;
      }
    }
    else {
      puVar7 = &DAT_0559d54c;
    }
  }
  uVar3 = FUN_0277d6c4(puVar7);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      if (((DAT_0559d558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0559d558), iVar4 != 0)) {
        DAT_0559d54c = *(undefined4 *)PTR_DAT_04bb37e0;
        DAT_0559d550 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        __cxa_guard_release(&DAT_0559d558);
      }
      lVar6 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(puVar5);
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
            return &DAT_0559d54c;
          }
          local_70 = *(undefined2 *)(param_1 + 0x1190);
          local_68 = 0;
          local_6e = *(undefined2 *)(param_1 + 0x1192);
          local_6c = *(undefined4 *)(param_1 + 0x1194);
          local_78 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar6 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(puVar5);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
                lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8);
                if (lVar6 != 0) {
                  local_68 = lVar6;
                }
              }
            }
          }
          local_60[0] = 0;
          local_60[1] = 0;
          FUN_01adab50(&local_78,local_60);
          uVar3 = 0;
          do {
            if ((uVar3 != 0) && (uVar3 < 0xe)) {
              uVar1 = uVar3 + 7;
              if (-1 < (int)uVar3) {
                uVar1 = uVar3;
              }
              if (((uint)((int)uVar1 >> 3) < 2) &&
                 ((local_60[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) {
                if (uVar3 != 4) {
                  puVar5 = &DAT_0559d54c;
                }
                return puVar5;
              }
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 != 0xe);
        }
      }
      return &DAT_0559d54c;
    }
  }
  puVar5 = (undefined4 *)FUN_026e8d10(param_1);
  return puVar5;
}

