
ulong FUN_04002aec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char *__s;
  
  plVar1 = *(long **)PTR_DAT_04bdf328;
  if (param_5 != (long *)0x0) {
    plVar1 = param_5;
  }
  *(long **)(param_1 + 600) = plVar1;
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,0x30,8);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0x80000007;
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 **)(param_1 + 0x248) = puVar2;
    *(undefined8 **)(param_1 + 0x250) = puVar2;
    *(long **)(param_1 + 600) = plVar1;
    __s = (char *)*param_4;
    if (__s == (char *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      __n = strlen(__s);
      __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,__n + 1,0);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)((long)__dest + __n) = 0;
      }
    }
    *(void **)(param_1 + 0x240) = __dest;
    uVar3 = FUN_04002d34(param_1,param_4);
    if ((uVar3 >> 0x1e & 3) == 0) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x260) = 1;
    }
    else {
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(param_1 + 0x240) != 0) {
        (**(code **)(**(long **)(param_1 + 600) + 0x18))();
        *(undefined8 *)(param_1 + 0x240) = 0;
      }
    }
  }
  return uVar3;
}

