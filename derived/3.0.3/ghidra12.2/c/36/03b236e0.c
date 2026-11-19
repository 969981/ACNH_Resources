
undefined8 FUN_03b236e0(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  
  if ((*(byte *)(param_2 + 0x42) & 1) == 0) {
    return 0;
  }
  lVar17 = *(long *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x44);
  lVar8 = FUN_03b181f0(*(undefined8 *)(lVar17 + 0x18));
  bVar6 = false;
  lVar14 = 0;
  if (((int)uVar2 < 0) || (*(long *)(lVar8 + 0x18) == 0)) {
LAB_03b23758:
    if ((int)uVar2 < 0) goto LAB_03b237b0;
LAB_03b2375c:
    if ((((bVar6) || (lVar17 = *(long *)(lVar17 + 0x90), lVar17 == 0)) ||
        (lVar8 = FUN_03b181f0(*(undefined8 *)(lVar17 + 0x18)), lVar8 == 0)) ||
       ((*(long *)(lVar8 + 0x18) == 0 ||
        (lVar14 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18), lVar14 == 0)))) goto LAB_03b237b0;
    lVar9 = FUN_0037e610(lVar14,"SlideListOn");
    if (lVar9 == 0) goto LAB_03b2389c;
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18);
    if (lVar14 != 0) {
      lVar9 = FUN_0037e610(lVar14,"SlideListOn");
      bVar6 = lVar9 != 0;
      goto LAB_03b23758;
    }
    bVar6 = false;
    if (-1 < (int)uVar2) goto LAB_03b2375c;
LAB_03b237b0:
    if (!bVar6) goto LAB_03b2389c;
  }
  lVar11 = *(long *)(lVar17 + 0x88);
  for (lVar9 = *(long *)(lVar11 + 0x40); lVar9 != lVar11 + 0x38; lVar9 = *(long *)(lVar9 + 8)) {
    if (((DAT_05aeabd8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05aeabd8), iVar7 != 0)) {
      if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar7 != 0)) {
        *(undefined8 *)PTR_DAT_04bd1a08 = 0;
        __cxa_guard_release(PTR_DAT_04bd1a10);
      }
      DAT_05aeabd0 = PTR_DAT_04bd1a08;
      __cxa_guard_release(&DAT_05aeabd8);
    }
    plVar15 = (long *)(lVar9 + -8);
    puVar10 = (undefined8 *)(**(code **)(*plVar15 + 8))(plVar15);
    if ((undefined **)puVar10 == &DAT_05aeabd0) {
LAB_03b237e0:
      if (*(long *)(lVar9 + 0x20) == lVar14) {
        *param_1 = uVar2;
        *(long **)(param_1 + 2) = plVar15;
        param_1[4] = 0;
        param_1[5] = 0;
        iVar7 = *(int *)(lVar9 + 0x2c) * *(int *)(lVar9 + 0x28);
        uVar3 = *(uint *)(lVar9 + 0x48);
        iVar5 = 0;
        if (iVar7 != 0) {
          iVar5 = (int)uVar2 / iVar7;
        }
        iVar7 = 0;
        if (uVar3 != 0) {
          iVar7 = iVar5 / (int)uVar3;
        }
        uVar4 = iVar5 - iVar7 * uVar3;
        if (uVar3 <= uVar4) {
          uVar4 = 0;
        }
        *(undefined8 *)(param_1 + 4) =
             *(undefined8 *)(*(long *)(lVar9 + 0x50) + (long)(int)uVar4 * 8);
        if (*(uint *)(lVar9 + 0x58) <= uVar2) {
          uVar2 = 0;
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x60) + (long)(int)uVar2 * 8);
        puVar16 = param_1 + 10;
        puVar16[0] = 0;
        puVar16[1] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *(undefined8 *)(param_1 + 6) = uVar12;
        *(long *)(param_1 + 8) = lVar8;
        if (*(char *)(lVar9 + 0x9e) != '\x02') {
          return 1;
        }
        lVar8 = *(long *)(lVar17 + 0x88) + 0x38;
        lVar17 = *(long *)(*(long *)(lVar17 + 0x88) + 0x40);
        if (lVar17 == lVar8) {
          return 1;
        }
        lVar9 = *(long *)(lVar14 + 0x18);
        goto LAB_03b2396c;
      }
    }
    else {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while ((undefined **)puVar10 != &DAT_05aeabd0 && puVar10 != (undefined8 *)0x0);
      if (puVar10 != (undefined8 *)0x0) goto LAB_03b237e0;
    }
  }
LAB_03b2389c:
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return 0;
LAB_03b2396c:
  if (((DAT_05aeabd8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05aeabd8), iVar7 != 0)) {
    if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar7 != 0)) {
      *(undefined8 *)PTR_DAT_04bd1a08 = 0;
      __cxa_guard_release(PTR_DAT_04bd1a10);
    }
    DAT_05aeabd0 = PTR_DAT_04bd1a08;
    __cxa_guard_release(&DAT_05aeabd8);
  }
  plVar15 = (long *)(lVar17 + -8);
  puVar10 = (undefined8 *)(**(code **)(*plVar15 + 8))(plVar15);
  if ((undefined **)puVar10 == &DAT_05aeabd0) {
LAB_03b23950:
    if (*(long *)(lVar17 + 0x20) == lVar9) {
      *(long **)puVar16 = plVar15;
      if (*(int *)(lVar17 + 0x48) == 0) {
        return 1;
      }
      uVar13 = 0;
      do {
        lVar8 = *(long *)(*(long *)(lVar17 + 0x50) +
                         (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
        if (*(long *)(lVar8 + 0x30) == lVar14) {
          *(long *)(param_1 + 0xc) = lVar8;
          return 1;
        }
        uVar1 = uVar13 + 1;
        uVar13 = uVar1 & 0xffffffff;
      } while (*(int *)(lVar17 + 0x48) != (int)uVar1);
      return 1;
    }
  }
  else {
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while ((undefined **)puVar10 != &DAT_05aeabd0 && puVar10 != (undefined8 *)0x0);
    if (puVar10 != (undefined8 *)0x0) goto LAB_03b23950;
  }
  lVar17 = *(long *)(lVar17 + 8);
  if (lVar17 == lVar8) {
    return 1;
  }
  goto LAB_03b2396c;
}

