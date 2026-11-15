
void FUN_0214d570(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)(param_1 + 0x70)) {
    plVar1 = plVar2 + -2;
    do {
      if (*(int *)((long)plVar1 + 4) == 7) {
        if (*(long **)(param_1 + 0x1f0) != plVar1) {
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
          *plVar1 = *(long *)(param_1 + 0x88);
          *(long **)(param_1 + 0x88) = plVar1;
          return;
        }
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined4 *)(param_1 + 0x1fc) = 7;
        FUN_0214d220(param_1);
        *(undefined1 *)(param_1 + 0x236) = 1;
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        *plVar1 = *(long *)(param_1 + 0x88);
        *(long **)(param_1 + 0x88) = plVar1;
        FUN_0214d690(param_1,param_2,1,0);
        return;
      }
      plVar2 = (long *)plVar2[1];
      plVar1 = plVar2 + -2;
    } while (plVar1 != (long *)(param_1 + 0x60));
  }
  return;
}

