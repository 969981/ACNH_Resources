
void FUN_0039ffe0(long param_1,void *param_2)

{
  if ((ulong)*(byte *)(param_1 + 0xeb) == 0) {
    return;
  }
  memset(param_2,0xff,(ulong)*(byte *)(param_1 + 0xeb) << 2);
  return;
}

