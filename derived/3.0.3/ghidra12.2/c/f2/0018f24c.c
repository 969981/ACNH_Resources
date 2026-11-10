
void FUN_0018f24c(long param_1,ulong param_2)

{
  size_t __n;
  void *__src;
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *__dest;
  ulong uVar4;
  
  __src = *(void **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  if (param_2 == 0) {
    if (__src != (void *)0x0) {
      pcVar3 = *(code **)((long)__src + -0x10);
      if (pcVar3 == (code *)0x0) {
        free((undefined8 *)((long)__src + -0x10));
      }
      else {
        (*pcVar3)();
      }
    }
    __dest = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(long *)(param_1 + 0x20) - (long)__src;
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar2 = malloc((param_2 + 7 & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar2 = (undefined8 *)(*DAT_04c57ea0)();
    }
    __n = param_2;
    if (uVar4 <= param_2) {
      __n = uVar4;
    }
    __dest = puVar2 + 2;
    *puVar2 = *(undefined8 *)PTR_DAT_04bcba28;
    memcpy(__dest,__src,__n);
    if (__src != (void *)0x0) {
      pcVar3 = *(code **)((long)__src + -0x10);
      if (pcVar3 == (code *)0x0) {
        free((undefined8 *)((long)__src + -0x10));
      }
      else {
        (*pcVar3)();
      }
    }
  }
  *(undefined8 **)(param_1 + 0x10) = __dest;
  *(long *)(param_1 + 0x18) = (long)__dest + (lVar1 - (long)__src);
  *(ulong *)(param_1 + 0x20) = (long)__dest + param_2;
  return;
}

