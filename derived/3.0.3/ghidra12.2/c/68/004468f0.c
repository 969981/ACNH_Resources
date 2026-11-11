
void FUN_004468f0(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  
  if ((long *)(*param_1 & 0xfffffffffffffffc) != (long *)0x0) {
    plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
    puVar4 = param_1;
    do {
      while( true ) {
        puVar1 = (ulong *)(plVar2 + 1);
        plVar3 = (long *)(*puVar1 & 0xfffffffffffffffc);
        if (plVar2[2] == param_2) break;
joined_r0x00446958:
        plVar2 = plVar3;
        puVar4 = puVar1;
        if (plVar3 == (long *)0x0) {
          return;
        }
      }
      if ((*param_1 & 3) != 0) {
        *puVar1 = (ulong)plVar3 | 1;
        goto joined_r0x00446958;
      }
      *puVar4 = *puVar4 & 3 | (ulong)plVar3;
      (**(code **)(*plVar2 + 8))();
      plVar2 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}

