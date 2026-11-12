
void FUN_0080ce50(undefined4 *param_1)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 auStack_1772 [2];
  undefined1 auStack_1770 [2];
  undefined1 auStack_176e [2];
  undefined1 auStack_176c [28];
  int local_1750;
  long local_174c;
  long local_1744;
  int local_173c;
  undefined1 auStack_1732 [2];
  short local_1730 [4];
  long local_1728;
  long lStack_1720;
  ushort local_8c [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int iStack_58;
  uint local_54;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar6 == 0) {
    return;
  }
  if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28);
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar7)();
    }
  }
  lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
  local_88 = *(undefined8 *)(lVar1 + 0xc138);
  uStack_80 = *(undefined8 *)(lVar1 + 0xc140);
  local_78 = *(undefined8 *)(lVar1 + 0xc148);
  local_70 = *(undefined4 *)(lVar1 + 0xc150);
  local_6c = (int)*(undefined8 *)(lVar1 + 0xc154);
  uStack_68 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0xc154) >> 0x20);
  local_64 = (undefined4)*(undefined8 *)(lVar1 + 0xc15c);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0xc15c) >> 0x20);
  local_54 = *(uint *)(lVar1 + 0xc16c);
  local_5c = (undefined4)*(undefined8 *)(lVar1 + 0xc164);
  iStack_58 = (int)((ulong)*(undefined8 *)(lVar1 + 0xc164) >> 0x20);
  if (1 < local_54) {
    local_54 = 0;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_0080cf8c:
    if (7 < *pbVar10) {
LAB_0080cf98:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar6 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar10 = (byte *)(lVar6 + 0x471);
          }
        }
        uVar12 = (ushort)*pbVar10;
        if (*pbVar10 < 8) goto LAB_0080d008;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0080cf8c;
      }
      goto LAB_0080cf98;
    }
  }
  uVar12 = (ushort)*pbVar10;
  if (7 < uVar12) {
    uVar12 = 0xff;
  }
LAB_0080d008:
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 8) goto LAB_0080d050;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_0080d050:
  local_8c[0] = 0;
  uVar11 = uVar12 & 0x7f;
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar9 = (uint)uVar8;
  if (DAT_04c8c0f0 <= uVar9) {
    uVar9 = 0;
  }
  if (7 < uVar12) {
    uVar11 = 0x7f;
  }
  local_8c[0] = uVar11 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) << 0xb) | 0x780;
  FUN_007ef010(auStack_1732,local_8c);
  FUN_007e4920(local_1730,auStack_1732);
  if ((((local_1730[0] != DAT_04cb6038) && (lStack_1720 != 0 || local_1728 != 0)) &&
      (FUN_007e6230(auStack_176c,local_1730), local_6c == local_1750)) &&
     ((local_174c == CONCAT44(local_64,uStack_68) && local_1744 == CONCAT44(local_5c,uStack_60)) &&
      local_173c == iStack_58)) {
    FUN_007e64e0(local_1730,&local_88);
    FUN_007e7b10(local_1730);
  }
  iVar5 = 0;
  do {
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 8) goto LAB_0080d16c;
        uVar8 = uVar8 + 1;
      } while (DAT_04c8c0f0 != uVar8);
    }
    uVar8 = 0;
LAB_0080d16c:
    local_8c[0] = 0;
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar9 = (uint)uVar8;
    if (DAT_04c8c0f0 <= uVar9) {
      uVar9 = 0;
    }
    local_8c[0] = (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) << 0xb) |
                  (ushort)(iVar5 << 7) | uVar11;
    FUN_007ef010(auStack_176e,local_8c);
    FUN_007e4920(local_1730,auStack_176e);
    if ((((local_1730[0] != DAT_04cb6038) && (lStack_1720 != 0 || local_1728 != 0)) &&
        (FUN_007e6230(auStack_176c,local_1730), local_6c == local_1750)) &&
       ((local_174c == CONCAT44(local_64,uStack_68) && local_1744 == CONCAT44(local_5c,uStack_60))
        && local_173c == iStack_58)) {
      FUN_007e64e0(local_1730,&local_88);
      FUN_007e7b10(local_1730);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 10) goto LAB_0080d2ac;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_0080d2ac:
  local_8c[0] = 0;
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar9 = (uint)uVar8;
  if (DAT_04c8c0f0 <= uVar9) {
    uVar9 = 0;
  }
  local_8c[0] = uVar11 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) << 0xb) | 0x780;
  FUN_007ef010(auStack_1770,local_8c);
  FUN_007e4920(local_1730,auStack_1770);
  if ((((local_1730[0] != DAT_04cb6038) && (lStack_1720 != 0 || local_1728 != 0)) &&
      (FUN_007e6230(auStack_176c,local_1730), local_6c == local_1750)) &&
     ((local_174c == CONCAT44(local_64,uStack_68) && local_1744 == CONCAT44(local_5c,uStack_60)) &&
      local_173c == iStack_58)) {
    FUN_007e64e0(local_1730,&local_88);
    FUN_007e7b10(local_1730);
  }
  iVar5 = 0;
  do {
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 10) goto LAB_0080d3bc;
        uVar8 = uVar8 + 1;
      } while (DAT_04c8c0f0 != uVar8);
    }
    uVar8 = 0;
LAB_0080d3bc:
    local_8c[0] = 0;
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar9 = (uint)uVar8;
    if (DAT_04c8c0f0 <= uVar9) {
      uVar9 = 0;
    }
    local_8c[0] = (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) << 0xb) |
                  (ushort)(iVar5 << 7) | uVar11;
    FUN_007ef010(auStack_1772,local_8c);
    FUN_007e4920(local_1730,auStack_1772);
    if ((((local_1730[0] != DAT_04cb6038) && (lStack_1720 != 0 || local_1728 != 0)) &&
        (FUN_007e6230(auStack_176c,local_1730), local_6c == local_1750)) &&
       ((local_174c == CONCAT44(local_64,uStack_68) && local_1744 == CONCAT44(local_5c,uStack_60))
        && local_173c == iStack_58)) {
      FUN_007e64e0(local_1730,&local_88);
      FUN_007e7b10(local_1730);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) {
      return;
    }
  } while( true );
}

