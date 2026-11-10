
void FUN_001a39e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001a39e0(param_1,*param_2);
  FUN_001a39e0(param_1,param_2[1]);
  if (param_2[7] != 0) {
    lVar1 = param_2[5];
    plVar2 = (long *)param_2[6];
    param_2[7] = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != param_2 + 5) {
      plVar4 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar4;
    }
  }
  FUN_00187e4c(param_2);
  return;
}

