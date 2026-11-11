
void FUN_003bd8d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)param_1[1];
    lVar2 = param_1[2];
    do {
      plVar3 = plVar4;
      if ((plVar1 <= plVar4) && (plVar4 < (long *)((long)plVar1 + lVar2))) {
        *param_1 = *plVar4;
        plVar3 = param_1;
      }
      param_1 = plVar3;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}

