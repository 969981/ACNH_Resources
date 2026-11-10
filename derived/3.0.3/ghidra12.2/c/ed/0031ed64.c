
undefined8 FUN_0031ed64(long param_1,uint param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 2) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  if (iVar1 == 1) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x18);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  return *(undefined8 *)(param_1 + 0x18);
}

