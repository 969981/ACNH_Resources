
void FUN_0039e390(long param_1,void *param_2,void *param_3)

{
  size_t __n;
  void *__src;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 0x10) {
    memcpy(param_2,param_3,((ulong)bVar1 & 3) * 4 + 4);
    return;
  }
  if (bVar1 < 0x1c) {
    uVar2 = bVar1 - 0x10;
    __n = ((ulong)bVar1 & 3) * 4 + 4;
    memcpy(param_2,param_3,__n);
    memcpy((void *)((long)param_2 + 0x10),(void *)((long)param_3 + __n),__n);
    if (3 < uVar2) {
      __src = (void *)((long)((long)param_3 + __n) + __n);
      memcpy((void *)((long)param_2 + 0x20),__src,__n);
      if ((uVar2 & 0xfffffffc) != 4) {
        memcpy((void *)((long)param_2 + 0x30),(void *)((long)__src + __n),__n);
        return;
      }
    }
  }
  return;
}

