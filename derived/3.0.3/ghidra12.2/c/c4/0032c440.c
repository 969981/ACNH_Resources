
void FUN_0032c440(long *param_1,ulong param_2)

{
  undefined *puVar1;
  void *__s;
  ulong __n;
  
  __n = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,__n,0x80);
  memset(__s,0,__n);
  puVar1 = PTR_DAT_04bceeb8;
  *(void **)PTR_DAT_04bceeb8 = __s;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(ulong *)(puVar1 + 0x10) = (long)(int)param_2 & 0x1fffffffffffffff;
  return;
}

