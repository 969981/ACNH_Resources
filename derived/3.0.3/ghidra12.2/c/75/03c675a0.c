
void FUN_03c675a0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  
  plVar4 = (long *)*param_2;
  do {
    iVar1 = (int)plVar4[3];
    if (param_2 == (long *)plVar4[1]) {
      if (iVar1 < 0) {
        lVar2 = *plVar4;
        plVar3 = (long *)param_2[2];
        if ((int)param_2[3] < 1) {
          plVar4[1] = (long)plVar3;
          param_2[2] = (long)plVar4;
          if ((undefined8 *)plVar4[1] != (undefined8 *)0x0) {
            *(undefined8 *)plVar4[1] = plVar4;
          }
          *param_2 = *plVar4;
          *plVar4 = (long)param_2;
          *(int *)(plVar4 + 3) = (int)plVar4[3] - (int)param_2[3];
          *(int *)(param_2 + 3) = (int)param_2[3] + 1;
          plVar3 = param_2;
        }
        else {
          param_2[2] = plVar3[1];
          plVar3[1] = (long)param_2;
          if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[2] = param_2;
          }
          *plVar3 = *param_2;
          *param_2 = (long)plVar3;
          plVar4[1] = (long)plVar3;
          plVar4[1] = plVar3[2];
          plVar3[2] = (long)plVar4;
          if ((undefined8 *)plVar4[1] != (undefined8 *)0x0) {
            *(undefined8 *)plVar4[1] = plVar4;
          }
          *plVar3 = *plVar4;
          *plVar4 = (long)plVar3;
          *(uint *)(plVar4 + 3) = *(uint *)(plVar3 + 3) >> 0x1f;
          *(uint *)(param_2 + 3) = -(uint)(0 < (int)plVar3[3]);
          *(undefined4 *)(plVar3 + 3) = 0;
        }
        if (lVar2 == 0) {
          *param_1 = plVar3;
          return;
        }
        if (*(long **)(lVar2 + 8) == plVar4) {
          *(long **)(lVar2 + 8) = plVar3;
          return;
        }
        *(long **)(lVar2 + 0x10) = plVar3;
        return;
      }
      uVar5 = 0xffffffff;
      if (iVar1 != 0) goto LAB_03c675fc;
    }
    else {
      if (0 < iVar1) {
        lVar2 = *plVar4;
        if ((int)param_2[3] < 0) {
          plVar3 = (long *)param_2[1];
          param_2[1] = plVar3[2];
          plVar3[2] = (long)param_2;
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] = param_2;
          }
          *plVar3 = *param_2;
          *param_2 = (long)plVar3;
          plVar4[2] = (long)plVar3;
          plVar4[2] = plVar3[1];
          plVar3[1] = (long)plVar4;
          if ((undefined8 *)plVar4[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar4[2] = plVar4;
          }
          *plVar3 = *plVar4;
          *plVar4 = (long)plVar3;
          *(uint *)(plVar4 + 3) = -(uint)(0 < (int)plVar3[3]);
          *(uint *)(param_2 + 3) = *(uint *)(plVar3 + 3) >> 0x1f;
          *(undefined4 *)(plVar3 + 3) = 0;
        }
        else {
          plVar3 = (long *)plVar4[2];
          plVar4[2] = plVar3[1];
          plVar3[1] = (long)plVar4;
          if ((undefined8 *)plVar4[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar4[2] = plVar4;
          }
          *plVar3 = *plVar4;
          *plVar4 = (long)plVar3;
          *(int *)(plVar4 + 3) = (int)plVar4[3] - (int)param_2[3];
          *(int *)(param_2 + 3) = (int)param_2[3] + -1;
        }
        if (lVar2 == 0) {
          *param_1 = plVar3;
          return;
        }
        if (*(long **)(lVar2 + 8) == plVar4) {
          *(long **)(lVar2 + 8) = plVar3;
          return;
        }
        *(long **)(lVar2 + 0x10) = plVar3;
        return;
      }
      if (iVar1 < 0) {
LAB_03c675fc:
        *(undefined4 *)(plVar4 + 3) = 0;
        return;
      }
      uVar5 = 1;
    }
    plVar3 = (long *)*plVar4;
    *(undefined4 *)(plVar4 + 3) = uVar5;
    param_2 = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (long *)0x0) {
      return;
    }
  } while( true );
}

