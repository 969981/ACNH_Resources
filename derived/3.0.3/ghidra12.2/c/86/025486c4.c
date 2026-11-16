
undefined8 FUN_025486c4(byte *param_1,int *param_2,byte param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  byte local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_34;
  undefined4 local_18;
  uint local_14;
  
  puVar12 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar12 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_34 = *puVar12;
  FUN_0071c8d0(&local_48,&local_34,PTR_DAT_04bb3238,0);
  plVar7 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
    if ((uVar9 & 1) == 0) {
      local_3f = '\0';
    }
  }
  if (local_48 == (long *)0x0) {
    return 0;
  }
  if (local_40 == '\0') {
    return 0;
  }
  if (local_3f == '\0') {
    return 0;
  }
  if (local_3e == '\0') {
    return 0;
  }
  uVar9 = FUN_00a738a0(param_1,0);
  if (((uVar9 & 1) == 0) || (local_70 = FUN_00a74b78(param_1), local_70 == 9)) {
    if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
      puVar12 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    else {
      puVar12 = (undefined4 *)PTR_DAT_04bb3238;
    }
    local_18 = *puVar12;
    FUN_0071c8d0(&local_70,&local_18,PTR_DAT_04bb3238,0);
    plVar7 = (long *)CONCAT44(iStack_6c,local_70);
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
      if ((uVar9 & 1) == 0) {
        local_68._0_2_ = (ushort)(byte)local_68;
      }
    }
    if ((((CONCAT44(iStack_6c,local_70) != 0) && ((byte)local_68 != '\0')) &&
        (local_68._1_1_ != '\0')) && (local_68._2_1_ != '\0')) {
      lVar13 = *(long *)(CONCAT44(iStack_6c,local_70) + 0x70);
      local_14 = 0;
      if (lVar13 != 0) {
        uVar3 = *(uint *)(lVar13 + 0x280);
        local_14 = 0;
        if (uVar3 < 0x149) {
          local_14 = uVar3;
        }
      }
      puVar10 = (uint *)FUN_0251d928(local_14);
      puVar6 = (uint *)((long)puVar10 - (ulong)*puVar10);
      if (((*puVar10 != 0) && (puVar6 != (uint *)0x0)) &&
         ((uVar3 = *puVar6, uVar3 != 0 &&
          ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))))) {
        lVar13 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar6 + lVar13 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar13 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar4);
          }
          uVar4 = uVar2;
          if (uVar3 <= uVar2) {
            uVar4 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc2ff0 <= uVar4) ||
             (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar4 * 2),
             8 < uVar5 || (uVar5 & 0xfffe) != 2)) {
            uVar4 = uVar2;
            if (uVar3 <= uVar2) {
              uVar4 = 0xffffffff;
            }
            if (((*(uint *)PTR_DAT_04bc2ff0 <= uVar4) ||
                (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar4 * 2),
                8 < uVar5)) || ((uVar5 != 2 && (uVar5 != 5)))) {
              uVar4 = uVar2;
              if (uVar3 <= uVar2) {
                uVar4 = 0xffffffff;
              }
              if (((*(uint *)PTR_DAT_04bc2ff0 <= uVar4) ||
                  (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar4 * 2),
                  8 < uVar5)) || ((uVar5 != 2 && (uVar5 != 4)))) {
                if (uVar3 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if (((*(uint *)PTR_DAT_04bc2ff0 <= uVar2) ||
                    (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar2 * 2),
                    8 < uVar5)) || ((uVar5 != 6 && (uVar5 != 2)))) goto LAB_02548a3c;
              }
            }
          }
          goto LAB_025489b8;
        }
      }
    }
LAB_02548a3c:
    uVar11 = 0;
  }
  else {
LAB_025489b8:
    plVar7 = local_48;
    iStack_6c = 0;
    local_5c = 0x3f00000000000000;
    local_70 = *param_2;
    local_63 = 0;
    local_54 = 0;
    local_50 = 0;
    if ((int)local_48[0x2f] != 1) {
      plVar1 = local_48 + 0x3dd;
      uVar9 = FUN_00a738a0(plVar1,0);
      iStack_6c = 0;
      if ((uVar9 & 1) != 0) {
        local_14 = FUN_00a74b78(plVar1);
        iStack_6c = 1;
        if (local_14 < 0xf) {
          if ((1 << (ulong)(local_14 & 0x1f) & 0x600dU) == 0) {
            if ((local_14 == 7) || (local_14 == 9)) {
              iStack_6c = (uint)((*(byte *)(plVar7 + 0x2fa) & 6) != 0) << 1;
            }
          }
          else {
            iStack_6c = 2;
          }
        }
      }
    }
    local_68 = 9;
    local_60 = *(undefined4 *)(local_48[0xd] + 0x2b4);
    local_64 = param_3 & 1;
    FUN_023bacf4(local_48,PTR_DAT_04bb2ce8,&local_70,0);
    uVar11 = 1;
  }
  return uVar11;
}

