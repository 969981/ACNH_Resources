
void FUN_032b0f70(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      plVar10 = param_2 + -2;
      if (*(int *)(*plVar10 + 0x20) < *(int *)(*param_1 + 0x20)) {
        lVar5 = *param_1;
        lVar7 = param_1[1];
        lVar3 = param_2[-1];
        *param_1 = *plVar10;
        param_1[1] = lVar3;
        *plVar10 = lVar5;
        param_2[-1] = lVar7;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
        lVar5 = 0;
        plVar10 = param_1 + 2;
        plVar8 = param_1;
        do {
          plVar6 = plVar10;
          lVar7 = plVar8[2];
          if (*(int *)(lVar7 + 0x20) < *(int *)(*plVar8 + 0x20)) {
            lVar9 = plVar8[3];
            lVar3 = lVar5;
            do {
              lVar11 = lVar3;
              puVar1 = (undefined8 *)((long)param_1 + lVar11);
              puVar1[2] = *puVar1;
              puVar1[3] = puVar1[1];
              if (lVar11 == 0) {
                plVar10 = param_1;
                goto LAB_032b1004;
              }
              lVar3 = lVar11 + -0x10;
            } while (*(int *)(lVar7 + 0x20) < *(int *)(puVar1[-2] + 0x20));
            plVar10 = (long *)((long)param_1 + lVar11);
LAB_032b1004:
            *plVar10 = lVar7;
            plVar10[1] = lVar9;
          }
          plVar10 = plVar6 + 2;
          lVar5 = lVar5 + 0x10;
          plVar8 = plVar6;
        } while (plVar10 != param_2);
      }
    }
    else {
      uVar13 = param_3 >> 1;
      plVar10 = param_1 + uVar13 * 2;
      lVar5 = param_3 - uVar13;
      if (param_5 < (long)param_3) {
        FUN_032b0f70();
        FUN_032b0f70(plVar10,param_2,lVar5,param_4,param_5);
        FUN_032b1420(param_1,plVar10,param_2,uVar13,lVar5,param_4,param_5);
        return;
      }
      FUN_032b11e0(param_1,plVar10,uVar13);
      plVar8 = param_4 + uVar13 * 2;
      FUN_032b11e0(plVar10,param_2,lVar5,plVar8);
      plVar10 = param_4 + param_3 * 2;
      plVar6 = plVar8;
      do {
        if (plVar6 == plVar10) {
          if (param_4 == plVar8) {
            return;
          }
          lVar5 = 0;
          do {
            puVar1 = (undefined8 *)((long)param_4 + lVar5);
            puVar2 = (undefined8 *)((long)param_1 + lVar5);
            lVar5 = lVar5 + 0x10;
            uVar4 = puVar1[1];
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
          } while ((long *)((long)param_4 + lVar5) != plVar8);
          return;
        }
        if (*(int *)(*plVar6 + 0x20) < *(int *)(*param_4 + 0x20)) {
          lVar5 = *plVar6;
          lVar7 = plVar6[1];
          plVar6 = plVar6 + 2;
          plVar12 = param_4;
        }
        else {
          plVar12 = param_4 + 2;
          lVar5 = *param_4;
          lVar7 = param_4[1];
        }
        *param_1 = lVar5;
        param_1[1] = lVar7;
        param_1 = param_1 + 2;
        param_4 = plVar12;
      } while (plVar12 != plVar8);
      if (plVar6 != plVar10) {
        lVar5 = 0;
        do {
          puVar1 = (undefined8 *)((long)plVar6 + lVar5);
          puVar2 = (undefined8 *)((long)param_1 + lVar5);
          lVar5 = lVar5 + 0x10;
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        } while ((long *)((long)plVar6 + lVar5) != plVar10);
      }
    }
  }
  return;
}

