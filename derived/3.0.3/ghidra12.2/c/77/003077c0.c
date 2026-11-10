
void FUN_003077c0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar3 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_DAT_04bcea78 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)((long)puVar3 + 0x14) == 1) {
      FUN_00197980(puVar3);
      puVar3 = (undefined8 *)param_1[0x23];
      if (puVar3 != (undefined8 *)0x0) goto LAB_00307804;
    }
    else {
LAB_00307804:
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    param_1[0x23] = 0;
  }
  plVar4 = (long *)param_1[0x2e];
  if (plVar4 == (long *)0x0) goto LAB_003078e4;
  if (plVar4[2] == 0) {
LAB_00307884:
    if (plVar4[2] != 0) {
      lVar1 = *plVar4;
      plVar5 = (long *)plVar4[1];
      plVar4[2] = 0;
      lVar2 = *plVar5;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar2;
      while (plVar5 != plVar4) {
        plVar6 = (long *)plVar5[1];
        (**(code **)plVar5[2])();
        FUN_00187e4c(plVar5);
        plVar5 = plVar6;
      }
    }
    FUN_00285dc0(plVar4);
  }
  else {
    lVar1 = *plVar4;
    plVar5 = (long *)plVar4[1];
    plVar4[2] = 0;
    lVar2 = *plVar5;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    if (plVar5 == plVar4) goto LAB_00307884;
    do {
      plVar6 = (long *)plVar5[1];
      (**(code **)plVar5[2])();
      FUN_00187e4c(plVar5);
      plVar5 = plVar6;
    } while (plVar6 != plVar4);
    plVar4 = (long *)param_1[0x2e];
    if (plVar4 != (long *)0x0) goto LAB_00307884;
  }
  param_1[0x2e] = 0;
LAB_003078e4:
  if (param_1[0x40] != 0) {
    FUN_002c1024(DAT_04c611a0);
    puVar3 = (undefined8 *)param_1[0x40];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00285dc0(puVar3);
    }
    param_1[0x40] = 0;
  }
  FUN_00220f6c(param_1 + 0x24);
  thunk_FUN_00221120(param_1);
  return;
}

