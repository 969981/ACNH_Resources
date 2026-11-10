
void FUN_0030f1a0(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_a0 [112];
  
  if (param_2[2] != 0) {
    lVar3 = *param_2;
    plVar2 = (long *)param_2[1];
    lVar4 = *plVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    param_2[2] = 0;
    while (plVar2 != param_2) {
      plVar5 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar5;
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar3 + 0x18) - lVar4) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar1 = *(int *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar4);
  *(long *)(param_1 + 0x18) = lVar4 + 4;
  while ((iVar1 != 0 && (*(char *)(param_1 + 8) == '\0'))) {
    FUN_001b8014(auStack_a0);
    FUN_001f7734(param_1,auStack_a0);
    if (*(char *)(param_1 + 8) != '\0') {
      if (param_2[2] != 0) {
        lVar3 = *param_2;
        plVar2 = (long *)param_2[1];
        lVar4 = *plVar2;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        param_2[2] = 0;
        while (plVar2 != param_2) {
          plVar5 = (long *)plVar2[1];
          (**(code **)plVar2[2])();
          FUN_00187e4c(plVar2);
          plVar2 = plVar5;
        }
      }
      FUN_001b8504(auStack_a0);
      return;
    }
    plVar2 = (long *)FUN_00187df4(0x80);
    *plVar2 = 0;
    FUN_001b8358(plVar2 + 2,auStack_a0);
    plVar2[1] = (long)param_2;
    lVar3 = *param_2;
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    *param_2 = (long)plVar2;
    param_2[2] = param_2[2] + 1;
    FUN_001b8504(auStack_a0);
    iVar1 = iVar1 + -1;
  }
  return;
}

