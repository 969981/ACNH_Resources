
long * FUN_00161fc8(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00143330(1,*(long *)(param_2 + 0x28) + 0x10);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
    iVar1 = (**(code **)(param_2 + 0x10))(param_1,plVar2);
    if (iVar1 != 0) {
      FUN_00143300(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}

