
long * FUN_03c63ed0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_1 = param_2;
  }
  else {
    do {
      while( true ) {
        plVar3 = plVar1;
        iVar2 = (*(code *)param_1[1])((long)param_2 - param_1[3],(long)plVar3 - param_1[3]);
        if (iVar2 < 0) break;
        if (iVar2 == 0) {
          *param_2 = *plVar3;
          param_2[2] = plVar3[2];
          param_2[1] = plVar3[1];
          *(int *)(param_2 + 3) = (int)plVar3[3];
          lVar4 = *plVar3;
          if (lVar4 != 0) {
            param_1 = (undefined8 *)(lVar4 + 8);
            if (*(long **)(lVar4 + 8) != plVar3) {
              param_1 = (undefined8 *)(lVar4 + 0x10);
            }
          }
          *param_1 = param_2;
          if ((undefined8 *)plVar3[1] != (undefined8 *)0x0) {
            *(undefined8 *)plVar3[1] = param_2;
          }
          if ((undefined8 *)plVar3[2] != (undefined8 *)0x0) {
            *(undefined8 *)plVar3[2] = param_2;
          }
          plVar3[1] = 0;
          plVar3[2] = 0;
          *plVar3 = 0;
          *(undefined4 *)(plVar3 + 3) = 1;
          return plVar3;
        }
        plVar1 = (long *)plVar3[2];
        if ((long *)plVar3[2] == (long *)0x0) {
          plVar3[2] = (long)param_2;
          goto LAB_03c63fb4;
        }
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar3[1] = (long)param_2;
LAB_03c63fb4:
    param_2[2] = 0;
    *param_2 = (long)plVar3;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    FUN_03c675a0(param_1,param_2);
  }
  return (long *)0x0;
}

