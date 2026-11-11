
void FUN_00446a70(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  
  cVar3 = FUN_00442bd0();
  if (cVar3 != '\0') {
    plVar4 = (long *)(*param_1 & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((*param_1 & 3) == 0) {
        *param_1 = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        *param_1 = 0;
        return;
      }
      do {
        plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
        plVar4[1] = (ulong)plVar1 | 1;
        plVar4 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  return;
}

