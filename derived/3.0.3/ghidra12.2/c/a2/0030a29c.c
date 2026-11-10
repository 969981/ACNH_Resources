
void FUN_0030a29c(long param_1,void *param_2,uint param_3)

{
  if ((param_2 != (void *)0x0) && (param_3 < 0x201)) {
    memset((void *)(param_1 + 0x30),0,0x200);
    memcpy((void *)(param_1 + 0x30),param_2,(ulong)param_3);
    *(uint *)(param_1 + 0x230) = param_3;
  }
  return;
}

