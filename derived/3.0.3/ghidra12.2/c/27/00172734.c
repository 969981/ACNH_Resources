
undefined8 FUN_00172734(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = param_2 >> 0x14 ^ param_2 >> 0xc ^ param_2;
  plVar3 = (long *)(*param_1 + (ulong)((int)param_1[3] - 1U & (uVar1 >> 7 ^ uVar1 >> 4 ^ uVar1)) * 8
                   );
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
    if (plVar3 == (long *)0x0) {
      return 0xfffffe0b;
    }
  } while (*(uint *)(plVar3 + 1) != param_2);
  *plVar2 = *plVar3;
  param_1[2] = param_1[2] + -1;
  return 0;
}

