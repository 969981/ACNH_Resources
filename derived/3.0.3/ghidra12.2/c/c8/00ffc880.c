
undefined4 FUN_00ffc880(long param_1,long param_2)

{
  long lVar1;
  
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1a)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (((*(int *)(lVar1 + 0x10) <= *(int *)(param_2 + 0x18)) &&
        (*(int *)(param_2 + 0x18) <= *(int *)(lVar1 + 0x20))) &&
       ((*(int *)(lVar1 + 0x14) <= *(int *)(param_2 + 0x1c) &&
        (*(int *)(param_2 + 0x1c) <= *(int *)(lVar1 + 0x24))))) {
      **(undefined1 **)(param_1 + 8) = 1;
      return 1;
    }
  }
  return 0;
}

