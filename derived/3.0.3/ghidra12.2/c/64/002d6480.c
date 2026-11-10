
void FUN_002d6480(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x88);
  if (plVar4[2] != 0) {
    lVar1 = *plVar4;
    plVar2 = (long *)plVar4[1];
    plVar4[2] = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != plVar4) {
      plVar5 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar5;
    }
  }
  return;
}

