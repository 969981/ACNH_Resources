
long * FUN_002ab090(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (((uint)((ulong)param_2 >> 0x18) & 0xff) == (param_3 & 0xff)) {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar3 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if (iVar2 == (int)param_2) {
          return plVar3;
        }
        plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar3 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return (long *)0x0;
}

