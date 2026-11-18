
void FUN_036785d0(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  float fVar21;
  uint *local_78;
  byte local_64 [4];
  
  puVar9 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb4fb8;
  puVar7 = PTR_DAT_04bb3960;
  iVar11 = 0;
  puVar2 = (uint *)(param_1 + 0x89c8);
  do {
    bVar4 = puVar9[iVar11];
    local_64[0] = bVar4;
    if (7 < bVar4) {
      local_64[0] = 0xff;
    }
    if ((7 >= bVar4 && local_64[0] != 0) && (7 < bVar4 || -1 < (char)local_64[0])) break;
    *puVar2 = 0;
    uVar10 = FUN_02582d8c(local_64,1);
    if ((uVar10 < 8) && (*(char *)(*(long *)puVar8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')) {
      uVar10 = *(uint *)(*(long *)puVar8 + (ulong)uVar10 * 0x13f0 + 0x13d8);
      uVar15 = (ulong)uVar10;
      if ((-1 < (int)uVar10) && (*(long *)puVar7 != 0)) {
        if (3 < uVar10) {
          uVar15 = 0;
        }
        lVar16 = *(long *)(*(long *)puVar7 + uVar15 * 8 + 0xf5b20);
        if (lVar16 != 0) {
          uVar14 = *(uint *)(lVar16 + 8) & 3 | (*(uint *)(lVar16 + 8) >> 9 & 3) << 2;
          *puVar2 = uVar14;
          uVar10 = (uint)((*(uint *)(lVar16 + 8) & 0x220000) != 0) << 5;
          if ((*(uint *)(lVar16 + 8) & 0x110000) != 0) {
            uVar10 = 0x10;
          }
          uVar10 = uVar10 | uVar14;
          *puVar2 = uVar10;
          uVar14 = (uint)((*(uint *)(lVar16 + 8) & 0x880000) != 0) << 7;
          if ((*(uint *)(lVar16 + 8) & 0x440000) != 0) {
            uVar14 = 0x40;
          }
          *puVar2 = uVar14 | uVar10;
        }
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 8);
  lVar16 = *(long *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x89cc) = 0;
  uVar10 = *puVar2;
  if (uVar10 != 0) {
    if (*(char *)(lVar16 + 0x18695) != '\0') {
      if (((*(char *)(lVar16 + 0x13e48) != '\0') &&
          (iVar11 = *(int *)(lVar16 + 0x13e80), iVar11 != -1)) && (*(int *)(lVar16 + 0x18688) == 0))
      {
        *(undefined4 *)(lVar16 + 0x18688) = *(undefined4 *)(lVar16 + 0x186a4);
        uVar14 = *(uint *)(lVar16 + 0x13eb4);
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = (iVar11 + 1U) / uVar14;
        }
        *(uint *)(lVar16 + 0x18690) = (iVar11 + 1U) - uVar6 * uVar14;
        (**(code **)(lVar16 + 0x18668))(1,iVar11,*(undefined8 *)(lVar16 + 0x18640));
        *(undefined1 *)(lVar16 + 0x18610) = 0;
        if (*(int *)(lVar16 + 0x13e80) != -1) {
          *(undefined8 *)(lVar16 + 0x13e88) = 0;
          *(undefined4 *)(lVar16 + 0x13e80) = 0xffffffff;
        }
        *(undefined1 *)(lVar16 + 0x13e4b) = 0;
        *(undefined1 *)(lVar16 + 0x13e52) = 0;
      }
      *(undefined1 *)(lVar16 + 0x18695) = 0;
    }
    if ((*(char *)(lVar16 + 0x18694) == '\0') && (*(char *)(lVar16 + 100000) != '\0')) {
      *(undefined4 *)(lVar16 + 0x1868c) = 0;
      *(undefined1 *)(lVar16 + 0x18694) = 1;
      if ((*(char *)(lVar16 + 0x13e48) != '\0') && (*(int *)(lVar16 + 0x13e80) == -1)) {
        (**(code **)(lVar16 + 0x18668))(0,0,*(undefined8 *)(lVar16 + 0x18640));
        *(undefined4 *)(lVar16 + 0x13e80) = 0;
        *(undefined8 *)(lVar16 + 0x13e88) = *(undefined8 *)(lVar16 + 0x13e98);
      }
    }
  }
  uVar10 = *(uint *)(lVar16 + 0x11400) & 0xffffff00 | uVar10;
  *(uint *)(lVar16 + 0x11400) = uVar10;
  if (*(int *)(lVar16 + 0x11418) == 1) {
    *(uint *)(lVar16 + 0x11404) = uVar10;
    *(undefined4 *)(lVar16 + 0x11410) = *(undefined4 *)(lVar16 + 0x1140c);
  }
  lVar16 = *(long *)(param_1 + 0x2d8);
  uVar10 = *(uint *)(param_1 + 0x89cc);
  if ((uVar10 >> 8 & 1) != 0) {
    **(uint **)(lVar16 + 0x113f8) = **(uint **)(lVar16 + 0x113f8) | 2;
  }
  *(uint *)(lVar16 + 0x11400) = *(uint *)(lVar16 + 0x11400) & 0xfff0ffff | uVar10 << 8;
  *(uint *)(lVar16 + 0x1140c) = *(uint *)(lVar16 + 0x1140c) & 0xfff0ffff | uVar10 << 8;
  if ((((uVar10 & 0x300) == 0x200) && (*(char *)(lVar16 + 0x13e48) != '\0')) &&
     ((iVar11 = *(int *)(lVar16 + 0x13e80), iVar11 != -1 && (*(int *)(lVar16 + 0x18688) == 0)))) {
    *(undefined4 *)(lVar16 + 0x18688) = *(undefined4 *)(lVar16 + 0x186a4);
    uVar10 = *(uint *)(lVar16 + 0x13eb4);
    uVar14 = 0;
    if (uVar10 != 0) {
      uVar14 = (iVar11 + 1U) / uVar10;
    }
    *(uint *)(lVar16 + 0x18690) = (iVar11 + 1U) - uVar14 * uVar10;
    (**(code **)(lVar16 + 0x18668))(1,iVar11,*(undefined8 *)(lVar16 + 0x18640));
    *(undefined1 *)(lVar16 + 0x18610) = 0;
    if (*(int *)(lVar16 + 0x13e80) != -1) {
      *(undefined8 *)(lVar16 + 0x13e88) = 0;
      *(undefined4 *)(lVar16 + 0x13e80) = 0xffffffff;
    }
    *(undefined1 *)(lVar16 + 0x13e4b) = 0;
    *(undefined1 *)(lVar16 + 0x13e52) = 0;
    iVar11 = *(int *)(param_1 + 0x310);
    if (iVar11 != 0) goto LAB_0367887c;
LAB_03678a54:
    lVar16 = *(long *)(param_1 + 0x2d8);
    uVar15 = (ulong)*(uint *)(lVar16 + 0x13450);
    if (*(uint *)(lVar16 + 0x13450) == 0) goto LAB_03678b80;
    lVar13 = *(long *)(param_1 + 0x89e0);
    lVar3 = *(long *)(param_1 + 0x89e8);
    local_78 = (uint *)(lVar16 + 0x13450);
    if (*(int *)(*(long *)(lVar16 + 0x11420) + 0x298) != 6) {
      uVar20 = 0;
      plVar19 = (long *)(lVar16 + 0x139a0);
      uVar12 = uVar15;
      uVar15 = 0;
      do {
        uVar10 = *(uint *)(lVar16 + 0x139b0);
        uVar5 = *(undefined2 *)(lVar16 + 0x11450 + uVar20 * 2);
        *(uint *)(lVar16 + 0x139b0) = uVar10 + 1 & 0xf;
        lVar1 = -0x80000000;
        if (0 < *plVar19) {
          lVar1 = *plVar19 + -0x80000000;
        }
        *plVar19 = lVar1;
        *(undefined2 *)(lVar16 + (ulong)uVar10 * 2 + 0x13e00) = uVar5;
        if (lVar1 < 0) {
          iVar11 = FUN_03ffc238(plVar19);
          lVar1 = uVar15 * 2;
          if (iVar11 < -0x7fff) {
            iVar11 = -0x8000;
          }
          uVar15 = (ulong)((int)uVar15 + 1);
          if (0x7ffe < iVar11) {
            iVar11 = 0x7fff;
          }
          *(short *)(lVar16 + lVar1 + 0x12450) = (short)iVar11;
          uVar12 = (ulong)*local_78;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar12);
      if ((int)uVar15 != 0) {
        plVar19 = (long *)(lVar16 + 0x12450);
        goto LAB_03678b64;
      }
      goto LAB_03678b70;
    }
    plVar19 = (long *)(lVar16 + 0x11450);
LAB_03678b64:
    pcVar17 = *(code **)(lVar16 + 0x11440);
    lVar16 = *(long *)(lVar16 + 0x11448);
    lVar13 = lVar13 - lVar3;
LAB_03678b6c:
    (*pcVar17)(plVar19,uVar15,lVar13,lVar16);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x310);
    if (iVar11 == 0) goto LAB_03678a54;
LAB_0367887c:
    plVar18 = *(long **)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x310) = iVar11 + -1;
    fVar21 = (float)(**(code **)(*plVar18 + 0x78))(plVar18);
    uVar15 = (ulong)*(uint *)(plVar18 + 0x268a);
    if (*(uint *)(plVar18 + 0x268a) == 0) goto LAB_03678b80;
    local_78 = (uint *)(plVar18 + 0x268a);
    if (*(int *)(plVar18[0x2284] + 0x298) == 6) {
      plVar19 = plVar18 + 0x2200;
LAB_036789dc:
      plVar19 = plVar19 + 0x8a;
      pcVar17 = (code *)plVar18[0x2288];
      lVar16 = plVar18[0x2289];
      lVar13 = (long)(1e+09 / fVar21);
      goto LAB_03678b6c;
    }
    uVar20 = 0;
    plVar19 = plVar18 + 0x2734;
    uVar12 = uVar15;
    uVar15 = 0;
    do {
      uVar10 = *(uint *)(plVar18 + 0x2736);
      uVar5 = *(undefined2 *)((long)plVar18 + uVar20 * 2 + 0x11450);
      *(uint *)(plVar18 + 0x2736) = uVar10 + 1 & 0xf;
      lVar16 = -0x80000000;
      if (0 < *plVar19) {
        lVar16 = *plVar19 + -0x80000000;
      }
      *plVar19 = lVar16;
      *(undefined2 *)((long)plVar18 + (ulong)uVar10 * 2 + 0x13e00) = uVar5;
      if (lVar16 < 0) {
        iVar11 = FUN_03ffc238(plVar19);
        lVar16 = uVar15 * 2;
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        uVar15 = (ulong)((int)uVar15 + 1);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        *(short *)((long)plVar18 + lVar16 + 0x12450) = (short)iVar11;
        uVar12 = (ulong)*local_78;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar12);
    if ((int)uVar15 != 0) {
      plVar19 = plVar18 + 0x2400;
      goto LAB_036789dc;
    }
  }
LAB_03678b70:
  *local_78 = 0;
LAB_03678b80:
  do {
    plVar19 = *(long **)(param_1 + 0x2e0);
    *(undefined1 *)(param_1 + 0x89f0) = 0;
    (**(code **)(*plVar19 + 0x70))(plVar19);
    FUN_04000fac(plVar19);
    if (*(char *)(*(long *)(param_1 + 0x2d8) + 0x60) == '\0') {
      return;
    }
  } while ((*(byte *)(*(long *)(param_1 + 0x2d8) + 0x61) & 7) == 0);
  return;
}

