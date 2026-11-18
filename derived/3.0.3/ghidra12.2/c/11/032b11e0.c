
void FUN_032b11e0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      plVar5 = param_2 + -2;
      if (*(int *)(*plVar5 + 0x20) < *(int *)(*param_1 + 0x20)) {
        lVar7 = param_2[-1];
        *param_4 = *plVar5;
        param_4[1] = lVar7;
        lVar7 = *param_1;
        lVar9 = param_1[1];
      }
      else {
        lVar7 = param_1[1];
        *param_4 = *param_1;
        param_4[1] = lVar7;
        lVar7 = *plVar5;
        lVar9 = param_2[-1];
      }
      param_4[2] = lVar7;
      param_4[3] = lVar9;
    }
    else if (param_3 == 1) {
      lVar7 = param_1[1];
      *param_4 = *param_1;
      param_4[1] = lVar7;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        lVar7 = param_1[1];
        *param_4 = *param_1;
        param_4[1] = lVar7;
        if (param_1 + 2 != param_2) {
          lVar7 = 0;
          plVar5 = param_1 + 2;
          plVar6 = param_4;
          do {
            plVar8 = plVar6 + 2;
            plVar10 = plVar8;
            if (*(int *)(*plVar5 + 0x20) < *(int *)(*plVar6 + 0x20)) {
              *plVar8 = *plVar6;
              plVar6[3] = plVar6[1];
              plVar10 = param_4;
              if (plVar6 != param_4) {
                lVar9 = lVar7;
                do {
                  plVar10 = (long *)((long)param_4 + lVar9);
                  if (*(int *)(plVar10[-2] + 0x20) <= *(int *)(*plVar5 + 0x20)) goto LAB_032b1284;
                  lVar9 = lVar9 + -0x10;
                  *plVar10 = plVar10[-2];
                  plVar10[1] = plVar10[-1];
                } while (lVar9 != 0);
                plVar10 = param_4;
              }
            }
LAB_032b1284:
            plVar4 = plVar5 + 2;
            lVar9 = plVar5[1];
            lVar7 = lVar7 + 0x10;
            *plVar10 = *plVar5;
            plVar10[1] = lVar9;
            plVar5 = plVar4;
            plVar6 = plVar8;
          } while (plVar4 != param_2);
        }
      }
    }
    else {
      uVar11 = param_3 >> 1;
      plVar5 = param_1 + uVar11 * 2;
      FUN_032b0f70(param_1,plVar5,uVar11,param_4,uVar11);
      FUN_032b0f70(plVar5,param_2,param_3 - uVar11,param_4 + uVar11 * 2,param_3 - uVar11);
      plVar6 = plVar5;
      do {
        if (plVar6 == param_2) {
          if (param_1 == plVar5) {
            return;
          }
          lVar7 = 0;
          do {
            puVar1 = (undefined8 *)((long)param_1 + lVar7);
            puVar2 = (undefined8 *)((long)param_4 + lVar7);
            lVar7 = lVar7 + 0x10;
            uVar3 = puVar1[1];
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
          } while ((long *)((long)param_1 + lVar7) != plVar5);
          return;
        }
        if (*(int *)(*plVar6 + 0x20) < *(int *)(*param_1 + 0x20)) {
          lVar7 = *plVar6;
          lVar9 = plVar6[1];
          plVar6 = plVar6 + 2;
          plVar10 = param_1;
        }
        else {
          plVar10 = param_1 + 2;
          lVar7 = *param_1;
          lVar9 = param_1[1];
        }
        *param_4 = lVar7;
        param_4[1] = lVar9;
        param_4 = param_4 + 2;
        param_1 = plVar10;
      } while (plVar10 != plVar5);
      if (plVar6 != param_2) {
        lVar7 = 0;
        do {
          puVar1 = (undefined8 *)((long)plVar6 + lVar7);
          puVar2 = (undefined8 *)((long)param_4 + lVar7);
          lVar7 = lVar7 + 0x10;
          uVar3 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
        } while ((long *)((long)plVar6 + lVar7) != param_2);
      }
    }
  }
  return;
}

