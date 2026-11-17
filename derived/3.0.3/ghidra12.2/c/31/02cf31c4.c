
void FUN_02cf31c4(long param_1)

{
  if (*(int *)(param_1 + 0x248) != -1) {
    FUN_02cde320(param_1 + 0x1f8);
    if (*(long *)(DAT_05739190 + 0x30) != 0) {
      FUN_033bbfd4();
    }
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  return;
}

