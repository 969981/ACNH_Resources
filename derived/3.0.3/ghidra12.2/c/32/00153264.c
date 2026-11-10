
undefined8 FUN_00153264(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
     (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) {
    iVar1 = FUN_00144b18(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

