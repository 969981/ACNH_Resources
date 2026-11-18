
undefined8 FUN_036152e8(ulong *param_1,ulong param_2,int param_3)

{
  void *__s;
  ulong *__dest;
  ulong uVar1;
  ulong *__src;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __src = param_1 + 3;
  __dest = __src;
  if ((uVar2 & 1) != 0) {
    __dest = (ulong *)*__src;
  }
  if (uVar1 < param_2) {
    if (uVar2 >> 1 < param_2) {
      if (0x7ffffffffffffffe < param_2) {
        return 0x80000007;
      }
      uVar1 = (uVar2 >> 1) + (uVar2 >> 2);
      uVar2 = param_2;
      if (param_2 <= uVar1) {
        uVar2 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar2) {
        uVar2 = 0x7ffffffffffffffe;
      }
      __dest = (ulong *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar2 + 1,0);
      if (__dest == (ulong *)0x0) {
        __dest = (ulong *)(**(code **)(*(long *)param_1[2] + 0x10))
                                    ((long *)param_1[2],param_2 + 1,0);
        uVar2 = param_2;
        if (__dest == (ulong *)0x0) {
          return 0x80000007;
        }
      }
      else {
      }
      if ((param_1[1] & 1) != 0) {
        __src = (ulong *)param_1[3];
      }
      memcpy(__dest,__src,*param_1 + 1);
      if ((param_1[1] & 1) != 0) {
        (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1[3]);
      }
      param_1[3] = (ulong)__dest;
      param_1[1] = uVar2 << 1 | 1;
      uVar1 = *param_1;
    }
    if ((long)uVar1 < (long)param_2) {
      __s = (void *)((long)__dest + uVar1);
      uVar1 = (long)__dest + param_2;
      if (uVar1 < (long)__s + 1U) {
        uVar1 = (long)__s + 1;
      }
      memset(__s,param_3,uVar1 - (long)__s);
    }
  }
  *(undefined1 *)((long)__dest + param_2) = 0;
  *param_1 = param_2;
  return 0;
}

