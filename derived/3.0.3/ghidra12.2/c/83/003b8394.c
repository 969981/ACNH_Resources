
void FUN_003b8394(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (((plVar1 == (long *)0x0) || ((char)plVar1[1] == '\0')) ||
     (lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2), lVar2 == 0)) {
    FUN_003b9a3c(*(undefined8 *)(param_1 + 8),param_2);
    return;
  }
  return;
}

