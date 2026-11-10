
long * FUN_001a38f0(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar3 = param_2;
    do {
      plVar5 = (long *)plVar3[2];
      bVar2 = (long *)*plVar5 != plVar3;
      plVar3 = plVar5;
    } while (bVar2);
  }
  else {
    do {
      plVar5 = plVar3;
      plVar3 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar5;
  }
  param_1[2] = param_1[2] + -1;
  FUN_00192390(param_1[1],param_2);
  if (param_2[7] != 0) {
    lVar1 = param_2[5];
    plVar3 = (long *)param_2[6];
    param_2[7] = 0;
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    while (plVar3 != param_2 + 5) {
      plVar6 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar6;
    }
  }
  FUN_00187e4c(param_2);
  return plVar5;
}

