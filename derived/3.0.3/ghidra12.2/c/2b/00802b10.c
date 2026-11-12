
bool FUN_00802b10(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  long lVar12;
  int local_2df8;
  undefined1 auStack_2df2 [2];
  undefined1 auStack_2df0 [6];
  undefined1 auStack_2dea [2];
  int local_2de8;
  int local_2de4;
  int local_2de0;
  undefined1 auStack_2dda [2];
  undefined1 auStack_2dd8 [5796];
  undefined1 auStack_1734 [4];
  undefined1 auStack_1730 [24];
  undefined4 local_1718;
  undefined4 local_1714;
  undefined **local_1710;
  long local_1708;
  undefined1 local_1700;
  byte local_16ff;
  byte local_16f4 [4];
  uint local_16f0;
  undefined1 auStack_16ea [2];
  undefined1 auStack_16e8 [5796];
  byte local_44 [2];
  undefined1 auStack_42 [2];
  
  FUN_007ef010(auStack_42,param_1);
  local_44[0] = *param_2;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  uVar7 = FUN_00801770(auStack_42,local_44);
  if ((uVar7 & 1) != 0) {
    FUN_007ef010(auStack_16ea,param_1);
    FUN_007e4920(auStack_16e8,auStack_16ea);
    uVar7 = FUN_007e4bb0(auStack_16e8);
    if ((uVar7 & 1) == 0) {
      return false;
    }
    uVar1 = *param_1;
    if (uVar1 == DAT_04cb6038) {
      return false;
    }
    if (7 < *param_2) {
      return false;
    }
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar7 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar1 >> 0xb)) goto LAB_00802c0c;
        uVar7 = uVar7 + 1;
      } while (DAT_04c8c0f0 != uVar7);
    }
    uVar7 = 0;
LAB_00802c0c:
    local_16f0 = (uint)uVar7;
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar5 = local_16f0;
    if (DAT_04c8c0f0 <= local_16f0) {
      uVar5 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) != 0) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar5 = local_16f0;
      if (DAT_04c8c0f0 <= local_16f0) {
        uVar5 = 0;
      }
      if ((((*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) != 1) &&
           (iVar4 = FUN_00802664(&local_16f0), iVar4 != 4)) &&
          (iVar4 = FUN_00802664(&local_16f0), iVar4 != 5)) &&
         (iVar4 = FUN_00802664(&local_16f0), iVar4 != 0x1a)) {
        return false;
      }
    }
    local_16f4[0] = *param_2;
    if (7 < local_16f4[0]) {
      local_16f4[0] = 0xff;
    }
    lVar8 = FUN_025830c0(DAT_055021a0,local_16f4,1);
    if (lVar8 == 0) {
      return false;
    }
    local_1708 = lVar8 + 0x150;
    local_1700 = 1;
    if ((*(long **)(lVar8 + 0x178) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x178), puVar9 == (undefined8 *)0x0)) {
      bVar3 = 0;
    }
    else {
      bVar3 = (**(code **)*puVar9)();
    }
    local_16ff = bVar3 & 1;
    local_1710 = &PTR_FUN_04917460;
    puVar10 = (undefined4 *)FUN_02815540(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
    puVar2 = PTR_DAT_04bb43c0;
    local_1718 = *puVar10;
    local_1714 = puVar10[1];
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_1718);
    if (*(long *)puVar2 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        FUN_01ad5d04(auStack_1730,&local_1718);
        uVar7 = FUN_01ae887c(auStack_1730);
        if ((uVar7 & 1) != 0) {
          FUN_007f3c20(auStack_1734,10);
          bVar3 = *param_2;
          if (7 < bVar3) {
            bVar3 = 0xff;
          }
          FUN_007eef5c(&local_2df8,auStack_1734,0xffffffff,(int)(char)bVar3);
          FUN_007ef010(auStack_2dda,&local_2df8);
          FUN_007e4920(auStack_2dd8,auStack_2dda);
          iVar6 = FUN_007e68d0(auStack_16e8);
          local_2de8 = iVar6;
          iVar4 = FUN_007e68d0(auStack_2dd8);
          local_2de0 = iVar4;
          goto LAB_00802f58;
        }
      }
    }
    puVar10 = (undefined4 *)FUN_02814c00(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
    local_1718 = *puVar10;
    local_1714 = puVar10[1];
    lVar12 = *(long *)puVar2;
    uVar5 = FUN_0277d6c4(&local_1718);
    if (*(long *)puVar2 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        piVar11 = (int *)FUN_026e8d10(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
        local_2de8 = *piVar11;
        local_2de4 = piVar11[1];
        uVar7 = FUN_0277d9a8(&local_2de8);
        if ((uVar7 & 1) != 0) {
          FUN_01ad5d04(auStack_1730,&local_2de8);
          uVar7 = FUN_01ae887c(auStack_1730);
          if ((uVar7 & 1) != 0) {
            FUN_007f3c20(auStack_2df0,10);
            bVar3 = *param_2;
            if (7 < bVar3) {
              bVar3 = 0xff;
            }
            FUN_007eef5c(auStack_2dea,auStack_2df0,0xffffffff,(int)(char)bVar3);
            FUN_007ef010(auStack_2df2,auStack_2dea);
            FUN_007e4920(auStack_2dd8,auStack_2df2);
            iVar6 = FUN_007e68d0(auStack_16e8);
            local_2de0 = iVar6;
            iVar4 = FUN_007e68d0(auStack_2dd8);
            local_2df8 = iVar4;
LAB_00802f58:
            FUN_02640184(&local_1710);
            return iVar6 != iVar4;
          }
        }
      }
    }
    if ((((bVar3 & 1) != 0) && (*(long *)(lVar8 + 0x178) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x178) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return false;
}

