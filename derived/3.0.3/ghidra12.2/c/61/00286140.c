
void FUN_00286140(long *param_1,int param_2,code *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((1 < (int)param_1[2]) && (*(long **)(param_1[1] + 8) != param_1)) {
    lVar6 = (long)-param_2;
    plVar5 = *(long **)(param_1[1] + 8);
    do {
      plVar7 = (long *)*plVar5;
      plVar1 = (long *)plVar5[1];
      iVar2 = (*param_3)((long)plVar7 + lVar6,(long)plVar5 + lVar6);
      if (0 < iVar2) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == param_1) {
            lVar3 = *plVar5;
            plVar7 = param_1;
            if (lVar3 == 0) goto LAB_002861e0;
            goto LAB_002861d8;
          }
          iVar2 = (*param_3)((long)plVar7 + lVar6,(long)plVar5 + lVar6);
        } while (0 < iVar2);
        lVar3 = *plVar5;
        if (lVar3 != 0) {
LAB_002861d8:
          *(long *)(lVar3 + 8) = plVar5[1];
        }
LAB_002861e0:
        if ((long *)plVar5[1] != (long *)0x0) {
          *(long *)plVar5[1] = lVar3;
        }
        plVar5[1] = 0;
        puVar4 = (undefined8 *)plVar7[1];
        plVar7[1] = (long)plVar5;
        *plVar5 = (long)plVar7;
        plVar5[1] = (long)puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = plVar5;
        }
      }
      plVar5 = plVar1;
    } while (plVar1 != param_1);
  }
  return;
}

