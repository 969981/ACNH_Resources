
undefined8 FUN_00172694(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar1 = uVar2 >> 0x14 ^ uVar2 >> 0xc ^ uVar2;
  uVar3 = (ulong)((uVar1 >> 7 ^ uVar1 >> 4 ^ uVar1) & param_2 - 1U);
  plVar4 = *(long **)(param_1 + uVar3 * 8);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      if (*(uint *)(plVar5 + 1) == uVar2) {
        return 0xfffffe0b;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    *param_3 = (long)plVar4;
  }
  *(long **)(param_1 + uVar3 * 8) = param_3;
  return 0;
}

