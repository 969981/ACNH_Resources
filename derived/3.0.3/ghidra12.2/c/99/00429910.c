
void * FUN_00429910(long *param_1,uint param_2,ulong param_3)

{
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = param_1[1] - *param_1;
  __n = uVar2 - param_3;
  if (uVar2 < param_3 || __n == 0) {
    return (void *)0x0;
  }
  pvVar1 = memchr((void *)(*param_1 + param_3),param_2 & 0xff,__n);
  return pvVar1;
}

