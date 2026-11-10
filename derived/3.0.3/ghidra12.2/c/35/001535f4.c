
undefined8 FUN_001535f4(long param_1,char *param_2,size_t param_3)

{
  void *__dest;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0xffffffffffffffff) {
      param_3 = strlen(param_2);
    }
    __dest = (void *)FUN_001432f0(param_3 + 1);
    *(void **)(param_1 + 0x20) = __dest;
    if (__dest == (void *)0x0) {
      uVar1 = 0x1b;
    }
    else {
      *(size_t *)(param_1 + 0x78) = param_3;
      if (param_3 != 0) {
        memcpy(__dest,param_2,param_3);
        __dest = *(void **)(param_1 + 0x20);
      }
      *(undefined1 *)((long)__dest + param_3) = 0;
      *(code **)(param_1 + 0x28) = FUN_00153b88;
      *(undefined1 **)(param_1 + 0x30) = &LAB_00153bdc;
      uVar1 = 0;
      *(code **)(param_1 + 0x38) = FUN_00153c28;
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return uVar1;
}

