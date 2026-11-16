
void FUN_026f5030(long param_1)

{
  void *__src;
  void *__dest;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t __n;
  long *plVar4;
  
  plVar3 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x130) + 0x40))();
  __src = (void *)plVar3[1];
  __dest = (void *)plVar3[2];
  if (__src != (void *)0x0 && __dest != (void *)0x0) {
    __n = (**(code **)(*plVar3 + 0x28))();
    memcpy(__dest,__src,__n);
    (**(code **)(*plVar3 + 0x30))(plVar3);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3);
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)plVar3[1];
      while (plVar2 != plVar3) {
        plVar1 = (long *)plVar2[1];
        plVar4 = plVar1;
        if (*plVar2 != 0) {
          *(long **)(*plVar2 + 8) = plVar1;
          plVar4 = (long *)plVar2[1];
        }
        if (plVar4 != (long *)0x0) {
          *plVar4 = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        plVar2[-2] = plVar3[3];
        plVar3[3] = (long)(plVar2 + -2);
        plVar2 = plVar1;
      }
    }
  }
  *(byte *)(param_1 + 0x453) = *(byte *)(param_1 + 0x453) | 1;
  return;
}

