
undefined8 FUN_0029b2ac(char *param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((((*param_1 != '\0') && (*(long *)(param_1 + 0xf0) != 0)) &&
      (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8))) &&
     (*(long **)(param_1 + (ulong)(byte)param_1[0x162] * 8 + 0x168) != (long *)0x0)) {
    uVar1 = (**(code **)(**(long **)(param_1 + (ulong)(byte)param_1[0x162] * 8 + 0x168) + 0xe0))();
    if (((uVar1 & 1) != 0) &&
       (plVar2 = *(long **)(param_1 + (ulong)(byte)param_1[0x162] * 8 + 0x168),
       plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0029b31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,param_2);
      return uVar3;
    }
  }
  return 0;
}

