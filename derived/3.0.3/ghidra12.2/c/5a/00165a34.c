
ulong FUN_00165a34(undefined8 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar1 = FUN_00153ad8(param_1,param_2);
    return uVar1;
  }
  __dest = (void *)FUN_001432f0(param_3 + 1);
  if (__dest == (void *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    uVar1 = FUN_00153ad8(param_1,__dest);
    uVar1 = uVar1 & 0xffffffff;
    FUN_00143300(__dest);
  }
  return uVar1;
}

