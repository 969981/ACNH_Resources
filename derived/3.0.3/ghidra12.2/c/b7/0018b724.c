
void FUN_0018b724(long *param_1,long param_2,ulong param_3)

{
  size_t __n;
  
  __n = strlen(*(char **)(param_2 + 0x18));
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_3 <= __n) {
    __n = param_3;
  }
  *param_1 = (long)(PTR_DAT_04bc0ec8 + 0x10);
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  FUN_0018b7a0(param_1,__n);
  memcpy((void *)param_1[3],*(void **)(param_2 + 0x18),__n);
  *(undefined1 *)(param_1[3] + __n) = 0;
  return;
}

