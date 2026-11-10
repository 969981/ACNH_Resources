
void FUN_002eb9fc(long param_1,void *param_2,uint param_3)

{
  if ((param_2 != (void *)0x0) && (param_3 < 0x201)) {
    memcpy((void *)(param_1 + 0x460),param_2,(ulong)param_3);
    *(uint *)(param_1 + 0x660) = param_3;
  }
  return;
}

