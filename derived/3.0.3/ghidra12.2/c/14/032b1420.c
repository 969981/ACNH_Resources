
void FUN_032b1420(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6,
                 long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  
  if (param_5 != 0) {
    do {
      if ((param_4 <= param_7) || (param_5 <= param_7)) {
        if (param_4 <= param_5) {
          if (param_1 == param_2) {
            return;
          }
          lVar20 = 0;
          do {
            puVar1 = (undefined8 *)((long)param_1 + lVar20);
            puVar2 = (undefined8 *)((long)param_6 + lVar20);
            lVar20 = lVar20 + 0x10;
            uVar3 = puVar1[1];
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
          } while ((long *)((long)param_1 + lVar20) != param_2);
          if (lVar20 == 0) {
            return;
          }
          plVar7 = param_6;
          do {
            if (param_2 == param_3) {
              memmove(param_1,plVar7,(long)param_6 + (lVar20 - (long)plVar7));
              return;
            }
            if (*(int *)(*param_2 + 0x20) < *(int *)(*plVar7 + 0x20)) {
              lVar8 = *param_2;
              lVar22 = param_2[1];
              param_2 = param_2 + 2;
              plVar9 = plVar7;
            }
            else {
              plVar9 = plVar7 + 2;
              lVar8 = *plVar7;
              lVar22 = plVar7[1];
            }
            *param_1 = lVar8;
            param_1[1] = lVar22;
            param_1 = param_1 + 2;
            plVar7 = plVar9;
          } while ((long *)((long)param_6 + lVar20) != plVar9);
          return;
        }
        if (param_2 == param_3) {
          return;
        }
        lVar20 = 0;
        do {
          puVar1 = (undefined8 *)((long)param_2 + lVar20);
          puVar2 = (undefined8 *)((long)param_6 + lVar20);
          lVar20 = lVar20 + 0x10;
          uVar3 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
        } while ((long *)((long)param_2 + lVar20) != param_3);
        if (lVar20 == 0) {
          return;
        }
        plVar7 = (long *)((long)param_6 + lVar20);
        do {
          plVar9 = param_3 + -2;
          if (param_2 == param_1) {
            lVar20 = 0;
            do {
              lVar8 = lVar20 + -0x10;
              uVar3 = *(undefined8 *)((long)plVar7 + lVar20 + -8);
              *(undefined8 *)((long)plVar9 + lVar20) =
                   *(undefined8 *)((long)plVar7 + lVar20 + -0x10);
              ((undefined8 *)((long)plVar9 + lVar20))[1] = uVar3;
              lVar20 = lVar8;
            } while ((long *)((long)plVar7 + lVar8) != param_6);
            return;
          }
          plVar17 = plVar7 + -2;
          plVar21 = param_2 + -2;
          plVar23 = plVar21;
          if (*(int *)(*plVar21 + 0x20) <= *(int *)(*plVar17 + 0x20)) {
            plVar21 = param_2;
            plVar7 = plVar17;
            plVar23 = plVar17;
          }
          lVar20 = plVar23[1];
          *plVar9 = *plVar23;
          param_3[-1] = lVar20;
          param_2 = plVar21;
          param_3 = plVar9;
        } while (plVar7 != param_6);
        return;
      }
      if (param_4 == 0) {
        return;
      }
      lVar8 = 0;
      lVar20 = -param_4;
      while (*(int *)(*(long *)((long)param_1 + lVar8) + 0x20) <= *(int *)(*param_2 + 0x20)) {
        bVar6 = lVar20 == -1;
        lVar20 = lVar20 + 1;
        lVar8 = lVar8 + 0x10;
        if (bVar6) {
          return;
        }
      }
      param_4 = -lVar20;
      plVar7 = (long *)((long)param_1 + lVar8);
      if (param_4 < param_5) {
        lVar22 = param_5;
        if (param_5 < 0) {
          lVar22 = param_5 + 1;
        }
        lVar22 = lVar22 >> 1;
        plVar9 = param_2 + lVar22 * 2;
        plVar21 = param_2;
        if (plVar7 != param_2) {
          uVar11 = (long)param_2 + (-lVar8 - (long)param_1) >> 4;
          plVar21 = plVar7;
          do {
            uVar15 = uVar11 >> 1;
            uVar12 = uVar11 + ~uVar15;
            uVar11 = uVar15;
            if (*(int *)(plVar21[uVar15 * 2] + 0x20) <= *(int *)(*plVar9 + 0x20)) {
              uVar11 = uVar12;
              plVar21 = plVar21 + uVar15 * 2 + 2;
            }
          } while (uVar11 != 0);
        }
        param_4 = (long)plVar21 + (-lVar8 - (long)param_1) >> 4;
      }
      else {
        if (lVar20 == -1) {
          lVar20 = *plVar7;
          lVar8 = plVar7[1];
          lVar22 = param_2[1];
          *plVar7 = *param_2;
          plVar7[1] = lVar22;
          *param_2 = lVar20;
          param_2[1] = lVar8;
          return;
        }
        if (param_4 < 0) {
          param_4 = param_4 + 1;
        }
        param_4 = param_4 >> 1;
        plVar21 = (long *)((long)param_1 + lVar8 + param_4 * 0x10);
        plVar9 = param_3;
        if ((long)param_3 - (long)param_2 != 0) {
          uVar11 = (long)param_3 - (long)param_2 >> 4;
          plVar23 = param_2;
          do {
            uVar12 = uVar11 >> 1;
            plVar9 = plVar23 + uVar12 * 2 + 2;
            uVar11 = uVar11 + ~uVar12;
            if (*(int *)(*plVar21 + 0x20) <= *(int *)(plVar23[uVar12 * 2] + 0x20)) {
              plVar9 = plVar23;
              uVar11 = uVar12;
            }
            plVar23 = plVar9;
          } while (uVar11 != 0);
        }
        lVar22 = (long)plVar9 - (long)param_2 >> 4;
      }
      plVar23 = plVar9;
      if ((plVar21 != param_2) && (plVar23 = plVar21, param_2 != plVar9)) {
        if (plVar21 + 2 == param_2) {
          lVar8 = *plVar21;
          lVar10 = plVar21[1];
          memmove(plVar21,param_2,(long)plVar9 - (long)param_2);
          plVar23 = (long *)((long)plVar21 + ((long)plVar9 - (long)param_2));
          *plVar23 = lVar8;
          plVar23[1] = lVar10;
        }
        else if (param_2 + 2 == plVar9) {
          plVar17 = plVar9 + -2;
          lVar10 = *plVar17;
          lVar8 = plVar9[-1];
          plVar23 = (long *)((long)plVar9 - ((long)plVar17 - (long)plVar21));
          if ((long)plVar17 - (long)plVar21 != 0) {
            memmove(plVar23,plVar21,(long)plVar17 - (long)plVar21);
          }
          *plVar21 = lVar10;
          plVar21[1] = lVar8;
        }
        else {
          lVar8 = (long)param_2 - (long)plVar21 >> 4;
          lVar10 = (long)plVar9 - (long)param_2 >> 4;
          if (lVar8 == lVar10) {
            lVar8 = 0;
            do {
              puVar1 = (undefined8 *)((long)plVar21 + lVar8);
              puVar2 = (undefined8 *)((long)param_2 + lVar8);
              uVar3 = *puVar1;
              uVar4 = puVar1[1];
              uVar5 = puVar2[1];
              *puVar1 = *puVar2;
              puVar1[1] = uVar5;
              *puVar2 = uVar3;
              puVar2[1] = uVar4;
              if (puVar1 + 2 == param_2) break;
              lVar8 = lVar8 + 0x10;
            } while (puVar2 + 2 != plVar9);
            plVar23 = param_2;
          }
          else {
            lVar13 = lVar8;
            lVar16 = lVar10;
            do {
              lVar19 = lVar16;
              lVar16 = 0;
              if (lVar19 != 0) {
                lVar16 = lVar13 / lVar19;
              }
              lVar16 = lVar13 - lVar16 * lVar19;
              lVar13 = lVar19;
            } while (lVar16 != 0);
            if (lVar19 != 0) {
              plVar23 = plVar21 + lVar19 * 2;
              do {
                plVar14 = plVar23 + -2;
                lVar13 = *plVar14;
                lVar16 = plVar23[-1];
                plVar17 = plVar14;
                plVar23 = plVar14 + lVar8 * 2;
                do {
                  plVar18 = plVar23;
                  lVar19 = plVar18[1];
                  *plVar17 = *plVar18;
                  plVar17[1] = lVar19;
                  lVar19 = (long)plVar9 - (long)plVar18 >> 4;
                  plVar23 = plVar18 + lVar8 * 2;
                  if (lVar19 <= lVar8) {
                    plVar23 = plVar21 + (lVar8 - lVar19) * 2;
                  }
                  plVar17 = plVar18;
                } while (plVar23 != plVar14);
                *plVar18 = lVar13;
                plVar18[1] = lVar16;
                plVar23 = plVar14;
              } while (plVar14 != plVar21);
            }
            plVar23 = plVar21 + lVar10 * 2;
          }
        }
      }
      if (param_4 + lVar22 < (param_5 - (param_4 + lVar22)) - lVar20) {
        FUN_032b1420(plVar7,plVar21,plVar23,param_4,lVar22,param_6,param_7);
        plVar7 = plVar23;
        plVar23 = param_3;
        param_5 = param_5 - lVar22;
        param_2 = plVar9;
        param_4 = -(param_4 + lVar20);
      }
      else {
        FUN_032b1420(plVar23,plVar9,param_3,-(param_4 + lVar20),param_5 - lVar22,param_6,param_7);
        param_5 = lVar22;
        param_2 = plVar21;
      }
      param_1 = plVar7;
      param_3 = plVar23;
    } while (param_5 != 0);
  }
  return;
}

