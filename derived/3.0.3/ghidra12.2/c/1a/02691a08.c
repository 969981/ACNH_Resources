
long FUN_02691a08(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_026917f4(param_1,param_2 + 0x1c);
  if (lVar2 == 0) {
    uVar1 = FUN_026b35a0(param_1);
    lVar2 = param_1 + 4 + (ulong)uVar1 * 0x5f0;
    if (7 < uVar1) {
      lVar2 = param_1 + 4;
    }
    FUN_027b5aa4(lVar2,param_2);
  }
  return lVar2;
}

