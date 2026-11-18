
undefined8 FUN_03605e64(ulong *param_1,size_t param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  ulong *__src;
  ulong uVar2;
  size_t __n;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar2 = *param_1;
  uVar5 = param_1[1];
  __src = param_1 + 3;
  if ((uVar5 & 1) != 0) {
    __src = (ulong *)param_1[3];
  }
  uVar1 = uVar2 + param_4;
  if (CARRY8(uVar2,param_4)) {
LAB_03605ea8:
    uVar3 = 0x80000007;
  }
  else {
    if (uVar5 >> 1 < uVar1) {
      if (0x7ffffffffffffffe < uVar1) goto LAB_03605ea8;
      uVar2 = (uVar5 >> 1) + (uVar5 >> 2);
      uVar5 = uVar1;
      if (uVar1 <= uVar2) {
        uVar5 = uVar2;
      }
      if (0x7ffffffffffffffd < uVar5) {
        uVar5 = 0x7ffffffffffffffe;
      }
      pvVar4 = (void *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar5 + 1,0);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar1 + 1,0);
        uVar5 = uVar1;
        if (pvVar4 == (void *)0x0) goto LAB_03605ea8;
      }
      else {
      }
      if (param_2 != 0) {
        memcpy(pvVar4,__src,param_2);
      }
      memcpy((void *)((long)pvVar4 + param_2),param_3,param_4);
      __n = *param_1 - param_2;
      if (param_2 <= *param_1 && __n != 0) {
        memcpy((void *)((long)((long)pvVar4 + param_2) + param_4),(void *)((long)__src + param_2),
               __n);
      }
      *(undefined1 *)((long)pvVar4 + uVar1) = 0;
      if ((param_1[1] & 1) != 0) {
        (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1[3]);
      }
      param_1[3] = (ulong)pvVar4;
      param_1[1] = uVar5 << 1 | 1;
    }
    else {
      pvVar4 = (void *)((long)__src + param_2);
      memmove((void *)((long)pvVar4 + param_4),pvVar4,(uVar2 - param_2) + 1);
      memcpy(pvVar4,param_3,param_4);
    }
    uVar3 = 0;
    *param_1 = uVar1;
  }
  return uVar3;
}

