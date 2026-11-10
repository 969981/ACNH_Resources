
void FUN_00380358(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(long **)(param_1 + 0x28) != (long *)0x0) &&
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0x48))(), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00367b50(plVar1);
  }
  if (((*(char *)(param_1 + 0x228) != '\0') && (*(long **)(param_1 + 0x18) != (long *)0x0)) &&
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x48))(), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00367b50(plVar1);
  }
  if ((*(long **)(param_1 + 0x68) == (long *)0x0) ||
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x48))(), plVar1 == (long *)0x0))
  {
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  (**(code **)(*plVar1 + 8))(plVar1);
  FUN_00367b50(plVar1);
  return;
}

