
void FUN_001726f0(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = param_2 >> 0x14 ^ param_2 >> 0xc ^ param_2;
  plVar2 = (long *)(*param_1 + (ulong)((int)param_1[3] - 1U & (uVar1 >> 7 ^ uVar1 >> 4 ^ uVar1)) * 8
                   );
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  } while (*(uint *)(plVar2 + 1) != param_2);
  return;
}

