
void FUN_0364edd4(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[3] != '\0') {
    lVar1 = *param_1;
    FUN_03653cb0(lVar1 + 0x2a8,0,*(undefined8 *)(lVar1 + 0x2c0),0x1000,
                 *(int *)(lVar1 + 0x6b8) - 1U &
                 *(uint *)((long)(param_1 + 1) + ((ulong)*(uint *)(param_1 + 1) + 1) * 4) << 0xc,
                 *(char *)(lVar1 + 0x2b8) == '\0');
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    lVar1 = *param_1;
    FUN_03653cb0(lVar1 + 0x2a8,0x1000,*(undefined8 *)(lVar1 + 0x300),0x1000,
                 *(int *)(lVar1 + 0x6c8) - 1U &
                 ((uint *)((long)param_1 + 0x1c))[(ulong)*(uint *)((long)param_1 + 0x1c) + 1] << 0xc
                 ,*(char *)(lVar1 + 0x2f8) == '\0');
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}

