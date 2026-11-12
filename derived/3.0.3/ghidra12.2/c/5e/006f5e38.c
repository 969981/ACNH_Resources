
void FUN_006f5e38(long param_1)

{
  void *pvVar1;
  void *__s;
  
  __s = *(void **)(param_1 + 8);
  if ((__s != (void *)0x0) && (*(uint *)(param_1 + 0x10) != 0)) {
    pvVar1 = (void *)((long)__s + (ulong)*(uint *)(param_1 + 0x10) * 2);
    if (pvVar1 <= (void *)((long)__s + 2U)) {
      pvVar1 = (void *)((long)__s + 2U);
    }
    memset(__s,0,((long)pvVar1 + ~(ulong)__s & 0xfffffffffffffffe) + 2);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  **(undefined1 **)(param_1 + 0x38) = 0;
  **(undefined1 **)(param_1 + 0x90) = 0;
  return;
}

