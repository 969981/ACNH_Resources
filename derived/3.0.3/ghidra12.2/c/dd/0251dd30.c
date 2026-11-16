
/* WARNING: Removing unreachable block (ram,0x0251e120) */
/* WARNING: Removing unreachable block (ram,0x0251e1b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0251dd30(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  char cVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar6 = (ulong)*param_1;
  if (7 < uVar6) {
    return 0.0;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar16 = &DAT_054f0c08;
      if (iVar4 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar16 = &DAT_054f0c08;
    }
  }
  else {
    psVar16 = (short *)(DAT_054f5738 + uVar6 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  puVar2 = PTR_DAT_04bb6298;
  if ((char)psVar16[0x32] == '\0') {
    return 0.0;
  }
  if (*psVar16 != *(short *)PTR_DAT_04bb6298) {
    return 0.0;
  }
  uVar6 = FUN_0231f070(*(undefined4 *)(psVar16 + 2),0);
  if ((uVar6 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar7 = &DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar7 = &DAT_054f0958;
        }
      }
      else {
        puVar7 = &DAT_054f0958;
      }
    }
    else {
      puVar7 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar7 = puVar7 + *param_1;
      }
    }
    if ((*(uint *)((long)puVar7 + 4) >> 0xf & 1) == 0) {
      return 0.0;
    }
  }
  if ((DAT_054f5738 == 0) || (uVar6 = (ulong)*param_1, 7 < uVar6)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar15 = &DAT_054f0c08;
      if (iVar4 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar15 = &DAT_054f0c08;
    }
  }
  else {
    psVar15 = (short *)(DAT_054f5738 + uVar6 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((((char)psVar15[0x32] == '\0') || (*psVar15 != *(short *)puVar2)) ||
     (uVar14 = *(uint *)(psVar15 + 2), 0x148 < uVar14)) {
    uVar14 = 0;
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_054f0b68), iVar4 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  puVar3 = PTR_DAT_04bc2fe8;
  puVar2 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar9 = &DAT_054f0b60;
    goto LAB_0251dfe4;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar8 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar8 == 0) {
LAB_0251dfd8:
      puVar10 = (uint *)0x0;
    }
    else {
      puVar9 = *(uint **)(lVar8 + 8);
      if ((((puVar9 != (uint *)0x0) &&
           ((*(uint *)(DAT_054f5738 + 0xe8) <= uVar14 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (ulong)uVar14) != '\0')))) &&
          (uVar14 < *puVar9)) && ((puVar9[1] != 0 && ((ushort)puVar9[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar14 + (uint)(ushort)puVar9[2] * 8 + iVar4) +
                         (long)puVar9);
        if (puVar9 != (uint *)0x0) goto LAB_0251dfe4;
      }
      piVar11 = *(int **)(lVar8 + 8);
      puVar10 = (uint *)0x0;
      if (piVar11 != (int *)0x0) {
        if ((((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0')) ||
            (*piVar11 == 0)) || ((piVar11[1] == 0 || ((ulong)*(ushort *)(piVar11 + 2) == 0))))
        goto LAB_0251dfd8;
        lVar8 = 0xc;
        if (*(char *)((long)piVar11 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        puVar10 = (uint *)((long)piVar11 + lVar8 + (ulong)*(ushort *)(piVar11 + 2) * 8);
      }
    }
  }
  else if (uVar14 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar14) {
      uVar14 = 0;
    }
    puVar9 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar14];
    if (puVar9 != (uint *)0x0) goto LAB_0251dfe4;
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  puVar9 = &DAT_054f0b60;
  if (puVar10 != (uint *)0x0) {
    puVar9 = puVar10;
  }
LAB_0251dfe4:
  if (*puVar9 == 0) {
    return 0.0;
  }
  cVar13 = *PTR_DAT_04bc2fe0;
  do {
    puVar1 = PTR_DAT_04bb2200;
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar14 = *(uint *)(puVar3 + 0xa0);
      if (-1 < (int)uVar14) {
        if ((char *)((ulong)uVar14 + (long)puVar9) == (char *)0x0) {
          return 0.0;
        }
        if (*(char *)((ulong)uVar14 + (long)puVar9) == '\0') {
          return 0.0;
        }
        lVar8 = *(long *)PTR_DAT_04bb2200;
        if (lVar8 == 0) {
          fVar21 = -20.0;
          fVar20 = -20.0;
        }
        else {
          fVar20 = -20.0;
          if (*(long *)(lVar8 + 0x50) == 0) {
            fVar21 = -20.0;
          }
          else {
            fVar21 = -20.0;
            lVar12 = *(long *)(*(long *)(lVar8 + 0x50) + 0x118);
            if (lVar12 != 0) {
              lVar8 = *(long *)(lVar12 + 0x280);
              fVar21 = 0.0;
              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 8), lVar8 != 0)) {
                pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x488) + 0xf0))(lVar8 + 0x488);
                fVar21 = *pfVar5;
              }
              lVar8 = FUN_0251e98c(1);
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x1590) + 0xf0))(lVar8 + 0x1590);
              fVar21 = fVar21 + *pfVar5;
              lVar8 = *(long *)puVar1;
              if (lVar8 == 0) goto LAB_0251e214;
            }
          }
          if ((*(long *)(lVar8 + 0x50) != 0) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x50) + 0x118), lVar8 != 0)) {
            lVar8 = *(long *)(lVar8 + 0x280);
            fVar20 = 0.0;
            if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 8), lVar8 != 0)) {
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x488) + 0xf0))(lVar8 + 0x488);
              fVar20 = *pfVar5;
            }
            lVar8 = FUN_0251e98c(1);
            pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x1560) + 0xf0))(lVar8 + 0x1560);
            fVar20 = fVar20 + *pfVar5;
          }
        }
LAB_0251e214:
        fVar17 = *(float *)(psVar16 + 0x14);
        fVar19 = fVar20;
        if (fVar17 <= fVar20) {
          fVar19 = fVar17;
        }
        fVar18 = fVar21;
        if (fVar21 <= fVar17) {
          fVar18 = fVar19;
        }
        return (fVar18 - fVar20) / (fVar21 - fVar20);
      }
      if (uVar14 != 0xffffffff) {
        return 0.0;
      }
    }
    lVar8 = (long)puVar9 - (ulong)*puVar9;
    if (*puVar9 == 0) {
      return 0.0;
    }
    if (lVar8 == 0) {
      return 0.0;
    }
    lVar12 = 0xc;
    if (*(char *)(lVar8 + 10) != '\0') {
      lVar12 = 0x1c;
    }
    if (lVar12 + lVar8 == 0) {
      return 0.0;
    }
    uVar6 = (ulong)*(ushort *)(lVar8 + 8);
    *(undefined4 *)(puVar3 + 0xa0) = 0xfffffffe;
    if (uVar6 == 0) {
      return 0.0;
    }
    piVar11 = (int *)(lVar12 + lVar8 + 4);
    while (piVar11[-1] != -0x12cd5522) {
      piVar11 = piVar11 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0.0;
      }
    }
    iVar4 = 0;
    if (*piVar11 != -1) {
      iVar4 = *piVar11;
    }
    *(int *)(puVar3 + 0xa0) = iVar4;
    if (*puVar9 == 0) {
      return 0.0;
    }
  } while( true );
}

