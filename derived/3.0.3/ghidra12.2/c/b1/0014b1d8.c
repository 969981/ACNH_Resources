
void FUN_0014b1d8(long *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1 != (long *)0x0) && (iVar2 = (int)param_1[4], 0 < iVar2)) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x20);
      plVar3 = (long *)*puVar1;
      if (plVar3 != (long *)0x0) {
        do {
          plVar5 = (long *)plVar3[2];
          if ((param_3 == (code *)0x0) ||
             (iVar2 = (*param_3)(param_2,*(undefined8 *)(*plVar3 + 0x18)), iVar2 != 0)) {
            FUN_00143b00(puVar1,plVar3,param_1);
            param_1[5] = param_1[5] + -1;
          }
          plVar3 = plVar5;
        } while (plVar5 != (long *)0x0);
        iVar2 = (int)param_1[4];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}

