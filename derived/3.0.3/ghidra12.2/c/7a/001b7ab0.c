
void FUN_001b7ab0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_0483aa58;
  if (param_1[5] != 0) {
    lVar2 = param_1[3];
    plVar4 = (long *)param_1[4];
    plVar1 = param_1 + 3;
    param_1[5] = 0;
    lVar3 = *plVar4;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    if (plVar4 != plVar1) {
      do {
        plVar5 = (long *)plVar4[1];
        (**(code **)plVar4[2])();
        FUN_00187e4c(plVar4);
        plVar4 = plVar5;
      } while (plVar5 != plVar1);
      if (param_1[5] != 0) {
        lVar2 = param_1[3];
        plVar4 = (long *)param_1[4];
        param_1[5] = 0;
        lVar3 = *plVar4;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
        **(long **)(lVar2 + 8) = lVar3;
        while (plVar4 != plVar1) {
          plVar5 = (long *)plVar4[1];
          (**(code **)plVar4[2])();
          FUN_00187e4c(plVar4);
          plVar4 = plVar5;
        }
      }
    }
  }
  return;
}

