
/* WARNING: Removing unreachable block (ram,0x034f4ca0) */

void FUN_034f4a30(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  
  puVar10 = PTR_DAT_04bc4d98;
  lVar19 = *(long *)(*(long *)(param_1 + 0x238) + 0x570);
  if ((lVar19 != 0) && (uVar4 = *(uint *)(lVar19 + 0x2f8), uVar4 != 0)) {
    uVar17 = 0;
    puVar2 = PTR_DAT_04bc4da0 + 0x10;
    do {
      uVar16 = (uint)uVar17;
      uVar8 = 1 << (ulong)(uVar16 & 0x1f);
      if ((*(uint *)(*(long *)(param_1 + 0x1d298) + (long)((int)uVar16 >> 5) * 4) & uVar8) == 0) {
        plVar18 = (long *)0x0;
        if (((-1 < (int)uVar16) && ((int)uVar16 < (int)*(uint *)(lVar19 + 0x208))) &&
           (uVar17 < *(uint *)(lVar19 + 0x208))) {
          plVar18 = *(long **)(*(long *)(lVar19 + 0x210) + uVar17 * 8);
        }
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          *(undefined **)PTR_DAT_04bc4d90 = puVar2;
          __cxa_guard_release(puVar10);
        }
        if (((plVar18 != (long *)0x0) &&
            (uVar13 = (**(code **)*plVar18)(plVar18,PTR_DAT_04bc4d90), (uVar13 & 1) != 0)) &&
           (*(int *)(lVar19 + 0x208) != 0)) {
          iVar12 = 0;
          do {
            if (*(long **)(*(long *)(lVar19 + 0x210) + (long)iVar12 * 8) == plVar18) {
              if (-1 < iVar12) {
                iVar5 = *(int *)(lVar19 + 0x2e8);
                iVar15 = *(int *)(lVar19 + 0x430) - *(int *)(lVar19 + 0x438);
                iVar9 = 0;
                if (iVar5 != 0) {
                  iVar9 = iVar12 / iVar5;
                }
                if ((*(byte *)(lVar19 + 1000) >> 1 & 1) == 0) {
                  iVar15 = iVar15 + iVar9;
                }
                else {
                  uVar6 = *(uint *)(lVar19 + 0x434);
                  uVar16 = 0;
                  if ((int)uVar6 < iVar15) {
                    uVar16 = ~uVar6;
                  }
                  if (iVar15 < 0) {
                    uVar16 = uVar6 + 1;
                  }
                  iVar7 = iVar15 + iVar9 + uVar16;
                  iVar15 = *(int *)(lVar19 + 0x3d0);
                  iVar3 = 0;
                  if (iVar15 <= iVar7) {
                    iVar3 = iVar15;
                  }
                  if (-1 < iVar7) {
                    iVar15 = -iVar3;
                  }
                  iVar15 = iVar15 + iVar7;
                }
                iVar7 = *(int *)(lVar19 + 0x3cc);
                iVar12 = (iVar15 * iVar5 - iVar9 * iVar5) + iVar12;
                bVar11 = iVar12 < 0;
                bVar1 = iVar7 <= iVar12;
                if (bVar11 || bVar1) {
                  iVar12 = -1;
                }
                if (((!bVar11 && !bVar1) && iVar12 < iVar7) &&
                   (iVar12 = FUN_034eb514(param_1,plVar18,uVar17 & 0xffffffff),
                   iVar12 == 3 || iVar12 == 0)) {
                  if (uVar17 < *(uint *)(param_1 + 0x1d290)) {
                    lVar14 = ((long)(uVar17 << 0x20) >> 0x25) * 4;
                    *(uint *)(*(long *)(param_1 + 0x1d298) + lVar14) =
                         *(uint *)(*(long *)(param_1 + 0x1d298) + lVar14) | uVar8;
                  }
                  if (iVar12 == 0) {
                    (**(code **)(*plVar18 + 0x140))(plVar18,1,0);
                    /* WARNING: Could not recover jumptable at 0x034f4c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&UNK_034f4c60 + (ulong)DAT_0418f012 * 4))();
                    return;
                  }
                }
              }
              break;
            }
            iVar12 = iVar12 + 1;
          } while (*(int *)(lVar19 + 0x208) != iVar12);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar4);
  }
  return;
}

