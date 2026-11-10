
void FUN_001479e8(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((*(long *)(param_1 + 0x12b0) != 0 || (*(int *)(param_1 + 0x12b8) != 0)))) {
    iVar1 = FUN_0017af74(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb0),param_1 + 0x12c0);
    if (iVar1 != 0) {
      FUN_0014d430(param_1,"Internal error clearing splay node = %d\n",iVar1);
    }
    if (*(long *)(param_1 + 0x1310) != 0) {
      do {
        FUN_00143b00(param_1 + 0x12f8,*(undefined8 *)(param_1 + 0x1300),0);
      } while (*(long *)(param_1 + 0x1310) != 0);
    }
    *(undefined8 *)(param_1 + 0x12b0) = 0;
    *(undefined4 *)(param_1 + 0x12b8) = 0;
  }
  return;
}

