
/* WARNING: Removing unreachable block (ram,0x03719e94) */

void FUN_03719b70(ushort *param_1,undefined8 param_2,ulong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ushort uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint local_64;
  ushort local_60 [2];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  FUN_007ef010(param_1,&DAT_04cb6038);
  lVar12 = DAT_05abbc58;
  if (DAT_05abbc58 == 0) {
    return;
  }
  if (((DAT_053ed1b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_053ed1b8), iVar2 != 0)) {
    FUN_02129270(&DAT_053ed1a8);
    __cxa_guard_release(&DAT_053ed1b8);
  }
  if (0 < (int)DAT_053ed1a8) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_053ed1b0 + uVar8 * 4) == 0) goto LAB_03719bf8;
      uVar8 = uVar8 + 1;
    } while (DAT_053ed1a8 != uVar8);
  }
  uVar8 = 0;
LAB_03719bf8:
  local_5c = (uint)uVar8;
  if (DAT_05aed670 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  iVar2 = *(int *)(puVar14 + 7);
  uVar1 = FUN_0376baa0(param_2);
  iVar5 = *(int *)(lVar12 + 0xe0);
  local_64 = 0;
  if (iVar5 != 0) {
    plVar9 = *(long **)(lVar12 + 0xe8);
    lVar12 = (long)iVar5 << 3;
    do {
      lVar10 = *plVar9;
      if (*(ushort *)(lVar10 + 0x38) == uVar1) {
        if ((*(int *)(lVar10 + 0x3c) == 2) || ((*(ushort *)(lVar10 + 0x114) >> 7 & 1) != 0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = *(ushort *)(lVar10 + 0x114) >> 5 & 1;
        }
        uVar13 = (ushort)*(undefined4 *)(lVar10 + 0xd0);
        local_64 = *(uint *)(lVar10 + 0xd8);
        iVar5 = *(int *)(lVar10 + 0xdc);
        goto LAB_03719ce8;
      }
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  uVar6 = 0;
  uVar13 = 0;
  iVar5 = 0;
LAB_03719ce8:
  local_60[0] = uVar1;
  if (((iVar2 == -0x7975b8e8) || (iVar2 == -0x17df00c3)) || (iVar2 == -0x3e092032)) {
    if (uVar6 == 0) {
      if (uVar1 < 100) {
        iVar2 = 6;
        if ((param_3 & 1) == 0) {
          iVar2 = 1;
        }
        if (((DAT_053ed1b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_053ed1b8), iVar5 != 0)) {
          FUN_02129270(&DAT_053ed1a8);
          __cxa_guard_release(&DAT_053ed1b8);
        }
        if (0 < (int)DAT_053ed1a8) {
          uVar8 = 0;
          do {
            if (*(int *)(DAT_053ed1b0 + uVar8 * 4) == iVar2) goto LAB_03719dec;
            uVar8 = uVar8 + 1;
          } while (DAT_053ed1a8 != uVar8);
        }
        uVar8 = 0;
LAB_03719dec:
        local_5c = (uint)uVar8;
        uVar13 = local_60[0];
      }
      else if (uVar1 < 200) {
        iVar2 = 7;
        if ((param_3 & 1) == 0) {
          iVar2 = 2;
        }
        if (((DAT_053ed1b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_053ed1b8), iVar5 != 0)) {
          FUN_02129270(&DAT_053ed1a8);
          __cxa_guard_release(&DAT_053ed1b8);
        }
        if (0 < (int)DAT_053ed1a8) {
          uVar8 = 0;
          do {
            if (*(int *)(DAT_053ed1b0 + uVar8 * 4) == iVar2) goto LAB_03719f0c;
            uVar8 = uVar8 + 1;
          } while (DAT_053ed1a8 != uVar8);
        }
        uVar8 = 0;
LAB_03719f0c:
        local_5c = (uint)uVar8;
        uVar13 = local_60[0] - 100;
      }
      else if (uVar1 < 300) {
        uVar7 = 8;
        if ((param_3 & 1) == 0) {
          uVar7 = 3;
        }
        FUN_02128be0(&local_5c,uVar7);
        uVar13 = uVar1 - 200;
      }
      else if (uVar1 < 400) {
        uVar7 = 9;
        if ((param_3 & 1) == 0) {
          uVar7 = 4;
        }
        FUN_02128be0(&local_5c,uVar7);
        uVar13 = uVar1 - 300;
      }
      else {
        if (499 < uVar1) {
          return;
        }
        uVar7 = 10;
        if ((param_3 & 1) == 0) {
          uVar7 = 5;
        }
        FUN_02128be0(&local_5c,uVar7);
        uVar13 = uVar1 - 400;
      }
      goto LAB_0371a06c;
    }
  }
  else if (local_64 != 0) {
    iVar2 = 0xb;
    if ((param_3 & 1) != 0) {
      iVar2 = 0xc;
    }
    if (((DAT_053ed1b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053ed1b8), iVar3 != 0)) {
      FUN_02129270(&DAT_053ed1a8);
      __cxa_guard_release(&DAT_053ed1b8);
    }
    if (0 < (int)DAT_053ed1a8) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_053ed1b0 + uVar8 * 4) == iVar2) goto LAB_03719e4c;
        uVar8 = uVar8 + 1;
      } while (DAT_053ed1a8 != uVar8);
    }
    uVar8 = 0;
LAB_03719e4c:
    local_5c = (uint)uVar8;
    if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
      if (DAT_05574040 == 0) {
        lVar12 = 0;
      }
      else {
        local_54 = 1;
        if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar10 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
        }
        else {
          lVar10 = 0;
        }
        lVar12 = 0;
        if (lVar10 != 0) {
          lVar12 = lVar10 + 0xa8;
        }
      }
      if ((*(long **)(lVar12 + 0x450) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar12 + 0x450), puVar14 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar14)();
        uVar4 = uVar4 ^ 1;
      }
      iVar3 = 0;
      iVar2 = 0;
      iVar11 = 0;
      local_54 = local_64;
      do {
        local_58 = (uint)*(ushort *)
                          (*(long *)(lVar12 + 0x438) + *(long *)(lVar12 + 0x430) +
                           (long)iVar11 * 0x1178 + 6);
        if (0x14 < local_58) {
          local_58 = 0;
        }
        if (local_64 == local_58) {
          if (iVar2 == iVar5) goto LAB_0371a048;
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar3 != 0x26);
      iVar3 = -1;
LAB_0371a048:
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar12 + 0x450) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar12 + 0x450) + 8), puVar14 != (undefined8 *)0x0))
      {
        (**(code **)*puVar14)();
      }
    }
    else {
      iVar3 = FUN_036edff8(*(undefined8 *)PTR_DAT_04bc1530,local_60);
    }
    uVar13 = (ushort)iVar3;
    if (iVar3 < 0) {
      return;
    }
