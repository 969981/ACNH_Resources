
void FUN_03ba4260(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 8) != '\0') {
    plVar2 = (long *)(param_1 + 0x20);
    if ((long *)*plVar2 != plVar2) {
      lVar3 = (long)*(int *)(param_1 + 0x34);
      plVar1 = (long *)(*plVar2 - lVar3);
      do {
        (**(code **)(*plVar1 + 0x60))(plVar1);
        plVar1 = (long *)(*(long *)((long)plVar1 + lVar3) - lVar3);
      } while (plVar1 != (long *)((long)plVar2 - lVar3));
      if (*(long **)(param_1 + 0x20) != plVar2) {
        lVar3 = (long)*(int *)(param_1 + 0x34);
        plVar1 = (long *)((long)*(long **)(param_1 + 0x20) - lVar3);
        do {
          (**(code **)(*plVar1 + 0x58))(plVar1);
          plVar1 = (long *)(*(long *)((long)plVar1 + lVar3) - lVar3);
        } while ((long *)((long)plVar2 - lVar3) != plVar1);
        if (*(long **)(param_1 + 0x20) != plVar2) {
          lVar3 = (long)*(int *)(param_1 + 0x34);
          plVar1 = (long *)((long)*(long **)(param_1 + 0x20) - lVar3);
          do {
            (**(code **)(*plVar1 + 0x68))(plVar1);
            *(int *)(plVar1 + 0x2f) =
                 (int)plVar1[0x2e] + (int)plVar1[0x2d] + *(int *)((long)plVar1 + 0x174);
            plVar1 = (long *)(*(long *)((long)plVar1 + lVar3) - lVar3);
          } while ((long *)((long)plVar2 - lVar3) != plVar1);
        }
      }
    }
  }
  return;
}

