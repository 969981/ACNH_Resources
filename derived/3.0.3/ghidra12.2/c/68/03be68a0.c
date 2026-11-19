
void FUN_03be68a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x18))();
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x18))();
  }
  if ((long *)param_1[0x10] != param_1 + 0xf) {
    lVar2 = (long)*(int *)((long)param_1 + 0x8c);
    plVar3 = (long *)(param_1[0x10] - lVar2);
    lVar5 = (long)plVar3 + lVar2;
    do {
      plVar4 = (long *)((long)plVar3 + (long)*(int *)((long)param_1 + 0x8c));
      lVar5 = *(long *)(lVar5 + 8);
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1[5] + 0x30) + 0x18) + 0x20))();
      (**(code **)(*plVar3 + 0x60))(plVar3);
      if ((*(uint *)(plVar3 + 6) & 0xfffffffe) != 4) {
        (**(code **)(*plVar3 + 0x40))(plVar3);
      }
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[4] = 0;
      plVar4 = *(long **)(lVar1 + 0xb8);
      (**(code **)*plVar3)(plVar3);
      (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      plVar3 = (long *)(lVar5 - lVar2);
    } while (plVar3 != (long *)((long)(param_1 + 0xf) - lVar2));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