LAB_0371a06c:
    if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 0x16) goto LAB_0371a0bc;
        uVar8 = uVar8 + 1;
      } while (DAT_04c8c0f0 != uVar8);
    }
    uVar8 = 0;
LAB_0371a0bc:
    if (((DAT_053ed1b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_053ed1b8), iVar2 != 0)) {
      FUN_02129270(&DAT_053ed1a8);
      __cxa_guard_release(&DAT_053ed1b8);
    }
    uVar4 = local_5c;
    if (DAT_053ed1a8 <= local_5c) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(DAT_053ed1b0 + (long)(int)uVar4 * 4);
    if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar15 = (uint)uVar8;
    if (DAT_04c8c0f0 <= uVar15) {
      uVar15 = 0;
    }
    uVar1 = (ushort)((uVar4 & 0xf) << 7) |
            (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar15 * 4) << 0xb);
    goto LAB_0371a100;
  }
  iVar2 = 0xe;
  if ((param_3 & 1) != 0) {
    iVar2 = 0xf;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == iVar2) goto LAB_03719d70;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_03719d70:
  if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar4 = (uint)uVar8;
  if (DAT_04c8c0f0 <= uVar4) {
    uVar4 = 0;
  }
  uVar1 = (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) << 0xb);
LAB_0371a100:
  *param_1 = uVar1 | uVar13 & 0x7f;
  return;
}

