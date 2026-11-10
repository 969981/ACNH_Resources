
long FUN_0019af50(long param_1)

{
  long local_18;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return *(long *)(param_1 + 0x20);
  }
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  *(long *)PTR_DAT_04bcbcb0 = local_18;
  return (local_18 - (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18))) +
         *(long *)(param_1 + 0x20);
}

