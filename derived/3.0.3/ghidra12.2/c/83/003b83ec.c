
void FUN_003b83ec(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (((plVar2 == (long *)0x0) || ((char)plVar2[1] == '\0')) ||
     (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar1 == -1)) {
    FUN_003b9a20(*(undefined8 *)(param_1 + 8),param_2);
    return;
  }
  return;
}

