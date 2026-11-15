
void FUN_01f6911c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if ((uVar1 < 10) && ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0')) {
    FUN_0219bcf0(&DAT_053fe348 + (ulong)uVar1 * 0xba0,0,0xffffffff,1,1);
  }
  if ((DAT_05aa8928 != (int *)0x0) &&
     ((*DAT_05aa8928 != 0 || DAT_05aa8928[2] != 0) && *DAT_05aa8928 == *(int *)(param_1 + 0x89a0)))
  {
    *(undefined1 *)(DAT_05aa8928 + 0x2c) = 1;
  }
  return;
}

