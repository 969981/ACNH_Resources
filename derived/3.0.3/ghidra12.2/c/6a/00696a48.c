
undefined8 FUN_00696a48(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_1100 [128];
  char acStack_1040 [4096];
  
  memset(acStack_1040,0,0x1000);
  uVar1 = nn::util::SNPrintf(acStack_1040,0x1000,"%s: ",param_2);
  if (uVar1 < 0x1000) {
    uVar4 = (ulong)uVar1;
    iVar2 = nn::util::VSNPrintf(acStack_1040 + uVar4,0x1000 - uVar4,param_3,auStack_1100 + 0x80);
    if (uVar4 + (long)iVar2 < 0x1000) {
      lVar3 = FUN_0014e05c(*param_1,acStack_1040);
      if (lVar3 == 0) {
        return 0x806db;
      }
      *param_1 = lVar3;
      return 0;
    }
  }
  return 0x2db;
}

