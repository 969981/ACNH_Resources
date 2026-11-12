
/* WARNING: Removing unreachable block (ram,0x00a6fec0) */

void FUN_00a6fcc0(long param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  
  if (param_2 >> 0x35 != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x248) >> 1 & 1) != 0) {
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x15c);
  if (0x7fe < (int)uVar10) {
    return;
  }
  param_2 = param_2 | (ulong)uVar10 << 0x35;
  if (uVar10 != (uint)(param_2 >> 0x35)) {
    return;
  }
  uVar11 = (ulong)DAT_04c47dc0;
  if ((int)DAT_04c47dc0 < 0) goto LAB_00a6ff80;
  uVar14 = 0;
  uVar12 = uVar11 + 1;
  piVar15 = &DAT_04d9fe90;
  do {
    piVar2 = piVar15;
    if (999 < uVar14) {
      piVar2 = &DAT_04d9fe90;
    }
    if ((*piVar2 != 0) && (*(ulong *)(piVar2 + 2) == param_2)) {
      if ((int)uVar14 != -1) {
        iVar8 = *(int *)(param_1 + 0x230);
        goto LAB_00a6fde8;
      }
      break;
    }
    uVar14 = uVar14 + 1;
    piVar15 = piVar15 + 4;
  } while (uVar12 != uVar14);
  iVar8 = *(int *)(param_1 + 0x230);
  uVar16 = 0;
  if (DAT_04c47dc0 == 0) {
    uVar10 = 0xffffffff;
LAB_00a6fdc8:
    piVar15 = &DAT_04d9fe90 + uVar16 * 4;
    if (999 < uVar16) {
      piVar15 = &DAT_04d9fe90;
    }
    uVar13 = (uint)uVar16;
    if (iVar8 != *piVar15) {
      uVar13 = uVar10;
    }
    uVar14 = (ulong)uVar13;
  }
  else {
    uVar14 = 0xffffffff;
    piVar15 = &DAT_04d9fe90;
    do {
      piVar2 = piVar15 + 4;
      piVar3 = piVar15;
      if (999 < uVar16) {
        piVar3 = &DAT_04d9fe90;
      }
      piVar15 = piVar15 + 8;
      uVar1 = uVar16 + 1;
      uVar13 = (uint)uVar16;
      if (iVar8 != *piVar3) {
        uVar13 = (uint)uVar14;
      }
      uVar16 = uVar16 + 2;
      if (999 < uVar1) {
        piVar2 = &DAT_04d9fe90;
      }
      uVar10 = (uint)uVar1;
      if (iVar8 != *piVar2) {
        uVar10 = uVar13;
      }
      uVar14 = (ulong)uVar10;
    } while (uVar16 != (uVar12 & 0xfffffffe));
    if ((uVar12 & 1) != 0) goto LAB_00a6fdc8;
  }
  if ((int)uVar14 != -1) {
LAB_00a6fde8:
    piVar15 = &DAT_04d9fe90 + (uVar14 & 0xffffffff) * 4;
    if (999 < (uint)uVar14) {
      piVar15 = &DAT_04d9fe90;
    }
    if (iVar8 == *piVar15) {
      uVar12 = (ulong)*(ushort *)(param_1 + 0x284);
      if ((uVar12 < 1000) && ((&DAT_04d9fe90)[uVar12 * 4] == iVar8)) {
        bVar7 = DAT_04c47dc0 == *(ushort *)(param_1 + 0x284);
        (&DAT_04d9fe90)[uVar12 * 4] = 0;
        (&DAT_04d9fe98)[uVar12 * 2] = 0xffffffffffffffff;
        if (bVar7) {
          do {
            piVar15 = &DAT_04d9fe90 + uVar11 * 4;
            uVar10 = (uint)uVar11;
            if (999 < uVar10) {
              piVar15 = &DAT_04d9fe90;
            }
            if (*piVar15 != 0) goto LAB_00a6ff80;
            DAT_04c47dc0 = uVar10 - 1;
            uVar11 = (ulong)DAT_04c47dc0;
          } while (0 < (int)uVar10);
          DAT_04c47dc0 = 0xffffffff;
        }
      }
    }
    else {
      uVar11 = 0;
      piVar15 = &DAT_04d9fe90;
      do {
        piVar2 = piVar15;
        if (999 < uVar11) {
          piVar2 = &DAT_04d9fe90;
        }
        if ((*piVar2 != 0) && (*(ulong *)(piVar2 + 2) == param_2)) {
          if ((uint)uVar11 != 0xffffffff) {
            puVar4 = &DAT_04d9fe90 + (uVar11 & 0xffffffff) * 4;
            if (999 < (uint)uVar11) {
              puVar4 = &DAT_04d9fe90;
            }
            uVar10 = *puVar4;
            goto LAB_00a6fec8;
          }
          break;
        }
        uVar11 = uVar11 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != uVar11);
      uVar10 = 0;
LAB_00a6fec8:
      if (DAT_04c93e08 != 0) {
        if ((((uVar10 == 0) ||
             (lVar17 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                                (ulong)(uVar10 >> 0x14) * 8), lVar17 == 0)) ||
            ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar10)) {
          lVar17 = 0;
        }
        if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          lVar6 = DAT_04c93e08;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if ((((iVar8 < 0x11) ||
               ((*(uint *)(lVar6 + 0x5e8) < 5 &&
                ((1 << (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar17 != 0))
             && ((*(uint *)(lVar17 + 0x248) >> 1 & 1) == 0)) {
            return;
          }
        }
      }
    }
  }
LAB_00a6ff80:
  uVar11 = 1;
  piVar15 = &DAT_04d9fea0;
  while (piVar15[-4] != 0) {
    if (*piVar15 == 0) goto LAB_00a6ffb8;
    uVar11 = uVar11 + 2;
    piVar15 = piVar15 + 8;
    if (uVar11 == 0x3e9) {
      return;
    }
  }
  uVar11 = uVar11 - 1;
LAB_00a6ffb8:
  uVar5 = *(undefined4 *)(param_1 + 0x230);
  (&DAT_04d9fe98)[(uVar11 & 0xffffffff) * 2] = param_2;
  (&DAT_04d9fe90)[(uVar11 & 0xffffffff) * 4] = uVar5;
  uVar10 = DAT_04c47dc0;
  *(short *)(param_1 + 0x284) = (short)uVar11;
  if ((int)uVar10 < (int)uVar11) {
    DAT_04c47dc0 = (int)uVar11;
    return;
  }
  return;
}

