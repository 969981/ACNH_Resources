
void FUN_00317d50(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined1 auStack_190 [336];
  
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
  iVar6 = *(int *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar4);
  *(long *)(param_1 + 0x18) = lVar4 + 4;
  if (iVar6 != 0) {
    puVar1 = PTR_DAT_04bcec90 + 0x10;
    do {
      if (*(char *)(param_1 + 8) != '\0') {
        return;
      }
      FUN_003137a4(auStack_190);
      FUN_00314890(param_1,auStack_190);
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
        FUN_002e73b4(auStack_190);
        return;
      }
      plVar2 = (long *)FUN_00187df4(0x160);
      *plVar2 = 0;
      FUN_00317f30(plVar2 + 2,auStack_190);
      plVar2[1] = (long)param_2;
      plVar2[2] = (long)puVar1;
      lVar3 = *param_2;
      *plVar2 = lVar3;
      *(long **)(lVar3 + 8) = plVar2;
      *param_2 = (long)plVar2;
      param_2[2] = param_2[2] + 1;
      FUN_002e73b4(auStack_190);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

