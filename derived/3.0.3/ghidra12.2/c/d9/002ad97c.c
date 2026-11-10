
void FUN_002ad97c(void *param_1,long param_2,uint param_3,uint param_4)

{
  if (0x5a0 - param_4 < param_3) {
    return;
  }
  memcpy(param_1,(void *)(param_2 + (ulong)param_4),(ulong)param_3);
  return;
}

