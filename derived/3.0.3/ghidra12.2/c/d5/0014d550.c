
undefined4 FUN_0014d550(long param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 < 3) && (__dest = (void *)FUN_001432f0(param_4 + 1), __dest != (void *)0x0)) {
      memcpy(__dest,param_3,param_4);
      *(undefined1 *)((long)__dest + param_4) = 0;
      FUN_00143300(__dest);
    }
    uVar1 = 0;
  }
  else {
    FUN_00149fe4(param_1,1);
    uVar1 = (**(code **)(param_1 + 0x738))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x670));
    FUN_00149fe4(param_1,0);
  }
  return uVar1;
}

