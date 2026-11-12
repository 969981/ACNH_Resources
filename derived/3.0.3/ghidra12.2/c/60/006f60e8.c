
void FUN_006f60e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  
  __dest = *(void **)(param_1 + 0x18);
  if (__dest != (void *)0x0) {
    uVar2 = param_2[4] - (long)*param_2;
    uVar1 = (long)__dest + (uVar2 & 0x1fffffffe);
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      if (*(long *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x200) = 2;
      }
    }
    else {
      memcpy(__dest,(void *)*param_2,uVar2 & 0xffffffff);
      *(ulong *)(param_1 + 0x18) = uVar1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (int)(uVar2 >> 1);
    }
  }
  return;
}

