
void FUN_033618d0(void *param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar14 = *(long *)PTR_DAT_04bc1118;
  iVar2 = *(int *)(lVar14 + 0x474);
  memset(param_1,0,0x7dc);
  if (0 < iVar2) {
    fVar19 = 0.0;
    iVar16 = 0;
    iVar15 = -1;
    uVar9 = 0;
    do {
      uVar3 = *(ushort *)(*(long *)(lVar14 + 0x468) + (long)iVar16 * 2);
      if (uVar3 == 0) {
        uVar12 = 0;
LAB_033619a4:
        fVar17 = (float)FUN_03361770(param_1,uVar9,uVar12);
        bVar8 = 0x430 < uVar12 - 0x21;
        if (((!bVar8 && iVar16 != iVar15) && (bVar8 || iVar15 <= iVar16)) &&
            *(char *)((long)param_1 + 0x858) != '\0') {
          iVar15 = iVar16;
          fVar20 = fVar17;
          if (iVar16 + 1 < iVar2) {
            iVar5 = iVar16 + 1;
            uVar9 = uVar12;
            do {
              iVar15 = iVar5;
              uVar3 = *(ushort *)(*(long *)(lVar14 + 0x468) + (long)iVar15 * 2);
              uVar7 = (uint)uVar3;
              if ((uVar3 != 0 && uVar3 != 10) &&
                 (uVar7 = 0x25cf, *(int *)(*(long *)(lVar14 + 0x20) + 0x156c) != 1)) {
                uVar7 = (uint)uVar3;
              }
              if (0x430 < uVar7 - 0x21) {
                if (uVar7 == 0x20) {
                  bVar8 = false;
                  lVar13 = 0;
                  do {
                    lVar1 = lVar13 + 0x14;
                    bVar8 = (bool)(((((*(ushort *)((long)&DAT_0418dd10 + lVar13) < 0x21 ||
                                      *(ushort *)((long)&DAT_0418dd0c + lVar13) < 0x21) ||
                                     *(ushort *)((long)&DAT_0418dd08 + lVar13) < 0x21) ||
                                    *(ushort *)((long)&DAT_0418dd04 + lVar13) < 0x21) ||
                                   *(ushort *)((long)&DAT_0418dd00 + lVar13) < 0x21) | bVar8);
                    lVar13 = lVar1;
                  } while (lVar1 != 0x398);
                  if (bVar8) {
                    if (*(char *)((long)param_1 + 0x818) == '\0') {
                      if (uVar9 == 0) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = (**(code **)(**(long **)((long)param_1 + 0x808) + 0xb0))
                                          (*(long **)((long)param_1 + 0x808),uVar9,0x20);
                      }
                      iVar6 = (**(code **)(**(long **)((long)param_1 + 0x808) + 0x80))
                                        (*(long **)((long)param_1 + 0x808),0x20);
                      fVar20 = fVar20 + *(float *)((long)param_1 + 0x7ec) * (float)(iVar6 + iVar5);
                    }
                    else {
                      fVar20 = fVar20 + *(float *)((long)param_1 + 0x800);
                    }
                  }
                  else {
                    fVar20 = fVar20 + *(float *)((long)param_1 + 0x7ec) * 41.0;
                  }
                }
                else {
                  iVar15 = iVar15 + -1;
                }
                break;
              }
              fVar18 = (float)FUN_03361770(param_1,uVar9,uVar7);
              fVar20 = fVar20 + fVar18;
              iVar5 = iVar15 + 1;
              uVar9 = uVar7;
            } while (iVar2 != iVar15 + 1);
          }
          if (iVar16 == 0) {
LAB_03361b70:
            bVar8 = false;
          }
          else {
            uVar9 = *(uint *)((long)param_1 + 0x7d8);
            uVar10 = (ulong)(uVar9 - 1);
            if (0 < (int)uVar9) {
              if (0x1f6 < uVar9) {
                uVar10 = 0;
              }
              if (*(int *)((long)param_1 + uVar10 * 4) == iVar16 + -1) goto LAB_03361b70;
            }
            bVar8 = true;
          }
          fVar18 = *(float *)((long)param_1 + 0x848);
          if (fVar19 + fVar20 <= fVar18) goto LAB_03361b8c;
        }
        else {
          fVar18 = *(float *)((long)param_1 + 0x848);
LAB_03361b8c:
          bVar8 = false;
        }
        bVar4 = false;
        if ((fVar18 < fVar19 + fVar17) || (bVar8)) goto LAB_03361bc0;
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar2) {
          bVar4 = false;
          iVar16 = iVar2;
          goto LAB_03361bc0;
        }
        fVar19 = fVar19 + fVar17 + *(float *)((long)param_1 + 0x820);
      }
      else {
        uVar7 = (uint)uVar3;
        if ((uVar7 != 10) &&
           ((uVar12 = 0x25cf, *(int *)(*(long *)(lVar14 + 0x20) + 0x156c) == 1 ||
            (uVar12 = uVar7, uVar7 != 10)))) goto LAB_033619a4;
        bVar4 = true;
        iVar16 = iVar16 + 1;
LAB_03361bc0:
        uVar10 = (ulong)*(uint *)((long)param_1 + 0x7d8);
        if (0x1f5 < *(uint *)((long)param_1 + 0x7d8)) {
          uVar10 = 0;
        }
        *(int *)((long)param_1 + uVar10 * 4) = iVar16 + -1;
        uVar9 = *(int *)((long)param_1 + 0x7d8) + 1;
        uVar10 = (ulong)uVar9;
        *(uint *)((long)param_1 + 0x7d8) = uVar9;
        if (iVar16 == iVar2) {
          if (0x1f5 < uVar9) {
            uVar10 = 0;
          }
          *(int *)((long)param_1 + uVar10 * 4) = iVar2;
          uVar9 = *(uint *)((long)param_1 + 0x7d8);
          if (bVar4) {
            uVar9 = uVar9 + 1;
            *(uint *)((long)param_1 + 0x7d8) = uVar9;
          }
        }
        uVar7 = *(uint *)((long)param_1 + 0x7dc);
        uVar10 = (ulong)uVar7;
        fVar19 = 0.0;
        uVar12 = 0;
        if (0x1f5 < uVar7) {
          uVar10 = 0;
        }
        iVar5 = *(int *)((long)param_1 + uVar10 * 4);
        if ((iVar5 != 0) && ((int)uVar7 <= (int)uVar9)) {
          lVar13 = *(long *)(lVar14 + 0x20);
          if (*(int *)(lVar13 + 0x6e8) <= iVar5) {
            return;
          }
          if (iVar16 < *(int *)(lVar14 + 0x474)) {
            *(int *)(lVar14 + 0x474) = iVar16;
            *(undefined2 *)(*(long *)(lVar14 + 0x468) + (long)iVar16 * 2) = 0;
            lVar13 = *(long *)(lVar14 + 0x20);
          }
          *(int *)(lVar13 + 0x6e8) = iVar16;
          *(int *)(lVar13 + 0x6ec) = iVar16;
          if (*(long *)(lVar13 + 0x6e0) == 0) {
            return;
          }
          plVar11 = *(long **)(*(long *)(lVar13 + 0x6e0) + 8);
          if (plVar11 == (long *)0x0) {
            return;
          }
          (**(code **)(*plVar11 + 0x188))(plVar11);
          FUN_03322410(plVar11);
          if (*(long *)(lVar13 + 0x6e0) == 0) {
            return;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0x6e0) + 8);
          if (lVar14 == 0) {
            return;
          }
          *(undefined4 *)(lVar14 + 0x15ec) = *(undefined4 *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e8)
          ;
          return;
        }
      }
      uVar9 = uVar12;
    } while (iVar16 < iVar2);
  }
  return;
}

