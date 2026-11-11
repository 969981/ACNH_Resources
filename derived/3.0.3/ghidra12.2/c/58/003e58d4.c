
void FUN_003e58d4(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_003e5ad0(*param_1,(param_2 + 0x3fU & 0xffffffffffffffc0) + 0x40,0x40);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar1[2] = (long)(plVar1 + 8);
    plVar1[3] = param_2;
    plVar1[4] = param_3;
    plVar1[5] = param_4;
    plVar1[6] = param_5;
    plVar1[7] = param_6;
    plVar2 = (long *)(param_1[1] + 0x10);
    *plVar1 = *plVar2;
    plVar1[1] = (long)plVar2;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar2 = (long)plVar1;
  }
  return;
}

