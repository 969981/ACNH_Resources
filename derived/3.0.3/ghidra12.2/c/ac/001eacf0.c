
void FUN_001eacf0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x78) != 0 && plVar5 != plVar1) {
    do {
      uVar2 = (**(code **)(**(long **)(plVar5[4] + 0x10) + 0x58))();
      if ((((uVar2 & 1) != 0) && (plVar5[4] != 0)) && (*(int *)(plVar5[4] + 8) == 1)) {
        if (plVar5 == plVar1) {
          return;
        }
        for (plVar6 = (long *)plVar5[1]; plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
          uVar2 = (**(code **)(**(long **)(plVar6[4] + 0x10) + 0x58))();
          if ((((uVar2 & 1) == 0) || (plVar6[4] == 0)) || (*(int *)(plVar6[4] + 8) != 1)) {
            FUN_001ed7e0(plVar5 + 2,plVar6 + 2);
            plVar5 = (long *)plVar5[1];
          }
        }
        if (plVar5 == plVar1) {
          return;
        }
        lVar3 = *plVar1;
        lVar4 = *plVar5;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        do {
          plVar6 = (long *)plVar5[1];
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
          FUN_001ea950(plVar5 + 2);
          FUN_00187e4c(plVar5);
          plVar5 = plVar6;
        } while (plVar6 != plVar1);
        return;
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != plVar1);
  }
  return;
}

