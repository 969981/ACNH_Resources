
undefined8 FUN_00808360(byte *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 auStack_174e [2];
  int local_174c;
  short local_1748;
  undefined6 uStack_1746;
  long lStack_1740;
  int local_1738;
  int local_1730;
  long local_172c;
  long local_1724;
  int local_171c;
  undefined1 auStack_1712 [2];
  short local_1710 [4];
  long local_1708;
  long lStack_1700;
  ushort local_70 [2];
  byte local_6c [12];
  
  local_6c[0] = *param_1;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  if (lVar8 == 0) {
    return 0;
  }
  if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar9)();
    uVar10 = uVar10 & 0xffffffff;
  }
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    lVar2 = *(long *)(lVar8 + 8);
    lVar3 = *(long *)(lVar8 + 0x10);
    plVar12 = *(long **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      plVar12 = (long *)*plVar12;
    }
    else if ((plVar12 == (long *)0x0) || (plVar12 = (long *)plVar12[0x26], plVar12 == (long *)0x0))
    goto joined_r0x008087d0;
    lVar11 = (**(code **)(*plVar12 + 0x38))();
    puVar6 = PTR_DAT_04bb3170;
    puVar5 = PTR_DAT_04bb3128;
    puVar4 = PTR_DAT_04bb3120;
    if (lVar11 != 0) {
      lVar3 = lVar3 + lVar2;
      piVar1 = (int *)(lVar3 + 0xc138);
      iVar18 = 0;
      uVar15 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
      iVar13 = 5;
      if (uVar15 < 2) {
        iVar13 = 1;
      }
      plVar12 = (long *)(lVar3 + 0xc13c);
      do {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_00706e58(puVar4);
          __cxa_guard_release(puVar5);
        }
        if (0 < (int)*(uint *)puVar4) {
          uVar16 = 0;
          do {
            if (*(int *)(*(long *)(puVar4 + 8) + uVar16 * 4) == (uint)(1 < uVar15) * 4)
            goto LAB_0080850c;
            uVar16 = uVar16 + 1;
          } while (*(uint *)puVar4 != uVar16);
        }
        uVar16 = 0;
LAB_0080850c:
        local_70[0] = 0;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_00706e58(puVar4);
          __cxa_guard_release(puVar5);
        }
        uVar14 = (uint)uVar16;
        if (*(uint *)puVar4 <= uVar14) {
          uVar14 = 0;
        }
        local_70[0] = (ushort)iVar18 |
                      (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar14 * 4) << 0xb);
        FUN_007ef010(auStack_1712,local_70);
        FUN_007e4920(local_1710,auStack_1712);
        if ((((local_1710[0] != *(short *)puVar6) && (lStack_1700 != 0 || local_1708 != 0)) &&
            (FUN_007e6230(&local_174c,local_1710), local_1730 == *(int *)(lVar3 + 0xc154))) &&
           ((*(long *)(lVar3 + 0xc158) == local_172c && *(long *)(lVar3 + 0xc160) == local_1724) &&
            *(int *)(lVar3 + 0xc168) == local_171c)) {
          if ((local_1748 == 0) || (*(short *)plVar12 == 0)) {
            if (local_174c == *piVar1) goto LAB_00808818;
          }
          else if ((local_174c == *piVar1) &&
                  ((*plVar12 == CONCAT62(uStack_1746,local_1748) &&
                   *(long *)(lVar3 + 0xc144) == lStack_1740) &&
                   *(int *)(lVar3 + 0xc14c) == local_1738)) goto LAB_00808818;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 100);
      iVar18 = 0;
      do {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_00706e58(puVar4);
          __cxa_guard_release(puVar5);
        }
        if (0 < (int)*(uint *)puVar4) {
          uVar16 = 0;
          do {
            if (*(int *)(*(long *)(puVar4 + 8) + uVar16 * 4) == iVar13) goto LAB_0080869c;
            uVar16 = uVar16 + 1;
          } while (*(uint *)puVar4 != uVar16);
        }
        uVar16 = 0;
LAB_0080869c:
        local_70[0] = 0;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_00706e58(puVar4);
          __cxa_guard_release(puVar5);
        }
        uVar15 = (uint)uVar16;
        if (*(uint *)puVar4 <= uVar15) {
          uVar15 = 0;
        }
        local_70[0] = (ushort)iVar18 |
                      (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar15 * 4) << 0xb);
        FUN_007ef010(auStack_174e,local_70);
        FUN_007e4920(local_1710,auStack_174e);
        if ((((local_1710[0] != *(short *)puVar6) && (lStack_1700 != 0 || local_1708 != 0)) &&
            (FUN_007e6230(&local_174c,local_1710), local_1730 == *(int *)(lVar3 + 0xc154))) &&
           ((*(long *)(lVar3 + 0xc158) == local_172c && *(long *)(lVar3 + 0xc160) == local_1724) &&
            *(int *)(lVar3 + 0xc168) == local_171c)) {
          if ((local_1748 == 0) || (*(short *)plVar12 == 0)) {
            if (local_174c == *piVar1) goto LAB_00808818;
          }
          else if ((local_174c == *piVar1) &&
                  ((*plVar12 == CONCAT62(uStack_1746,local_1748) &&
                   *(long *)(lVar3 + 0xc144) == lStack_1740) &&
                   *(int *)(lVar3 + 0xc14c) == local_1738)) goto LAB_00808818;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 100);
    }
  }
joined_r0x008087d0:
  uVar17 = 0;
joined_r0x00808820:
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return uVar17;
LAB_00808818:
  uVar17 = 1;
  goto joined_r0x00808820;
}

