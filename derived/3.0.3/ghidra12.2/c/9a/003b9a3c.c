
undefined8 FUN_003b9a3c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (iVar1 = FUN_003b942c(*(undefined8 *)(param_1 + 0x40)), iVar1 == -1)) {
    return 0;
  }
  uVar2 = FUN_003b8f50(*(undefined8 *)(param_1 + 0x38),iVar1);
  return uVar2;
}

