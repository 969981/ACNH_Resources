
void FUN_0015a950(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)0x0;
  plVar3 = (long *)(param_1 + 0xf18);
  do {
    plVar2 = plVar1;
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB_0015a9a0;
    plVar1 = plVar3;
  } while (plVar3[1] != param_2);
  plVar1 = (long *)(param_1 + 0xf18);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
  }
  *plVar1 = *plVar3;
  FUN_00143300();
LAB_0015a9a0:
  *(undefined8 *)(param_2 + 0xf08) = 0;
  *(ulong *)(param_2 + 0xf60) = *(ulong *)(param_2 + 0xf60) & 0xffefffffffffffff;
  return;
}

