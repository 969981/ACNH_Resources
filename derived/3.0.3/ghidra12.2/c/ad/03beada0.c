
long FUN_03beada0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  
  lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  (**(code **)(**(long **)(*(long *)(lVar19 + 0x30) + 0x18) + 0x20))();
  if ((*(ushort *)(*(long *)(param_1 + 8) + 6) & 1) == 0) {
    uVar16 = 0;
  }
  else {
    uVar18 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18);
    uVar14 = *(ulong *)PTR_DAT_04bb38c8 | uVar18;
    uVar16 = uVar14 + 0x100000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar18) {
      uVar16 = uVar14;
    }
  }
  uVar6 = *(ushort *)(uVar16 + 0x14);
  uVar18 = (ulong)uVar6;
  if (*(char *)(uVar16 + 0x16) == '\0') {
    uVar17 = (uint)uVar6;
    if ((short)uVar6 < 0) {
      return 0;
    }
    lVar8 = *(long *)(*(long *)(lVar19 + 0x30) + 0x18);
    plVar1 = (long *)(lVar8 + 0x18);
    uVar5 = *(uint *)(lVar8 + 0x10);
    plVar3 = plVar1 + uVar5;
    if (1 < uVar5) {
      plVar3 = plVar1;
    }
    if (*(uint *)(*plVar3 + 0x68) <= uVar17) {
      uVar17 = 0;
    }
    bVar7 = *(byte *)(*(long *)(*plVar3 + 0x70) + (ulong)uVar17);
    if ((char)bVar7 < '\0') {
      return 0;
    }
    uVar18 = (ulong)bVar7;
    plVar1 = (long *)(lVar19 + 0x78);
    lVar8 = *(long *)(*(long *)(*(long *)(lVar19 + 0x30) + 0x48) + uVar18 * 8);
  }
  else {
    if ((short)uVar6 < 0) {
      return 0;
    }
    lVar8 = (**(code **)(**(long **)(*(long *)(lVar19 + 0x30) + 0x18) + 0x20))();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x40) + uVar18 * 8);
    lVar9 = (**(code **)(**(long **)(*(long *)(lVar19 + 0x30) + 0x18) + 0x20))();
    plVar1 = (long *)(lVar9 + 0x48);
  }
  if ((lVar8 != 0) &&
     (uVar14 = (ulong)*(uint *)(uVar16 + 4), (int)*(uint *)(uVar16 + 4) <= *(int *)(uVar16 + 8))) {
    lVar15 = *plVar1;
    lVar9 = uVar14 << 5;
    lVar19 = *(long *)(*(long *)(lVar19 + 0x30) + 0x18);
    plVar1 = (long *)(lVar19 + 0x18);
    do {
      DataMemoryBarrier(2,1);
      DataMemoryBarrier(2,1);
      uVar17 = *(uint *)(lVar19 + 0x10);
      plVar3 = plVar1 + uVar17;
      if (1 < uVar17) {
        plVar3 = plVar1;
      }
      lVar13 = *plVar3;
      lVar2 = *(long *)(lVar13 + 0x28) + lVar9;
      uVar11 = (ulong)*(uint *)(lVar2 + 0x1c);
      if (*(uint *)(lVar2 + 0x1c) == 0) {
        return lVar2;
      }
      iVar10 = *(int *)(lVar8 + 0x60);
      if (iVar10 == 0) {
        uVar4 = (*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
          uVar4 = *(ulong *)PTR_DAT_04bb38c8 | uVar11;
        }
        iVar10 = *(int *)(lVar15 + uVar18 * 4);
        if (*(char *)(uVar16 + 0x16) == '\0') {
          uVar11 = uVar14 & 0xffffffff;
          if (*(uint *)(lVar13 + 0x78) <= uVar14) {
            uVar11 = 0;
          }
          if (*(byte *)(uVar4 + 5) < 6) {
            iVar12 = (int)*(short *)(*(long *)(lVar13 + 0x80) + uVar11 * 8);
            switch(*(byte *)(uVar4 + 5)) {
            case 1:
              goto switchD_03beb04c_caseD_1;
            case 2:
              goto switchD_03beb04c_caseD_2;
            case 3:
              goto switchD_03beb04c_caseD_3;
            case 4:
              goto switchD_03beb04c_caseD_4;
            case 5:
              goto switchD_03beb04c_caseD_5;
            }
switchD_03beb04c_caseD_0:
            if (iVar10 == iVar12) {
              return lVar2;
            }
          }
        }
        else if (*(byte *)(uVar4 + 5) < 6) {
          iVar12 = *(int *)(uVar4 + 0xc);
          switch(*(byte *)(uVar4 + 5)) {
          case 0:
            goto switchD_03beb04c_caseD_0;
          case 1:
switchD_03beb04c_caseD_1:
            if (iVar12 < iVar10) {
              return lVar2;
            }
            break;
          case 2:
switchD_03beb04c_caseD_2:
            if (iVar12 <= iVar10) {
              return lVar2;
            }
            break;
          case 3:
switchD_03beb04c_caseD_3:
            if (iVar10 < iVar12) {
              return lVar2;
            }
            break;
          case 4:
switchD_03beb04c_caseD_4:
            if (iVar10 <= iVar12) {
              return lVar2;
            }
            break;
          case 5:
switchD_03beb04c_caseD_5:
            if (iVar10 != iVar12) {
              return lVar2;
            }
          }
        }
      }
      else if (iVar10 == 1) {
        uVar4 = (*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
          uVar4 = *(ulong *)PTR_DAT_04bb38c8 | uVar11;
        }
        if (*(byte *)(uVar4 + 5) < 6) {
          iVar10 = *(int *)(lVar15 + uVar18 * 4);
          iVar12 = *(int *)(uVar4 + 8);
          switch(*(byte *)(uVar4 + 5)) {
          case 1:
            goto switchD_03beb04c_caseD_1;
          case 2:
            goto switchD_03beb04c_caseD_2;
          case 3:
            goto switchD_03beb04c_caseD_3;
          case 4:
            goto switchD_03beb04c_caseD_4;
          case 5:
            goto switchD_03beb04c_caseD_5;
          }
          goto switchD_03beb04c_caseD_0;
        }
      }
      else if (iVar10 == 2) {
        uVar4 = (*(ulong *)PTR_DAT_04bb38c8 | uVar11) + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
          uVar4 = *(ulong *)PTR_DAT_04bb38c8 | uVar11;
        }
        if (*(byte *)(uVar4 + 5) < 6) {
          fVar20 = *(float *)(lVar15 + uVar18 * 4);
          fVar21 = *(float *)(uVar4 + 8);
          switch(*(byte *)(uVar4 + 5)) {
          case 0:
            if (fVar20 == fVar21) {
              return lVar2;
            }
            break;
          case 1:
            if (fVar21 < fVar20) {
              return lVar2;
            }
            break;
          case 2:
            if (fVar21 <= fVar20) {
              return lVar2;
            }
            break;
          case 3:
            if (fVar20 < fVar21) {
              return lVar2;
            }
            break;
          case 4:
            if (fVar20 <= fVar21) {
              return lVar2;
            }
            break;
          case 5:
            if (fVar20 != fVar21) {
              return lVar2;
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar14 + -1 < *(int *)(uVar16 + 8));
  }
  return 0;
}

