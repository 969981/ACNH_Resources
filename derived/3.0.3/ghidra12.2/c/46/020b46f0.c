
void FUN_020b46f0(long param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x2f50);
  if (lVar3 != param_1 + 0x2f48) {
    plVar2 = (long *)(lVar3 + -0xe0);
    do {
      lVar6 = plVar2[1];
      if ((int)plVar2[2] < 1) {
        lVar6 = 0;
      }
      if ((lVar6 != 0 && (int *)(lVar6 + -0x10) != (int *)0x0) &&
         (*(int *)(lVar6 + -0x10) == *param_3)) {
        if ((int)plVar2[5] <= (int)plVar2[2]) {
          return;
        }
        uVar1 = *param_2;
        plVar4 = (long *)plVar2[3];
        if (plVar4 != (long *)0x0) {
          plVar2[3] = *plVar4;
        }
        *(undefined4 *)plVar4 = uVar1;
        plVar5 = plVar4 + 2;
        *plVar5 = 0;
        *(undefined8 *)((long)plVar4 + 4) = 5;
        plVar4[3] = 0;
        lVar3 = *plVar2;
        *plVar2 = (long)plVar5;
        plVar4[3] = (long)plVar2;
        *plVar5 = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 8) = plVar5;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        return;
      }
      lVar3 = *(long *)(lVar3 + 8);
      plVar2 = (long *)(lVar3 + -0xe0);
    } while (plVar2 != (long *)(param_1 + 0x2e68));
  }
  return;
}

