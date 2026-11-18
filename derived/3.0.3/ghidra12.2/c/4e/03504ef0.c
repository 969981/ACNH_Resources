
void FUN_03504ef0(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  
  puVar10 = PTR_DAT_04bc4d98;
  puVar9 = PTR_DAT_04bc4d90;
  lVar17 = *(long *)(*(long *)(param_1 + 0x218) + 0x570);
  if ((lVar17 != 0) && (uVar4 = *(uint *)(lVar17 + 0x2f8), uVar4 != 0)) {
    uVar18 = 0;
    if ((param_3 & 1) == 0) {
      puVar2 = PTR_DAT_04bc4da0 + 0x10;
      do {
        puVar16 = (undefined8 *)0x0;
        if (((-1 < (int)uVar18) && ((int)uVar18 < (int)*(uint *)(lVar17 + 0x208))) &&
           (uVar18 < *(uint *)(lVar17 + 0x208))) {
          puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x210) + uVar18 * 8);
        }
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          *(undefined **)puVar9 = puVar2;
          __cxa_guard_release(puVar10);
        }
        if ((puVar16 != (undefined8 *)0x0) &&
           (uVar13 = (**(code **)*puVar16)(puVar16,puVar9), (uVar13 & 1) != 0)) {
          if (*(int *)(lVar17 + 0x208) != 0) {
            iVar12 = 0;
            do {
              if (*(undefined8 **)(*(long *)(lVar17 + 0x210) + (long)iVar12 * 8) == puVar16) {
                if (-1 < iVar12) {
                  iVar5 = *(int *)(lVar17 + 0x2e8);
                  iVar15 = *(int *)(lVar17 + 0x430) - *(int *)(lVar17 + 0x438);
                  iVar8 = 0;
                  if (iVar5 != 0) {
                    iVar8 = iVar12 / iVar5;
                  }
                  if ((*(byte *)(lVar17 + 1000) >> 1 & 1) == 0) {
                    iVar15 = iVar15 + iVar8;
                  }
                  else {
                    uVar6 = *(uint *)(lVar17 + 0x434);
                    uVar14 = 0;
                    if ((int)uVar6 < iVar15) {
                      uVar14 = ~uVar6;
                    }
                    if (iVar15 < 0) {
                      uVar14 = uVar6 + 1;
                    }
                    iVar7 = iVar15 + iVar8 + uVar14;
                    iVar15 = *(int *)(lVar17 + 0x3d0);
                    iVar3 = 0;
                    if (iVar15 <= iVar7) {
                      iVar3 = iVar15;
                    }
                    if (-1 < iVar7) {
                      iVar15 = -iVar3;
                    }
                    iVar15 = iVar15 + iVar7;
                  }
                  uVar14 = (iVar15 * iVar5 - iVar8 * iVar5) + iVar12;
                  if (*(int *)(lVar17 + 0x3cc) <= (int)uVar14 || 0x7fffffff < uVar14) {
                    uVar14 = 0xffffffff;
                  }
                  goto LAB_035050c8;
                }
                break;
              }
              iVar12 = iVar12 + 1;
            } while (*(int *)(lVar17 + 0x208) != iVar12);
          }
          uVar14 = 0xffffffff;
LAB_035050c8:
          FUN_030bfe80(puVar16,(((int)uVar14 >= 0 && *(uint *)(lVar17 + 0x3cc) != uVar14) &&
                               ((int)uVar14 < 0 || (int)uVar14 <= (int)*(uint *)(lVar17 + 0x3cc)))
                               && uVar14 == param_2);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar4);
    }
    else {
      puVar2 = PTR_DAT_04bc4da0 + 0x10;
      do {
        puVar16 = (undefined8 *)0x0;
        if (((-1 < (int)uVar18) && ((int)uVar18 < (int)*(uint *)(lVar17 + 0x208))) &&
           (uVar18 < *(uint *)(lVar17 + 0x208))) {
          puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x210) + uVar18 * 8);
        }
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          *(undefined **)puVar9 = puVar2;
          __cxa_guard_release(puVar10);
        }
        if ((puVar16 != (undefined8 *)0x0) &&
           (uVar13 = (**(code **)*puVar16)(puVar16,puVar9), (uVar13 & 1) != 0)) {
          if (*(int *)(lVar17 + 0x208) != 0) {
            iVar12 = 0;
            do {
              if (*(undefined8 **)(*(long *)(lVar17 + 0x210) + (long)iVar12 * 8) == puVar16) {
                if (-1 < iVar12) {
                  iVar5 = *(int *)(lVar17 + 0x2e8);
                  iVar15 = *(int *)(lVar17 + 0x430) - *(int *)(lVar17 + 0x438);
                  iVar8 = 0;
                  if (iVar5 != 0) {
                    iVar8 = iVar12 / iVar5;
                  }
                  if ((*(byte *)(lVar17 + 1000) >> 1 & 1) == 0) {
                    iVar15 = iVar15 + iVar8;
                  }
                  else {
                    uVar6 = *(uint *)(lVar17 + 0x434);
                    uVar14 = 0;
                    if ((int)uVar6 < iVar15) {
                      uVar14 = ~uVar6;
                    }
                    if (iVar15 < 0) {
                      uVar14 = uVar6 + 1;
                    }
                    iVar7 = iVar15 + iVar8 + uVar14;
                    iVar15 = *(int *)(lVar17 + 0x3d0);
                    iVar3 = 0;
                    if (iVar15 <= iVar7) {
                      iVar3 = iVar15;
                    }
                    if (-1 < iVar7) {
                      iVar15 = -iVar3;
                    }
                    iVar15 = iVar15 + iVar7;
                  }
                  iVar7 = *(int *)(lVar17 + 0x3cc);
                  uVar14 = (iVar15 * iVar5 - iVar8 * iVar5) + iVar12;
                  bVar11 = (int)uVar14 < 0;
                  bVar1 = iVar7 <= (int)uVar14;
                  if (bVar11 || bVar1) {
                    uVar14 = 0xffffffff;
                  }
                  if ((!bVar11 && !bVar1) && (int)uVar14 < iVar7) {
                    FUN_030bffe0(puVar16,uVar14 == param_2);
                    goto LAB_03504f5c;
                  }
                }
                break;
              }
              iVar12 = iVar12 + 1;
            } while (*(int *)(lVar17 + 0x208) != iVar12);
          }
          FUN_030bfe80(puVar16,0);
        }
LAB_03504f5c:
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar4);
    }
  }
  return;
}

