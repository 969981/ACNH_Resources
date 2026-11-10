
void * FUN_00143430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  __s = (void *)FUN_001432f0(0x1f0);
  if (__s != (void *)0x0) {
    memset(__s,0,0x1f0);
    lVar2 = FUN_00143340(0x1000,param_1);
    *(long *)((long)__s + 0x1d0) = lVar2;
    if (lVar2 != 0) {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,PTR_FUN_04bcb738,__s,lVar2,param_1,uVar1);
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        local_50 = 0;
        local_44 = 0xffffffff;
        uVar4 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_44,&local_50,uVar4);
        nnosSetThreadCoreMask(__s,local_44,local_50);
        if (param_4 != 0) {
          nnosSetThreadNamePointer(__s,param_4);
        }
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
      }
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        return __s;
      }
      FUN_00143598(__s);
      return (void *)0x0;
    }
    FUN_00143300(__s);
  }
  nnResultIsFailure(0xffffffff);
  return (void *)0x0;
}

