
void FUN_00256710(void *param_1,void *param_2,ulong param_3)

{
  memcpy(param_1,param_2,param_3 & 0xffffffff);
  if (*(char *)((long)param_1 + 9) == '\0') {
    *(undefined1 *)((long)param_1 + 9) = 0x14;
    return;
  }
  return;
}

