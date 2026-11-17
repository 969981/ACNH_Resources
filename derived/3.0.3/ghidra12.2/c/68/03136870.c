
void FUN_03136870(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  undefined1 *__src;
  long *plVar15;
  uint uVar16;
  undefined1 *__dest;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar6 = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x2c) = uVar6;
  if (*(long *)(param_1 + 0x98) != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar14 = 0;
      do {
        plVar13 = *(long **)(*(long *)(param_1 + 0x98) + lVar14 * 8);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar14 = lVar14 + 1;
        *plVar13 = *(long *)(param_1 + 0xa0);
        *(long **)(param_1 + 0xa0) = plVar13;
      } while (lVar14 < *(int *)(param_1 + 0x90));
      uVar6 = *(uint *)(param_1 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (uVar6 != 0) {
    uVar8 = 0;
    do {
      uVar16 = uVar8;
      if (*param_2 <= uVar8) {
        uVar16 = 0;
      }
      if (*(char *)(*(long *)(param_2 + 2) + (ulong)uVar16 * 0x70 + 0x68) != '\0') {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1 << (ulong)(uVar8 & 0x1f);
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
    if (((*(byte *)(param_1 + 0x38) >> 1 & 1) != 0) &&
       (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x28))) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x18);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_030e5370(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0);
      uVar6 = *(uint *)(param_1 + 0x2c);
    }
    if (uVar6 != 0) {
      uVar16 = 0;
      uVar8 = 0;
      lVar14 = param_1 + 8;
      bVar5 = *(long *)(param_1 + 0x98) != 0;
      puVar1 = PTR_DAT_04bc4ee8 + 0x10;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      do {
        if ((*(uint *)(param_1 + 0x3c) >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
          uVar9 = *param_2;
          lVar7 = *(long *)(param_2 + 2);
          uVar10 = *(uint *)(param_1 + 0x18);
          uVar6 = uVar16;
          if (uVar9 <= uVar16) {
            uVar6 = 0;
          }
          if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uVar10)) {
            if (uVar8 < uVar10) {
              lVar11 = lVar14;
              if (6 < uVar8) {
                uVar12 = uVar8 + 1 & 0xfffffff8;
                do {
                  uVar12 = uVar12 - 8;
                  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar11 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar12 != 0);
              }
              for (uVar12 = uVar8 + 1 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                lVar11 = *(long *)(lVar11 + 8);
              }
            }
            else {
              lVar11 = 0;
            }
            if ((lVar11 != 0) && (lVar11 = lVar11 - *(int *)(param_1 + 0x1c), lVar11 != 0)) {
              FUN_03133694(lVar11,*(undefined4 *)(lVar7 + (ulong)uVar6 * 0x70 + 8));
              uVar9 = *param_2;
              lVar7 = *(long *)(param_2 + 2);
              uVar10 = *(uint *)(param_1 + 0x18);
            }
          }
          uVar6 = uVar16;
          if (uVar9 <= uVar16) {
            uVar6 = 0;
          }
          if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uVar10)) {
            if (uVar8 < uVar10) {
              lVar11 = lVar14;
              if (6 < uVar8) {
                uVar9 = uVar8 + 1 & 0xfffffff8;
                do {
                  uVar9 = uVar9 - 8;
                  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar11 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar9 != 0);
              }
              for (uVar9 = uVar8 + 1 & 7; uVar9 != 0; uVar9 = uVar9 - 1) {
                lVar11 = *(long *)(lVar11 + 8);
              }
            }
            else {
              lVar11 = 0;
            }
            if ((lVar11 != 0) && (lVar11 = lVar11 - *(int *)(param_1 + 0x1c), lVar11 != 0)) {
              FUN_03134d14(lVar11,lVar7 + (ulong)uVar6 * 0x70 + 0x10);
            }
          }
          if ((bVar5) && (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94))) {
            plVar13 = *(long **)(param_1 + 0xa0);
            if (plVar13 != (long *)0x0) {
              *(long *)(param_1 + 0xa0) = *plVar13;
            }
            *(undefined1 *)((long)plVar13 + 99) = 0;
            __dest = (undefined1 *)((long)plVar13 + 0x24);
            *__dest = 0;
            *plVar13 = (long)puVar1;
            *(undefined4 *)(plVar13 + 1) = 0xffffffff;
            *(undefined4 *)(plVar13 + 4) = 0x40;
            plVar13[2] = (long)puVar2;
            plVar13[3] = (long)__dest;
            *(undefined1 *)(plVar13 + 0xd) = 1;
            if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
              *(long **)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0x90) * 8) = plVar13;
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
              __dest = (undefined1 *)plVar13[3];
            }
            uVar6 = uVar16;
            if (*param_2 <= uVar16) {
              uVar6 = 0;
            }
            *(undefined4 *)(plVar13 + 1) =
                 *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar6 * 0x70 + 8);
            uVar6 = uVar16;
            if (*param_2 <= uVar16) {
              uVar6 = 0;
            }
            lVar7 = *(long *)(param_2 + 2) + (ulong)uVar6 * 0x70;
            plVar15 = (long *)(lVar7 + 0x10);
            (**(code **)(*plVar15 + 0x18))(plVar15);
            __src = *(undefined1 **)(lVar7 + 0x18);
            if (__dest != __src) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
              lVar11 = 0;
              do {
                if (*(char *)(*(long *)(lVar7 + 0x18) + lVar11) == '\0') goto LAB_03136c4c;
                lVar3 = *(long *)(lVar7 + 0x18) + lVar11;
                if (*(char *)(lVar3 + 1) == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_03136c4c;
                }
                if (*(char *)(lVar3 + 2) == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_03136c4c;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_03136c4c:
              iVar4 = (int)lVar11;
              if ((int)plVar13[4] <= (int)lVar11) {
                iVar4 = (int)plVar13[4] + -1;
              }
              memcpy(__dest,__src,(long)iVar4);
              __dest[iVar4] = 0;
            }
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          uVar6 = *(uint *)(param_1 + 0x2c);
          uVar8 = uVar8 + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar6);
    }
  }
  return;
}

