
void FUN_028e4410(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  bool bVar11;
  long lVar12;
  ushort local_68 [2];
  ushort local_64 [2];
  undefined **local_60;
  undefined4 local_58;
  uint uStack_54;
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_50 = (uint *)0x0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_60 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
    uVar5 = FUN_01ae8b58(&local_60);
    if ((uVar5 & 1) != 0) {
      return;
    }
LAB_028e46d8:
    local_48 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (*(uint *)(lVar9 + 0x1d8) <= uVar3) goto LAB_028e4614;
      puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
      if (puVar10 == (uint *)0x0) goto LAB_028e4618;
      uVar3 = *puVar10;
      bVar11 = false;
      local_50 = puVar10;
      if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
        puVar6 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
        if (*puVar6 != 0) {
          uVar3 = puVar6[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar9 != 0) {
              uVar8 = 0;
              if ((ulong)uVar3 != 0) {
                uVar8 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar8) {
                uVar8 = 0xffffffff;
              }
              if ((uVar8 < DAT_05326ec0) &&
                 (*(short *)(DAT_05326ec8 + (long)(int)uVar8 * 2) == 0xad)) {
                return;
              }
            }
          }
          if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)
             ) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar9 != 0) {
              uVar8 = 0;
              if ((ulong)uVar3 != 0) {
                uVar8 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar8) {
                uVar8 = 0xffffffff;
              }
              if ((uVar8 < DAT_05326ec0) &&
                 (*(short *)(DAT_05326ec8 + (long)(int)uVar8 * 2) == 0xaf)) {
                return;
              }
            }
          }
        }
        bVar11 = false;
      }
    }
    else {
LAB_028e4614:
      puVar10 = (uint *)0x0;
LAB_028e4618:
      bVar11 = true;
    }
    uVar5 = FUN_01ae8b58(&local_60);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (bVar11) goto LAB_028e46d8;
    uVar3 = *puVar10;
    local_48 = 0;
    if ((uVar3 != 0) && (puVar10 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
      local_48 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar8 = 0;
            if ((ulong)uVar3 != 0) {
              uVar8 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05326ec0) &&
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), local_48 < 0xbd))
            goto LAB_028e46dc;
          }
        }
        local_48 = 0;
      }
    }
  }
LAB_028e46dc:
  local_44 = 0xac;
  if (local_48 != 0xac) {
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == 0x16) goto LAB_028e473c;
      uVar5 = uVar5 + 1;
    } while (DAT_04c8c0f0 != uVar5);
  }
  uVar5 = 0;
LAB_028e473c:
  puVar10 = &DAT_04c8c0f0;
  if (((DAT_053ed1b8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc2a38), puVar10 = (uint *)PTR_DAT_04bb3120, iVar4 != 0)
     ) {
    FUN_02129270(&DAT_053ed1a8);
    __cxa_guard_release(&DAT_053ed1b8);
    puVar10 = (uint *)PTR_DAT_04bb3120;
  }
  uVar8 = (uint)uVar5;
  uVar3 = *param_3;
  local_64[0] = 0;
  uVar1 = *param_1;
  if (*(uint *)PTR_DAT_04bc2a30 <= uVar3) {
    uVar3 = 0;
  }
  uVar3 = *(uint *)(*(long *)(PTR_DAT_04bc2a30 + 8) + (long)(int)uVar3 * 4);
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (*puVar10 <= uVar8) {
    uVar8 = 0;
  }
  local_64[0] = (ushort)((uVar3 & 0xf) << 7) |
                (ushort)(*(int *)(*(long *)(puVar10 + 2) + (long)(int)uVar8 * 4) << 0xb) |
                (ushort)uVar1 & 0x7f;
  FUN_007ef010(local_68,local_64);
  if (local_50 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar3 = *local_50;
    uVar7 = 0;
    if ((uVar3 != 0) && (local_50 != (uint *)(ulong)uVar3)) {
      puVar10 = (uint *)((long)local_50 - (long)(ulong)uVar3);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar3 = puVar10[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar10 + lVar9 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar9 != 0) {
            uVar8 = 0;
            if ((ulong)uVar3 != 0) {
              uVar8 = (uint)((ulong)((long)local_50 - lVar9) / (ulong)uVar3);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), uVar7 < 0xbd))
            goto LAB_028e4850;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_028e4850:
  uVar3 = uStack_54 & 0xffff0000 | (uint)local_68[0];
  if (uVar7 != 0xac) {
    uVar3 = uStack_54;
  }
  *param_2 = local_58;
  param_2[1] = uVar3;
  return;
}

