
long FUN_001439ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_001433c8();
  if (iVar1 != -1) {
    if (iVar1 < 0x32) {
      lVar2 = FUN_00143430(0x2000,param_1,param_2,"LibcurlResolver");
      if (lVar2 == 0) {
        return 0;
      }
      FUN_001437f4(lVar2);
      nnosStartThread(lVar2);
      return lVar2;
    }
    nnsocketSetLastErrno(0xb);
  }
  return 0;
}

