
void FUN_01ca4fc0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_2 & 1) == 0) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x1cd0) = uVar1;
  if ((*(int *)(param_1 + 0x38) == 0) ||
     ((*(int *)(param_1 + 0x38) == 1 && (*(char *)(param_1 + 0x2079) == '\0')))) {
    *(undefined1 *)(param_1 + 0x207e) = 0;
  }
  FUN_03ebb160(param_1 + 0x30,1);
  return;
}

