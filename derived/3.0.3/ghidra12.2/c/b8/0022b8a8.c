
void FUN_0022b8a8(long param_1,uint param_2)

{
  void *__s;
  long lVar1;
  
  if ((param_2 + 3 & 0xff) < 2) {
    memset((void *)(param_1 + 0x5fc),0,4);
    return;
  }
  __s = (void *)(param_1 + 0x5fc);
  if (((param_2 ^ 0xffffffff) & 0xff) == 0) {
    memset(__s,0xff,4);
    return;
  }
  lVar1 = (ulong)(param_2 >> 5 & 7) * 4;
  *(uint *)((long)__s + lVar1) = *(uint *)((long)__s + lVar1) | 1 << (ulong)(param_2 & 0x1f);
  return;
}

