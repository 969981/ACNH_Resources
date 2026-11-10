
void FUN_001bb8f0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    plVar2 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != (long *)(param_1 + 8)) {
      plVar4 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}

